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

//2042, 2268, 11505

/*
//세그먼트 트리
int init(int start, int end, int node){
	if(start == end){//끝에 왔을때 
		return tree[node] = arr[start];//arr : 처음 입력 받은 배열
	}
	
	int mid = (start + end) / 2;
	
	return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

int query(int start, int end, int node, int left, int right){
	if(left > end || right < start){
		return 0;
	}
	
	if(left <= start && end <= right){
		return tree[node];
	}
	
	int mid(start + end) / 2;
	
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
	update(mid + 1, end, node * 2, index, num);
}
*/


//1(2042
long long N, M, K;

long long arr[4000001];
long long tree[4000001];

long long init(long long start, long long end, long long node){
	if(start == end){
		return tree[node] = arr[start];
	}
	
	long long mid = (start + end) / 2;
	
	printf("%d %d %d %d", start, end, node, mid);
	
	return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

long long query(long long start, long long end, long long node, long long left, long long right){
	if(left > end || right < start){
		return 0;
	}
	
	if(left <= start && end <= right){
		return tree[node];
	}
	
	long long mid = (start + end) / 2;
	
	return query(start, mid, node * 2, left, right) + query(mid + 1, end, node * 2 + 1, left, right);
}

void update(long long start, long long end, long long node, long long index, long long num){
	if(index < start || index > end){
		return;
	}
	
	tree[node] += num;
	
	if(start == end){
		return;
	}
	
	long long mid = (start + end) / 2;
	
	update(start, mid, node * 2, index, num);
	update(mid + 1, end, node * 2, index, num);
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	//1(2042
	cin >> N >> M >> K;
	
	for(int i = 0; i < N; i++){
		long long n = 0;
		cin >> n;
		
		arr[i] = n;
	}
	
	init(0, N- 1, 1);
	
	for(int i = 0; i < N * 4; i++){
		printf("%d ", tree[i]);
	}
	
//	for(int i = 0; i < M + K; i++){
//		long long a, b, c;
//		cin >> a >> b >> c;
//		
//		if(a == 1){
//			arr[b - 1] = c;			
//			update(0, N - 1, 1, b - 1, c - arr[b - 1]);
//		}
//		else if(a == 2){
//			printf("%d\n", query(0, N - 1, 1, b - 1, c - 1));
//		}
//	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
