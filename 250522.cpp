#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;

//10974, 15649, 1182, 1987, 10819, 13023, 2023, 9663

/*
//1(10974
int n, m;
int arr[10];
bool check[10];

void dfs(int depth){
	if(depth == n){
		for(int i = 0; i < n; i++){
			printf("%d ", arr[i]);
		}
		printf("\n");
		
		return;
	}
	
	for(int i = 1; i <= n; i++){
		if(!check[i]){
			check[i] = true;
			arr[depth] = i;
			dfs(depth + 1);
			check[i] = false;
		}
	}
}
*/

/*
//2(15649
int n, m;
int arr[10];
bool check[10];

void dfs(int depth){
	if(depth == m){
		for(int i = 0; i < m; i++){
			printf("%d ", arr[i]);
		}
		printf("\n");
		
		return;
	}
	
	for(int i = 1; i <= n; i++){
		if(!check[i]){
			check[i] = true;
			arr[depth] = i;
			dfs(depth + 1);
			check[i] = false;
		}
	}
}
*/


//3(1182
int cnt = 0, N, S;
int a[21];
bool check[21] = {false};

void dfs(int depth){
	if(depth == S && ){
		cnt++;
		
		return;
	}
}




int main(){
	/*
	//1(10974
	scanf("%d",&n);
	
	dfs(0);
	*/
	
	/*
	//2(15649
	scanf("%d %d", &n, &m);
	
	dfs(0);
	*/
	
	
	//3(1182
	scanf("%d %d", &N, &S);
	
	for(int i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}
	
	dfs(0);
	
	printf("%d", cnt);
	
	
	
	
	
	
	
	return 0;
}
