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
/*
//1(1240
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
*/


//2(1167
int V;
vector <pair<int, int> > v[100001];
vector <int> a;
int check[100001] = {false};

void dfs(int x, int y){
	check[x] = true;
	int n = 0;
	
	for(int i = 0; i < v[x].size(); i++){
		int next = v[x][i].first;
		if(check[next] == false){
			dfs(next, y + v[x][i].second);
			n++;
		}
	}
	if(n == 0){
		a.push_back(y);
	}
}

bool cmp(int left, int right){
	return left > right;
}


int main(){
	/*
	//1(1240
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
		memset(check, false, sizeof(check));
	}
	*/
	
	
	//2(1167
	cin >> V;
	
	for(int i = 1; i <= V; i++){
		int k;
		cin >> k;
		while(1){
			int n, m;
			cin >> n;
			if(n == -1){
				break;
			}
			else{
				cin >> m;
				v[k].push_back({n, m});
			}
		}
	}
	
	for(int i = 1; i <= V; i++){
		dfs(i, 0);
		memset(check, false, sizeof(check));
	}
	
	sort(a.begin(), a.end(), cmp);
	printf("%d\n", a[0]);
	
//	printf("\n\n");
//	for(int i = 1; i <= V; i++){
//		printf("%d   ", v[i].size());
//		for(int j = 0; j < v[i].size(); j++){
//			printf("%d ", v[i][j].first);
//		}
//		printf("\n");
//	}

	return 0;
}
