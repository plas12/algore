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
//1927, 11279, 1715, 11000, 2075, 1655
priority_queue <int, vector <int>, greater <int> > pq;
priority_queue <int, vector <int>, less <int> > pq;

*/

/*
//1(1927
int N;
priority_queue <int, vector <int>, greater <int> > pq;
*/

/*
//2(11279
int N;
priority_queue <int, vector <int>, less <int> > pq;
*/


//3(1715
int N;
priority_queue <int, vector <int>, greater <int> > pq;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(1927
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int dummy;
		cin >> dummy;
		
		if(dummy == 0){
			if(!pq.empty()){
				printf("%d\n", pq.top());
				pq.pop();
			}
			else{
				printf("0\n");
			}
		}
		else{
			pq.push(dummy);
		}
	}
	*/
	
	/*
	//2(11279
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int dummy;
		cin >> dummy;
		
		if(dummy == 0){
			if(!pq.empty()){
				printf("%d\n", pq.top());
				pq.pop();
			}
			else{
				printf("0\n");
			}
		}
		else{
			pq.push(dummy);
		}
	}
	*/
	
	
	//3(1715
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int dummy;
		cin >> dummy;
		
		pq.push(dummy);
	}
	
	int result = 0;
	
	if(N % 2){
		
	}
	else{
		
	}
	
	printf("%d", result);
	
	return 0;
}
