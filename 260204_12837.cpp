//12837
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
long long tree[4000001];


long long init(int start, int end, int node){
	if(start == end){
		return tree[node] = 0;
	}
	
	int mid = (start + end) / 2;
	
	return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

long long query(int start, int end, int node, int left, int right){
	if(left > end || right < start){
		return 0;
	}
	
	if(left <= start && end <= right){
		return tree[node];
	}
	
	int mid = (start + end) / 2;
	
	return query(start, mid, node * 2, left, right) + query(mid + 1, end, node * 2 + 1, left, right);
}

void update(int start, int end, int node, int index, int num){
	if(index < start || index > end){
		return;
	}
	
	tree[node] += num;
	
	if(start == end){
		return;
	}
	
	int mid = (start + end) / 2;
	
	update(start, mid, node * 2, index, num);
	update(mid + 1, end, node * 2 + 1, index, num);
}





int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N >> M;
	init(0, N - 1, 1);
		
	for(int i = 0; i < M; i++){
		long long a, b, c;
		cin >> a >> b >> c;
		
		if(a == 1){
			update(0, N - 1, 1, b - 1, c);
		}
		else if(a == 2){
			printf("%lld\n", query(0, N - 1, 1, b - 1, c - 1));
		}
	}
	
	
	
	
	
	
	
	return 0;
}
