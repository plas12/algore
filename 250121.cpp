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

int N, M;

int arr[400];
int tree[400];

long long init(long long start, long long end, long long node){
	long long mid = (start + end) / 2;
	
	printf("%d %d %d %d   :   ", start, end, node, mid);
	for(int i = 0; i < N + 10; i++){
		printf("%d ", tree[i]);
	}
	printf("\n");
	
	if(start == end){
		return tree[node] = arr[start];
	}
	
	return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		int dummy = 0;
		cin >> dummy;
		
		arr[i] = dummy;
	}
	
	init(0, N - 1, 1);
	
	for(int i = 0; i < N + 10; i++){
		printf("%d ", tree[i]);
	}
	printf("\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
