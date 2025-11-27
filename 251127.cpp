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
//1(1916
int N, M;

vector <int> map;
vector <pair<int, int> > v[1001];

priority_queue <pair<int, int> , vector <pair<int, int> >, greater <pair<int, int > > > pq;
*/

/*
//2(34760
vector <int> v;
*/


//3(1865
int tc;




int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(1916
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
		
		if(map[dummy] < w){
			continue;
		}
		
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
	*/
	
	/*
	//2(34760
	int n = -1;
	
	for(int i = 0; i < 15; i++){
		int N;
		cin >> N;
		
		v.push_back(N);
		
		n = max(n, N);
	}
	
	for(int i = 0; i < v.size(); i++){
		if(v[i] == n && i != 14){
			printf("%d", n + 1);
			return 0;
		}
	}
	
	printf("%d", n);
	*/
	
	
	//3(1865
	cin >> tc;
	
	for(int i = 0; i < tc; i++){
		int N, M, W;
		
		vector <int> wam;
		vector <pair<int ,int> > v[501];
		
		cin >> N >> M >> W;
		
		for(int j = 0; j < M; j++){
			int a, b, c;
			cin >> a >> b >> c;
			
			v[a - 1].push_back({b - 1, c});
			v[b - 1].push_back({a - 1, c});
		}
		for(int j = 0; j < W; j++){
			int a, b, c;
			cin >> a >> b >> c;
			
			v[a - 1].push_back({b - 1, -1 * c});
			wam.push_back(a - 1);
		}
		
		int cnt = 0;
		for(int j = 0; j < wam.size(); j++){
			int dummy = wam[j];
			
			priority_queue <pair<int, int> , vector <pair<int, int> >, greater <pair<int, int> > > pq;
			vector <int> map;
			
			map.assign(999999999);
			
			map[dummy] = 0;
			pq.push({0, dummy});
			
			while(!pq.empty()){
				int a = pq.top().second;
				int b = pq.top().first;
				pq.top();
				
				for(int k = 0; k < v[a].size(); k++){
					int c = v[a][k].first;
					int d = v[a][k].second;
					
					if(map[c] > map[a] + d){
						map[c] = map[a] + d;
						pq.push({map[a] + d, c});
					}
				}
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}





