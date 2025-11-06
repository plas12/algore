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

//11403, 1753, 1916, 1956, 10159, 11404, 31932

/*
//1(11403
int N;
vector <int> v[101];


void floyd(){
	for(int k = 0; k < N; k++){
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				if(v[i][k] && v[k][j]){
					v[i][j] = 1;
				}
			}
		}
	}
}
*/


//2(1753
int V, E, K;

vector <int> check;
vector <pair<int, int> > index[20001];
vector <int> v;

priority_queue <pair<int, int> , vector <pair<int, int> >, greater <pair<int, int> > > pq;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(11403
	cin >> N;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			int dummy;
			cin >> dummy;
			
			v[i].push_back(dummy);
		}
	}
	
	floyd();
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			printf("%d ", v[i][j]);
		}
		printf("\n");
	}
	*/
	
	
	//2(1753
	cin >> V >> E >> K;
	
	check.assign(V, 0);
	v.assign(V, 11);
	
	for(int i = 0; i < E; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		index[a].push_back({b, c});
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
