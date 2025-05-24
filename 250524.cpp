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
//1(backtracking   *dfs / bfs

//dfs 원본 
vector <int> graph[];
bool check[] = {false};

void dfs(int node){
	check[node] = true;
	
	for(int i = 0; i < graph[node].size(); i++){
		int next = graph[node][i];
		
		if(check[next] == false){
			dfs(next);
		}
	}
}

//backtracking dfs 원본 
vector <int> graph[];
bool check[] = {false};

void dfs(int node){
	check[node] = true;
	
	for(int i = 0; i < graph[node].size(); i++){
		int next = graph[node][i];
		
		if(check[next] == false){
			dfs(next);
			check[node] = false;
		}
	}
}

//bfs
queue <pair<int, int> > q;
int map[][];
bool check[][];

int N, M;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void bfs(int x, int y){
	q.push({x, y});
	check[x][y] = true;
	
	while(!q.empty()){
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		
		for(int i = 0; i < 4; i++){
			int ax = a + dx[i];
			int by = b + dy[i];
			
			if(0 <= ax && ax < N && 0 <= by && by < M && map[ax][ay] == 1 && check[ax][ay] == false){
				q.push({ax, ay});
				check[ax][ay] = true;
			}
		}
	}
}
*/
	
/*
//1(1987
int R, C, M = 0;

int alp[26] = {0};
vector <char> graph[21];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y, int depth){
//	printf("!!! %d %d %d : ", x, y, depth);
//	for(int i = 0; i < 26; i++){
//		printf("%d ", alp[i]);
//	}
//	printf("\n");
	
	alp[graph[x][y] - 'A'] = 1;
	M = max(M, depth);
	
	for(int i = 0; i < 4; i++){
		int a = x + dx[i];
		int b = y + dy[i];
		
		if(0 <= a && a < R && 0 <= b && b < C && alp[graph[a][b] - 'A'] == 0){
			dfs(a, b, depth + 1);
			alp[graph[a][b] - 'A'] = 0;
//			printf("\n\n\n");
		}
	}
}
*/


//2(10819
int N = 0, M = -1, A = 0, tri = 0;
vector <int> v; 
bool check[9] = {false};

void dfs(int n, int a){
	check[n] = true;
	if(tri == 0){
		for(int i = 0; i < N; i++){
			if(check[i] == false){
				dfs(i, n);
				check[n] = false;
			}
		}
	}
	else{
		A += abs(a - n);
		for(int i = 0; i < N; i++){
			if(check[i] == false){
				dfs(i, n);
				check[n] = false;
			}
		}
	}
	
	printf("%d ", A);
	tri = 1;
}


int main(){
	/*
	//1(1987
	scanf("%d %d\n", &R, &C);
	
	for(int i = 0; i < R; i++){
		for(int j = 0; j < C; j++){
			char n;
			scanf("%c", &n);
			
			graph[i].push_back(n);
		}
		char n;
		scanf("%c", &n);
		
//		for(int j = 0; j < graph[i].size(); j++){
//			printf("!%c! ", graph[i][j]);
//		}
//		printf("\n\n");
	}

	dfs(0, 0, 1);
	
	printf("%d", M);
	*/
	
	
	//2(10819
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		v.push_back(n);
	}
	
	for(int i = 0; i < N; i++){
		A = 0;
		dfs(i, 0);
		M = max(M, A);
	}
	
	printf("%d", M);
	
	
	
	
	
	
	return 0;
}
