#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>
#include <cmath>

using namespace std;
/*
//bfs_2
bool check[101][101] = {false};
queue <pair<int, int> > q;

int N, M;

int map[101][101];
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
			int ay = b + dy[i];
			
			if(0 <= ax && 0 <= ay && ax < N && ay < M && map[ax][ay] == 1 && check[ax][ay] == false){
				q.push({ax, ay});
				check[ax][ay] = true;
			}
		}
		
	}
}
*/

/*
//1(2178
bool check[101][101] = {false};
queue <pair<int, int> > q;

int N, M, l = 1;

int map[101][101];
int dp[101][101];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void bfs(int x, int y){
	q.push({x, y});
	check[x][y] = true;
	
	while(!q.empty()){
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		
		int n = 0;
		for(int i = 0; i < 4; i++){
			int ax = a + dx[i];
			int ay = b + dy[i];
			
			if(0 <= ax && 0 <= ay && ax < M && ay < N && map[ax][ay] == 1 && check[ax][ay] == false){
				q.push({ax, ay});
				dp[ax][ay] = dp[a][b] + 1;
				check[ax][ay] = true;
//				printf("%d %d %d %d %d\n", a, b, ax, ay, dp[ax][ay]);
			}
		}
//		printf("\n");
		l++;
	}
}
*/

/*
//2(2667
queue <pair<int, int> > q;

bool check[26][26] = {false};
int map[26][26];
vector <int> dp;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int L = 0, l = 0;

void bfs(int x, int y){
	q.push({x, y});
	check[x][y] = true;
	dp[L] = 1;
	
	while(!q.empty()){
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		
		for(int i = 0; i < 4; i++){
			int ax = a + dx[i];
			int ay = b + dy[i];
			
			if(0 <= ax && 0 <= ay && ax < l && ay < l && map[ax][ay] == 1 && check[ax][ay] == false){
				dp[L]++;
				q.push({ax, ay});
				check[ax][ay] = true;
			}
		}
	}
}
*/


//3(2583
bool check[101][101] = {false};
vector <int> dp;
int N, M, K, L = 0;
int map[101][101];
queue <pair<int, int> > q;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void bfs(int x, int y){
	q.push({x, y});
	check[x][y] = true;
	dp[L] = 1;
	
	while(!q.empty()){
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		
		for(int i = 0; i < 4; i++){
			int ax = a + dx[i];
			int ay = b + dy[i];
			
			if(0 <= ax && ax < N && 0 <= ay && ay < M && map[ax][ay] == 0 && check[ax][ay] == false){
				dp[L]++;
				q.push({ax, ay});
				check[ax][ay] = true;
			}
		}
	}
}
















int main(){
	/*
	//1(2178
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			int a = 0;
			scanf("%1d", &a);
			map[j][i] = a;
		}
	}
	
//	for(int i = 0; i < N; i++){
//		for(int j = 0; j < M; j++){
//			printf("%d ", map[j][i]);
//		}
//		printf("\n");
//	}
	
	dp[0][0] = 1;
	bfs(0, 0);
	
	printf("%d", dp[M - 1][N - 1]);
	*/
	
	/*
	//2(2667
	cin >> l;
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < l; j++){
			int a = 0;
			scanf("%1d", &a);
			map[j][i] = a;
		}
	}
	
//	for(int i = 0; i < l; i++){
//		for(int j = 0; j < l; j++){
//			printf("%d ", map[j][i]);
//		}
//		printf("\n");
//	}
	
	//printf("\n\n");
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < l; j++){
			if(check[j][i] == false && map[j][i] == 1){
				dp.push_back(0);
//				printf("%d %d\n", j, i);
				bfs(j, i);
				L++;
			}
		}
	}
	
	printf("%d\n", L);
	
	sort(dp.begin(), dp.end());
	
	for(int i = 0; i < L; i++){
		printf("%d\n", dp[i]);
	}
	*/
	
	
	//3(2583
	cin >> M >> N >> K;
	
	for(int i = 0; i < K; i++){
		int ax, ay, bx, by;
		cin >> ax >> ay >> bx >> by;
		dp.push_back(0);
		
		for(int i = ay; i < by; i++){
			for(int j = ax; j < bx; j++){
				map[j][i] = 1;
			}
		}
	}
	
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			printf("%d ", map[j][i]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			if(map[j][i] == 0 && check[j][i] == false){
				bfs(j, i);
				L++;
			}
		}
	}
	
	printf("%d", dp.size());
	
	for(int i = 0; i < dp.size(); i++){
		printf("%d ", dp[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
