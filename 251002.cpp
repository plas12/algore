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

//1516, 1766, 2056, 2252, 2623


//1(1516
int N;
vector <int> time;
vector <int> n[500];
vector <int> m;

queue <int> q;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	//1(1516
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int a;
		cin >> a;
		time.push_back(a);
		
		int cnt = 0;
		while(1){
			int dummy;
			cin >> dummy;
			
			if(dummy == -1){
				break;
			}
			else{
				n[dummy - 1].push_back(i);
			}
			
			cnt++;
		}
		
		m.push_back(cnt);
		
		if(cnt == 0){
			q.push(i);
			printf("!!!\n");
		}
	}
	
	for(int i = 0; i < N; i++){
		int x = q.front();
		q.pop();
		
		for(int j = 0; j < n[x].size(); j++){
			int dummy = n[x][j];
			
			
				
			m[dummy]--;
			
			if(m[dummy] == 0){
				q.push(dummy);
				
				
			}
		}
	}
	
	
	
	
	
	
	
	return 0;
}
