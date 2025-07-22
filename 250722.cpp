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
//1(1937
int N = 0;
int map[501][501];				//map[y][x]
int dp[501][501];				//dp[y][x]

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int bfs(int y, int x){
	if(dp[y][x] == -1){
		int result = 0;
		for(int i = 0; i < 4; i++){
			int ax = x + dx[i];
			int ay = y + dy[i];
			
			if(0 <= ax && ax < N && 0 <= ay && ay < N){
				if(map[y][x] < 	map[ay][ax]){
					result = max(result, bfs(ay, ax));
				}
			}
		}
		
		result++;
		
		//printf("%d %d : %d\n", x, y, result);
		
		if(result == 0){
			dp[y][x] = 1;
		}
		else{
			dp[y][x] = result;
		}
		
		return result;
	}
	else{
		return dp[y][x];
	}
}
*/

/*
//2(1697------------------------------
int N, K;
bool check[100001] = {false};

void bfs(int N){
	queue <pair<int, int> > q;
	q.push({N, 0});
	
	while(!q.empty()){
		int n = q.front().first;
		int depth = q.front().second;
		q.pop();
		
		check[n] == true;
		
		if(n == K){
			printf("%d", depth);
			return;
		}
		
		if(0 <= n + 1 && n + 1 <= 100000 && check[n + 1] == false){
			q.push({n + 1, depth + 1});
		}
		if(0 <= n - 1 && n - 1 <= 100000 && check[n - 1] == false){
			q.push({n - 1, depth + 1});
		}
		if(0 <= n * 2 && n * 2 <= 100000 && check[n * 2] == false){
			q.push({n * 2, depth + 1});
		}
		
	}
}
*/


//3(5567
int N, M;
vector <int> v[501];
bool check[501] = {false};






int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(1937
	cin >> N;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			int dummy;
			cin >> dummy;
			
			map[i][j] = dummy;
			
			dp[i][j] = -1;
		}
	}
	
//	printf("\n\n");
//	for(int i = 0; i < N; i++){
//		for(int j = 0; j < N; j++){
//			printf("%d ", dp[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
	
//	printf("\n\n");
	int result = -1;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			result = max(result, bfs(i, j));
		}
	}
	
//	printf("\n\n");
//	for(int i = 0; i < N; i++){
//		for(int j = 0; j < N; j++){
//			printf("%d ", dp[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
	
	printf("%d\n", result);
	*/
	
	/*
	//2(1967
	cin >> N >> K;
	
	bfs(N);
	*/
	
	
	//3(5567
	cin >> N >> M;
	
	for(int i = 0; i < M; i++){
		int a, b;
		cin >> a >> b;
		
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for(int i = 0; i < v[1].size(); i++){
		int n = v[1][i];
		check[n] = true;
		
		for(int j = 0; j < v[n].size(); j++){
			check[v[n][j]] = true;
		}
	}
	
//	printf("\n\n");
//	for(int i = 1; i <= N; i++){
//		printf("%d\n", check[i]);
//	}
//	printf("\n\n");
	
	check[1] = false;
	
	int result = 0;
	for(int i = 1; i <= N; i++){
		if(check[i] == true){
			result++;
		}
	}
	
	printf("%d", result);
	
	
	return 0;
}
