//1395
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

long long N, M;
long long tree[1000001 * 4];
long long lazy[1000001 * 4];

long long init(long long start, long long end, long long node){
	if(start == end){
		return tree[node] = 0;
	}
	
	long long mid = (start + end) / 2;
	
	return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

void propagate(int node, int start, int end){
	if(lazy[node] == 0){
		return;
	}
	
	int len = end - start + 1;
	
	tree[node] = (long long)len - tree[node];

	if(start != end){
		lazy[node * 2] ^= lazy[node];
		lazy[node * 2 + 1] ^= lazy[node];
	}
	
	lazy[node] = 0;
}

void update(int node, int start, int end, int l, int r){
	propagate(node, start, end);
	
	if(r < start || end < l){
		return;
	}
	
	if(l <= start && end <= r){
		lazy[node] = lazy[node] ^ 1;

		propagate(node, start, end);
		return;
	}
	
	int mid = (start + end) / 2;
	
	update(node * 2, start, mid, l, r);
	update(node * 2 + 1, mid + 1, end, l, r);
	
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

long long query(int node, int start, int end, int l, int r){
	if(r < start || end < l){
		return 0;
	}
	
	propagate(node, start, end);
	
	if(l <= start && end <= r){
		return tree[node];
	}
	
	int mid = (start + end) / 2;
	
	long long left = query(node * 2, start, mid, l, r);
	long long right = query(node * 2 + 1, mid + 1, end, l, r);
	
	return left + right;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N >> M;	
	init(0, N - 1, 1);
	
	for(int i = 0; i < M; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		if(a == 0){
			update(1, 0, N - 1, b - 1, c - 1);
		}
		else if(a == 1){
			printf("%lld\n", query(1, 0, N - 1, b - 1, c - 1));
		}
	}
		
	return 0;
}
