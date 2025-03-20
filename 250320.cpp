#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>
#include <cmath>

using namespace std;
/*
//1(10026
queue <pair<int, int> > q;

char map1[101][101];
char map2[101][101];

bool check1[101][101] = {false};
bool check2[101][101] = {false};

int L1 = 0,L2 = 0, l;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void bfs(int x, int y, int n, int m){
	q.push({x, y});
	if(n == 0){
		check1[x][y] = true;
	}
	else{
		check2[x][y] = true;
	}
	
	while(!q.empty()){
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		
		for(int i = 0; i < 4; i++){
			int ax = a + dx[i];
			int ay = b + dy[i];
			
			if(n == 0){
				if(0 <= ax && ax < l && 0 <= ay && ay < l && map1[ax][ay] == m && check1[ax][ay] == false){
					q.push({ax, ay});
					check1[ax][ay] = true;
				}
			}
			else{
				if(0 <= ax && ax < l && 0 <= ay && ay < l  && map2[ax][ay] == m && check2[ax][ay] == false){
					q.push({ax, ay});
					check2[ax][ay] = true;
				}
			}
		}
	}
}
*/

/*
//2(2468
queue <pair<int, int> > q;

vector <int> v;

int map[101][101];

bool check[101][101] = {false};

int L = 0, l = 0, s = 101, b = 0;

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
			
			if(0 <= ax && ax < l && 0 <= ay && ay < l && L < map[ax][ay] && check[ax][ay] == false){
				q.push({ax, ay});
				check[ax][ay] = true;
				//printf("%d %d\n", ax, ay);
			}
		}
	}
}

bool cmp(int left, int right){
	return left > right;
}
*/


//3(1240
vector <pair<int, int> > v[1001]; 

bool check[1001] = {false};

int last;

void dfs(int x, int y){
	check[x] = true;
	if(x == last){
		printf("%d\n", y);
	}
	for(int i = 0; i < v[x].size(); i++){
		int next = v[x][i].first;
		
		if(check[next] == false){
			dfs(next, y + v[x][i].second);
			
		}
	}
}






int main(){
	/*
	//1(10026
	cin >> l;
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < l; j++){
			char n = 0;
			cin >> n;
			if(n == 'G'){
				map1[j][i] = 'G';
				map2[j][i] = 'R';
			}
			else{
				map1[j][i] = n;
				map2[j][i] = n;
			}
		}
	}
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < l; j++){
			if(check1[j][i] == false){
				bfs(j, i, 0, map1[j][i]);
				L1++;
			}
			if(check2[j][i] == false){
				bfs(j, i, 1, map2[j][i]);
				L2++;
			}
		}
	}
	
	printf("%d %d", L1, L2);
	*/
	
	/*
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
	L = s;
	
	v.push_back(1);
	
	while(L < b){
		int k = 0;
		//printf("\n\n%d\n\n", L);
		for(int i = 0; i < l; i++){
			for(int j = 0; j < l; j++){
				if(L < map[j][i] && check[j][i] == false){
					bfs(j, i);
					k++;
					//printf("%d %d\n", j, i);
				}
			}
		}
		
		v.push_back(k);
		memset(check, false, sizeof(check));
		L++;
	}
	
	sort(v.begin(), v.end(), cmp);
	
	printf("%d\n", v[0]);
	*/
	
	
	//3(1240
	int N, M;
	cin >> N >> M;
	
	for(int i = 1; i < N; i++){
		int a, b, n;
		cin >> a >> b >> n;
		v[a].push_back({b, n});
		v[b].push_back({a, n});
	}
	
	for(int i = 0; i < M; i++){
		int start;
		cin >> start >> last;
		dfs(start, 0);
	}
	
	
	return 0;
}
