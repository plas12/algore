#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;
/*
//1(2470
int N = 0, x = 0, y = 0;
int a = 2000000001;
pair <int, int > p;
vector <int> v;
*/


//2(2512
int N = 0, M = 0, S = 0;
vector <int> v;







int main(){
	/*
	//1(2470
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		v.push_back(n);
	}
	
	sort(v.begin(), v.end());
	
	x = 0;
	y = v.size() - 1;
	
	while(x != y){
		int n = v[x] + v[y];
		if(abs(n) < a){
			a = abs(n);
			p.first = v[x];
			p.second = v[y];
		}
		
		if(n == 0){
			printf("%d %d\n", p.first, p.second);
			return 0;
		}
		else if(0 < n){
			y--;
		}
		else{
			x++;
		}
	}
	
	printf("%d %d\n", p.first, p.second);
	*/
	
	
	//2(2512
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		S += n;
		
		v.push_back(n); 
	}
	
	sort(v.begin(), v.end());
	
	scanf("%d", &M);
	
	if(S <= M){
		printf("%d", v[v.size() - 1]);
	}
	else{
				
	}
	
//	4
//	110 120 140 150
//	485

	
	
	return 0;
}
