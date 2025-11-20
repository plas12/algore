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

/*
//1(1753
int V, E, K;

vector <int> map;
vector <pair<int, int> > v[20001];

priority_queue <pair<int, int> , vector <pair<int, int> >, greater <pair<int, int > > > pq;
*/


//2(1916
int N, M;

vector <int> map;
vector <pair<int, int> > v[1001];

priority_queue <pair<int, int> , vector <pair<int, int> >, greater <pair<int, int > > > pq;







int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(1753
	cin >> V >> E >> K;
	
	pq.push({0, K - 1});
	
	for(int i = 0; i < V; i++){
		map.push_back(3000001);
	}
	map[K - 1] = 0;
	
	for(int i = 0; i < E; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		v[a - 1].push_back({b - 1, c});
	}
	
	while(!pq.empty()){
		int dummy = pq.top().second;
		int w = pq.top().first;
		pq.pop();
		
		for(int i = 0; i < v[dummy].size(); i++){
			int a = v[dummy][i].first;
			int b = v[dummy][i].second;
			
			if(map[a] > map[dummy] + b){
				map[a] = map[dummy] + b;
				pq.push({map[dummy] + b, a});
			}
		}
	}
	
	for(int i = 0; i < map.size(); i++){
		if(map[i] == 3000001){
			printf("INF\n");
		}
		else{
			printf("%d\n", map[i]);	
		}
	}
	*/
	
	
	//2(1916
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		map.push_back(2147483647);
	}
	
	
	for(int i = 0; i < M; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		v[a - 1].push_back({b - 1, c});
	}
	
	int n, m;
	cin >> n >> m;
	
	pq.push({0, n - 1});
	map[n - 1] = 0;
	
	while(!pq.empty()){
		int dummy = pq.top().second;
		int w = pq.top().first;
		pq.pop();
		
		for(int i = 0; i < v[dummy].size(); i++){
			int a = v[dummy][i].first;
			int b = v[dummy][i].second;
			
			if(map[a] > map[dummy] + b){
				map[a] = map[dummy] + b;
				pq.push({map[dummy] + b, a});
			}
		}
	}
	
//	for(int i = 0; i < map.size(); i++){
//		printf("%d ", map[i]);
//	}
	printf("%d", map[m - 1]);	
	
	
	
	
	
	
	
	
	return 0;
}
