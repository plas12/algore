#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;



/*
//dfs
bool check[] = false;
void dfs(int x){
	check[x] = true;
	
	for(int i = 0; i < v[x].size(); i++){
		int next = v[x][i];
		if(check[naxt] == false){
			dfs(next);
		}
	}
}
*/

/*
//bfs
bool check[] = false;
void bfs(int x){
	queue <int> q;
	q.push(x);
	check[x] = true;
	
	while(!q.empty()){
		int n = q.front();
		q.pop();
		
		for(int i = 0; i < v[n].size() i++){
			int next = v[n][i];
			
			if(check[next] = false){
				q.push(next);
				check[next] = true;
			}
		}
	}
}
*/

/*
//1(1260
vector <int> v[10001];
bool check1[1001] = {false};
bool check2[1001] = {false};

void dfs(int x){
	check1[x] = true;
	
	for(int i = 0; i < v[x].size(); i++){
		int next = v[x][i];
		if(check1[next] == false){
			printf("%d ", next);
			dfs(next);
		}
	}
}

void bfs(int x){
	queue <int> q;	
	q.push(x);
	
	while(!q.empty()){
		int n = q.front();
		q.pop();
		check2[n] = true;
		
		for(int i = 0; i < v[n].size(); i++){
			int next = v[n][i];
			
			if(check2[next] == false){
				printf("%d ", next);
				q.push(next);
				check2[next] = true;
			}
		}
	}
}
*/

/*
//2(2606
vector <int> v[101];
bool check[101] = {false};
int cnt = 0;

void dfs(int x){
	check[x] = true;
	
	for(int i = 0; i < v[x].size(); i++){
		int n = v[x][i];
		if(check[n] == false){
			cnt++;
			dfs(n);
		}
	}
	
}
*/

/*
//3(11724
vector <int> v[1001];
bool check[1001];
int cnt = 0;

void dfs(int x){
	check[x] = true;
	
	for(int i = 0; i < v[x].size(); i++){
		int n = v[x][i];
		if(check[n] == false){
			dfs(n);
		}
	}
}
*/


//4(15501
int a[1000001];
int b[1000001];
int c[1000001];






int main(){
	/*
	//1(1260
	int n, m, start;
	
	cin >> n >> m >> start;	
	
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for(int i = 1; i <= m; i++){
		sort(v[i].begin(), v[i].end());
	}
	
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < v[i].size(); j++){
//			printf("%d ", v[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
	
	printf("%d ", start);
	dfs(start);
	
	printf("\n");
	
	printf("%d ", start);
	bfs(start);
	*/
	
	/*
	//2(2606
	int n, m;
	cin >> n >> m;
	
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for(int i = 1; i <= n; i++){
		sort(v[i].begin(), v[i].end());
	}
	
	dfs(1);
	
	printf("%d", cnt);
	*/
	
	/*
	//3(11724
	int n, m;
	cin >> n >> m;
	
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for(int i = 1; i <= n; i++){
		sort(v[i].begin(), v[i].end());
	}
	
	for(int i = 1; i <= n; i++){
		if(check[i] == false){
			dfs(i);
			cnt++;
		}
	}
	
	printf("%d\n", cnt);
	*/
	
	
	//4(15501
	int l= 0;
	cin >> l;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
