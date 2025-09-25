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

//11000, 2075, 1655, 11286, 15903, 1781, 2109

/*
//1(11000
vector <pair<int, int> > v;
int N;
priority_queue <int, vector <int>, greater <int> > pq;
*/


//2(2075
int N;
priority_queue <int, vector <int>, greater <int> >pq;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(11000
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int a, b;
		cin >> a >> b;
		v.push_back({a, b});
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < N; i++){
		int a = v[i].first;
		int b = v[i].second;
		
		if(pq.empty()){
			pq.push(b);
		}
		else{
			if(pq.top()<= a){
				pq.pop();
				pq.push(b);
			}
			else{
				pq.push(b);
			}
		}
	}
	
	printf("%d", pq.size());
	
//	printf("\n\n");
//	while(!pq.empty()){
//		printf("%d\n", pq.top());
//		pq.pop();
//	}
	*/
	
	
	//2(2075
	cin >> N;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			int dummy;
			cin >> dummy;
			
			if(N <= pq.size()){
				if(pq.top() < dummy){
					pq.pop();
					pq.push(dummy);
				}
			}
			else{
				pq.push(dummy);
			}
		}
	}
	
	printf("%d", pq.top());
	
	return 0;
}
