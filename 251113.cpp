#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

//11657, 1865, 1219


//1(11657
int N, M;

vector <int> map;
vector <pair<int, int> > v[500];





int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	//1(11657
	cin >> N >> M;
	
	map.assign(N, 9999999);	
	
	map[0] = 0;
	
	for(int i = 0; i < M; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		v[a - 1].push_back({b - 1, c});
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < v[i].size(); j++){
			if(map[v[i][j].first] > map[i] + v[i][j].second){
				map[v[i][j].first] = map[i] + v[i][j].second;
			}
		}
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < v[i].size(); j++){
			if(map[v[i][j].first] > map[i] + v[i][j].second){
				printf("-1");
				return 0;
			}
		}
	}
	
	for(int i = 1; i < map.size(); i++){
		if(map[i] == 9999999){
			printf("-1\n");
		}
		else{
			printf("%d\n", map[i]);
		}
	}
	
	
	
	
	
	
	return 0;
}
