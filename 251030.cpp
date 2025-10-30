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
//1(16398
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
*/


//2(2887
int N;
int result = 0; 


//vector <pair<int, pair<int, int> > > n;
vector <int> x;
vector <int> y;
vector <int> z;
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
	//1(16398
	cin >> N;
	
	for(int i = 0; i <= N; i++){
		parent.push_back(i);
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			int dummy = 0;
			cin >> dummy;
			
			if(i < j){
				v.push_back({dummy, {i, j}});
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
	
	printf("%lld", result);
	*/
	
	
	//2(2887
	cin >> N;
	
	for(int i = 0; i <= N; i++){
		parent.push_back(i);
	}
	
	for(int i = 0; i < N; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		x.push_back(a);
		y.push_back(b);
		z.push_back(c);
	}
	
	for(int i = 0; i < N; i++){
		priority_queue <pair<int, pair<int, int> >, vector <pair<int, pair<int, int> > >, greater <pair<int, pair<int, int> > > > pq;
		
		for(int j = i + 1; j < N; j++){
			if(Find(j) != Find(j)){
				pq.push({min(abs(x[i] - x[j]), min(abs(y[i] - y[j]), abs(z[i] - z[j]))), {i, j}});
			}
		}
		
		printf("!");
		int a = pq.top().second.first;
		printf("@");
		int b = pq.top().second.second;
		printf("#");
		int c = pq.top().first;
		
		printf("%d %d %d\n", a, b, c);
		
//		if(a < b){
//			parent[b] = a;
//			result += c;
//		}
//		else if(b < a){
//			parent[a] = b;
//			result += c;
//		}
	}
	
	
	
	return 0;
}

