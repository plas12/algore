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

//1197, 1647, 1922, 10423, 21924, 4386, 16398, 2887

/*
//1(1197
int V, E;
int result = 0;

vector <pair< int, pair< int, int > > > v; 
vector <int> parent;

int Find(int x){
	if(x == parent[x]){
		return x;
	}
	
	return parent[x] = Find(parent[x]);
}
*/

/*
//2(1647
int N, M, asdf = -1;
int result = 0;

vector < pair< int, pair<int, int> > > v;
vector <int> parent;

int Find(int x){
	if(x == parent[x]){
		return x;
	}
	
	return parent[x] = Find(parent[x]);
}
*/

/*
//3(1922
int V, E;
int result = 0;

vector <pair< int, pair< int, int > > > v; 
vector <int> parent;

int Find(int x){
	if(x == parent[x]){
		return x;
	}
	
	return parent[x] = Find(parent[x]);
}
*/


//4(10423
int N, M, K;
int result = 0;

vector <pair< int, pair<int, int> > > v;
vector <int> parent;
vector <int> energy;

int Find(int x){
	if(x == parent[x]){
		return x;
	}
	
	return parent[x] = Find(parent[x]);
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(1197
	cin >> V >> E;
	
	for(int i= 0; i <= V; i++){
		parent.push_back(i);
	}
	
	for(int i = 0; i < E; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		v.push_back({c, {a, b}});	
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < v.size(); i++){
		int a = Find(v[i].second.first);
		int b = Find(v[i].second.second);
		int c = v[i].first;
		
		if(a < b){
			parent[b] = a;
			result += c;
		}
		else if(a > b){
			parent[a] = b;
			result += c;
		}
	}
	
	printf("%d", result);
	*/
	
	/*
	//2(1647
	cin >> N >> M;
	
	for(int i = 0; i <= N; i++){
		parent.push_back(i);
	}
	
	for(int i = 0; i < M; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		v.push_back({c, {a, b}});
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < v.size(); i++){
		int a = Find(v[i].second.first);
		int b = Find(v[i].second.second);
		int c = v[i].first;
		
		if(a < b){
			parent[b] = a;
			result += c;
			
			asdf = max(asdf, c);
		}
		else if(b < a){
			parent[a] = b;
			result += c;
			
			asdf = max(asdf, c);
		}
	}
	
	result -= asdf;
	
	printf("%d", result);
	*/
	
	/*
	//3(1922
	cin >> V >> E;
	
	for(int i= 0; i <= V; i++){
		parent.push_back(i);
	}
	
	for(int i = 0; i < E; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		v.push_back({c, {a, b}});	
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < v.size(); i++){
		int a = Find(v[i].second.first);
		int b = Find(v[i].second.second);
		int c = v[i].first;
		
		if(a < b){
			parent[b] = a;
			result += c;
		}
		else if(a > b){
			parent[a] = b;
			result += c;
		}
	}
	
	printf("%d", result);
	*/
	
	
	//4(10423
	cin >> N >> M >> K;
	
	for(int i = 0; i <= N; i++){
		parent.push_back(i);
	}
	energy.assign(N + 1, 0);
	
	for(int i = 0; i < K; i++){
		int n;
		cin >> n;
		
		
		
		energy[n] = 1;
	}
	
	for(int i = 0; i < M; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		v.push_back({c, {a, b}});
	}
	
	sort(v.begin(), v.end());
	
	printf("\n\n");
	for(int i = 0; i < v.size(); i++){
		int a = Find(v[i].second.first);
		int b = Find(v[i].second.second);
		int c = v[i].first;
		
		printf("%d %d  ", energy[a], energy[b]);
		
		if(!(energy[a] && energy[b])){
			if(a < b){
				parent[b] = a;
				result += c;
				
				energy[b] = 1;
			}
			else if(b < a){
				parent[a] = b;
				result += c;
				
				energy[a] = 1;
			}
		}
		
		printf("%d %d   %d %d %d   %d\n", v[i].second.first, v[i].second.second, a, b, c, result);
	}
	
//	printf("%d", result);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
