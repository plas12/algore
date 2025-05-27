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
/*
//1(1182
int cnt = 0, N, S;
vector <int> v;
bool check[21] = {false};

void dfs(int a, int depth){
	if(depth == N){
		if(a == S){
			cnt++;
		}
		
		return;
	}
	
	dfs(a, depth + 1);
	dfs(a +  v[depth], depth + 1);
}
*/

/*
//2(10819
int N = 0, M = -1401;
vector <int> A;
int arr[9];
bool check[9] = {false};

void dfs(int depth){
	if(depth == N){
		int n = 0;
		for(int i = 0; i < A.size() - 1; i++){
			n += abs(A[arr[i]] - A[arr[i + 1]]); 
//			printf("%d %d\n", n, A[arr[i]] - A[arr[i + 1]]); 	
		}
		M = max(M, n);
//		printf("\n%d %d\n\n", n, M);
		
		return;
	}
	
	for(int i = 0; i < A.size(); i++){
		if(check[i] == false){
			check[i] = true;
			
			arr[depth] = i;
			dfs(depth + 1);
			
			check[i] = false;
		}
	}
}
*/


//3(13023
int N, M;

vector <pair<int, int> > v;

pair <int, int> p[6];
int arr[6];
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








int main(){
	/*
	//1(1182
	scanf("%d %d", &N, &S);
	
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		v.push_back(n);
	}
	
	dfs(0, 0);
	
	if(S == 0){
		cnt--;
	}
	
	printf("%d", cnt);
	*/
	
	/*
	//2(10819
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		A.push_back(n);
	}
	
	dfs(0);
	
	printf("%d", M);
	*/
	
	
	//3(13023
	
	
	scanf("%d %d", &N, &M);
	
	for(int i = 0; i < M; i++){
		int n, m;
		scnaf("%d %d", &n, &m);
		
		v.push_back({n, m});
		v.push_back({m, n});
	}
	
	dfs(0);
	
	
	
	
	
	
	
	
	
	return 0;
}

