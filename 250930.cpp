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


//1(1655
int N;
priority_queue <int, vector <int>, less <int> > a;
priority_queue <int, vector <int>, greater <int> > b;






int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	//1(1655
	cin >> N;
	
	for(int i = 1; i <= N; i++){
		int dummy;
		cin >> dummy;
		
		a.push(dummy);
		
		if(!a.empty()){
			if(b.size() + 2 <= a.size()){
				b.push(a.top());
				a.pop();
			}
			
			if(b.top() < a.top()){
				a.push(b.top());
				b.pop();
			}
		}
		
		printf("	%d\n", a.top());
	}
	
	
	
	
	
	
	
	
	return 0;
}
