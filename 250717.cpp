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

//1926, 1697, 5567, 15971, 19581, 1937

/*
//1(1926
int N, M;
int map[501][501] = {0};
int dummy = 0;
int result = 0;
bool check[501][501] = {false};
queue <pair<int, int> > q;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int x, int y){
	q.push({x, y});
	check[x][y] = true;
	dummy++;
	
	while(!q.empty()){
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		
		for(int i = 0; i < 4; i++){
			int ax = a + dx[i];
			int ay = b + dy[i];
			
			if(0 <= ax && ax < N && 0 <= ay && ay < M && map[ax][ay] == 1 && check[ax][ay] == false){
				q.push({ax, ay});
				check[ax][ay] = true;
				dummy++;
			}
		}
	}
	
//	printf("%d\n\n", dummy);
}
*/

/*
//2(1697------------------------------------------
int N, M;
int result[100001];
bool check[100001] = {false};

void bfs(int n){
	queue <pair<int, int> > q;
	
	q.push({n, 0});
	check[n] = true;
	
	while(!q.empty()){
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		
		if(a < 0 || 100000 < a){
			return;
		}
		
		if(check[a] == false){
			
		}
	}
}
*/


//3(1937
int N;
int map[501][501] = {0};
int dp[501][501] = {0};

bool check[501][501] = {false};

int dfs(int x, int y, int n){
	int a = 0, b = 0, c = 0, d = 0;
	
	if(map[x][y] < map[x - 1][y]){
		if(0 <= x - 1){
			a = dfs(x - 1, y, map[x - 1][y]);
		}
	}
	if(map[x][y] < map[x + 1][y]){
		if(x + 1 < N){
			b = dfs(x + 1, y, map[x + 1][y]);
		}
	}
	if(map[x][y] < map[x][y - 1]){
		if(0 <= y - 1){
			c = dfs(x, y - 1, map[x][y - 1]);
		}
	}
	if(map[x][y] < map[x][y + 1]){
		if(y + 1 < N){
			d = dfs(x, y + 1, map[x][y + 1]);
		}
	}
	
	return max(a, max(b, max(c, d)));
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(1926
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			int n = 0;
			cin >> n;
			
			map[i][j] = n;
		}
	}
	
	int cnt = 0;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			if(map[i][j] == 1 && check[i][j] == false){
				cnt++;
				dummy = 0;
				bfs(i, j);	
				
				result = max(result, dummy);
			}
		}
	}
	
	printf("%d\n%d", cnt, result);
	*/
	
	/*
	//2(1697
	cin >> N >> M;
	
	bfs(N);
	*/
	
	
	//3(1937
	cin >> N;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			int n = 0;
			cin >> n;
			
			map[i][j] = n;
		}
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			dp[i][j] = dfs(i, j, map[i][j]);
		}
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
