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
//1(1715
int result = 0;
int N;
priority_queue <int, vector <int>, greater <int> > pq;
*/


//2(11000z
vector <pair<int, int> > v;
int N;
priority_queue <pair<int, int>, vector <pair<int, int> >, greater <pair<int, int> > > pq;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(1715
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int dummy;
		cin >> dummy;
		
		pq.push(dummy);
	}
	
	while(pq.size() > 1){
		int a = pq.top();
		pq.pop();
		int b = pq.top();
		pq.pop();
		
		result += a + b;
		
		pq.push(a + b);
		
		//printf("%d %d   %d   %d\n", a, b, result, pq.size());
	}
	
	printf("%d", result);
	*/
	
	
	//2(11100
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int a, b;
		cin >> a >> b;
		
		v.push_back({b, a});
	}
	sort(v.begin(), v.end());
	
	for(int i = 0; i < N; i++){
		int a = v[i].second;
		int b = v[i].first;
		
		if(pq.empty()){
			pq.push({b, a});
		}
	}
	
	return 0;
}
