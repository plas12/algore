//10999
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

long long N, M, K;
long long arr[1000001];
long long tree[1000001 * 4];
long long lazy[1000001 * 4];

long long init(long long start, long long end, long long node){
	if(start == end){
		return tree[node] = arr[start];
	}
	
	long long mid = (start + end) / 2;
	
	return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

void propagate(long long node, long long start, long long end){
	if(lazy[node] == 0){
		return;
	}
	
	tree[node] += lazy[node] * (end - start + 1);
	
	if(start != end){
		lazy[node * 2] += lazy[node];
		lazy[node * 2 + 1] += lazy[node];
	}
	
	lazy[node] = 0; 
}
 
void update(long long node, long long start, long long end, long long l, long long r, long long val){
	propagate(node, start, end);
	
	if(r < start || end < l){
		return;
	}
	
	if(l <= start && end <= r){
		lazy[node] += val;
		propagate(node, start, end);
		return;
	}
	
	long long mid = (start + end) / 2;
	
	update(node * 2, start, mid, l, r, val);
	update(node * 2 + 1, mid + 1, end, l, r, val);
	
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

long long query(long long node, long long start, long long end, long long l, long long r){
	if(r < start || end < l){
		return 0;
	}
	
	propagate(node, start, end);
	
	if(l <= start && end <= r){
		return tree[node];
	}
	
	long long mid = (start + end) / 2;
	
	long long left = query(node * 2, start, mid, l, r);
	long long right = query(node * 2 + 1, mid + 1, end, l, r);
	
	return left + right;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N >> M >> K;	
	
	for(int i = 0; i < N; i++){
		long long dummy;
		cin >> dummy;
		
		arr[i] = dummy;
	}
	init(0, N - 1, 1);
	
	for(int i = 0; i < M + K; i++){
		long long dummy;
		cin >> dummy;
		
		if(dummy == 1){
			long long a, b, c;
			cin >> a >> b >> c;
			
			update(1, 0, N - 1, a - 1, b - 1, c);
			
		}
		else if(dummy == 2){
			long long a, b;
			cin >> a >> b;
			
			printf("%lld\n", query(1, 0, N - 1, a - 1, b - 1));
		}
	}
	
	
	
	
	
	
	return 0;
}
