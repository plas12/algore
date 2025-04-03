#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

//1(1520
int map[501][501];
int dp[501][501];

int N, M;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int dfs(int x, int y){
	if(x == M - 1 && y == N - 1){
		return 1;
	}
	if(dp[x][y] != -1){
		return dp[x][y];
	}
	
	dp[x][y] = 0;
	
	for(int i = 0; i < 4; i++){
		int next_x = x + dx[i];
		int next_y = y + dy[i];
		
		if(next_x < 0 || M <= next_x || next_y < 0 || N <= next_y){
			continue;
		}
		if(map[x][y] <= map[next_x][next_y]){
			continue;
		}
		dp[x][y] = dp[x][y] + dfs(next_x, next_y);
	}
	
	return dp[x][y];
}

int main(){
	
	//1(1520
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			int n = 0;
			cin >> n;
			
			map[j][i] = n;
		}
	}
	
	memset(dp, -1, sizeof(dp));
	
	printf("%d\n", dfs(0, 0));
	
	
	return 0;
}

