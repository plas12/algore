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
//1(2583
int N, M, L = 0;

vector <int> v;
queue <pair<int, int> > q;

int map[101][101];
bool check[101][101];
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
			
			if(0 <= ax && ax < N && 0 <= ay && ay < M && map[ax][ay] == 0 && check[ax][ay] == false){
				q.push({ax, ay});
				check[ax][ay] = true;
				v[L]++;
			}
		}
	}
//	printf("%d \n\n", L);
}
*/


//2(2468
bool check[101][101] = {false};
int map[101][101];
int l = 0, s = 1000 b = 0;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

vector <int> v;

int bfs(int x, int y){
	q.push({x, y});
	check[x][y] = true;
}






















int main(){
	/*
	//1(2583
	int l = 0;
	cin >> M >> N >> l;
	
	for(int n = 0; n < l; n++){
		int ax, ay, bx, by;
		cin >> ax >> ay >> bx >> by;
		
		for(int i = ay; i < by; i++){
			for(int j = ax; j < bx; j++){
				map[j][i] = 1;
			}
		}
	}
	
//	for(int i = 0; i < M; i++){
//		for(int j = 0; j < N; j++){
//			printf("%d ", map[j][i]);
//		}
//		printf("\n");
//	}
	
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			if(map[j][i] != 1 && check[j][i] == false){
				v.push_back(1);
				bfs(j, i);
				L++;
//				printf("%d %d %d\n", j, i, v.size());
			}
		}
	}
	
//	printf("%d\n", v.size());
//	
//	for(int i = 0; i < v.size(); i++){
//		printf("%d ", v[i]);
//	}

	sort(v.begin(), v.end());
	
	printf("%d\n", v.size());
	for(int i = 0; i < v.size(); i++){
		printf("%d ", v[i]);
	}
	*/
	
	
	//2(2468
	cin >> l;
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < l; j++){
			int n = 0;
			cin >> n;
			s = min(s, n);
			b = max(b, n);
			map[j][i] = n;
		}
	}
	
	for(int i = s - 1; i < b; i++){
		
	}
	
	
	
	return 0;
}
