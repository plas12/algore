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
//1(10423
int N, M, K;
int result = 0;

vector < pair< int, pair< int, int > > > v;
vector <int> energy;
vector <int> parent;

int Find(int x){
	if(x == parent[x]){
		return x;
	}
	
	return parent[x] = Find(parent[x]);
}
*/

/*
//2(21924
int N, M;

vector < pair < int, pair < int, int > > > v;
vector <int> parent;

int Find(int x){
	if(x == parent[x]){
		return x;
	}
	
	return parent[x] = Find(parent[x]);
}
*/

/*
//3(4386
int N;
double result = 0.0;

vector <pair<double, pair<double, double> > > v;
vector <pair<double, double> > n;
vector <int> parent;

int Find(int x){
	if(x == parent[x]){
		return x;
	}
	
	return parent[x] = Find(parent[x]);
}
*/


//4(16398
int N;
long long result = 0;

vector <pair<int, pair<int, int> > > v;
vector <int> parent;

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
	//1(10423
	cin >> N >> M >> K;
	
	for(int i = 0; i <= N; i++){
		parent.push_back(i);
	}
	energy.assign(N + 1, 0);
	
	for(int i = 0; i < K; i++){
		int n;
		cin >> n;
		
		energy[n - 1] = 1;
	}
	
	for(int i = 0; i < M; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		v.push_back({c, {a - 1, b - 1}});
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < M; i++){
		int a = Find(v[i].second.first);
		int b = Find(v[i].second.second);
		int c = v[i].first;
		
//		printf("%d %d", a, b);
		
		if(!(energy[a] == 1 && energy[b] == 1)){
			if(energy[a] == 1){
				parent[b] = a;
				result += c;
			}
			else if(energy[b] == 1){
				parent[a] = b;
				result += c;
			}
			else{
				if(a < b){
					parent[b] = a;
					result += c;
				}
				else if(b < a){
					parent[a] = b;
					result += c;
				}
			}
		}
		
//		printf("\n");
	}
	
	printf("%d", result);
	*/
	
	/* 	
	//2(21924
	cin >> N >> M;
	
	for(int i = 0; i <= N; i++){
		parent.push_back(i);
	}
	
	for(int i = 0; i < M; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		v.push_back({c, {a - 1, b - 1}});
	}
	
	sort(v.begin(), v.end());
	
	long long result = 0;
	for(int i = 0; i < v.size(); i++){
		int a = Find(v[i].second.first);
		int b = Find(v[i].second.second);
		int c = v[i].first;
		
		if(a < b){
			parent[b] = a;
		}
		else if(b < a){
			parent[a] = b;
		}
		else{
			result += c;
		}
	}
	
	int cnt = 0;
	for(int i = 0; i < N; i++){
		if(Find(i) == 0){
			cnt++;
		}
	}
	
	if(cnt == N){
		printf("%ld", result);
	}
	else{
		printf("-1");
	}
	*/
	
	/*
	//3(4386
	cin >> N;
	
	for(int i = 0; i <= N; i++){
		parent.push_back(i);
	}
	
	for(int i = 0; i < N; i++){
		double a, b;
		cin >> a >> b;
		
		n.push_back({a, b});
	}
	
	for(int i = 0; i < N; i++){
		for(int j = i + 1; j < N; j++){
			double a = (n[i].first - n[j].first) * (n[i].first - n[j].first);
			double b = (n[i].second - n[j].second) * (n[i].second - n[j].second);
			double dummy = sqrt(a + b);
			
			v.push_back({dummy, {i, j}});
		}
	}
	
	sort(v.begin(), v.end());

	for(int i = 0; i < v.size(); i++){
		int a = Find(v[i].second.first);
		int b = Find(v[i].second.second);
		double c = v[i].first;
		
		if(a < b){
			parent[b] = a;
			result += c;
		}
		else if(b < a){
			parent[a] = b;
			result += c;
		}
	}
	
	printf("%.2lf", result);
	*/
	
	
	//4(16398
	cin >> N;
	
	for(int i = 0; i <= N; i++){
		parent.push_back(i);
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			int dummy;
			cin >> dummy;
			
			if(i < j){
				v.push_back({dummy, {i , j}});
			}
		}
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
		else if(b < a){
			parent[a] = b;
			result += c;
		}
	}
	
	printf("%d", result	);
	
	
	
	
	
	return 0;
}
