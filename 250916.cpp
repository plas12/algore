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
//1(20040
int N, M;
int result = 0;
vector <int> parent;

int Find(int x){
	if(x == parent[x]){
		return x;
	}
	
	return parent[x] = Find(parent[x]);
}

void Union(int a, int b){
	a = Find(a);
	b = Find(b);
	
	if(a < b){
		parent[b] = a;
	}
	else{
		parent[a] = b;
	}
}
*/


//2(3830
vector <int> parent;
vector <int> wight;

int Find_p(int x){
	if(x == parent[x]){
		return x;
	}
	
	return parent[x] = Find_p(parent[x]);
}

int Find_w(int x, int w){
	if(x == parent[x]){
		return w;
	}
	
	return Find_w(parent[x], w + wight[x]);
}

void Union(int a, int b, int w){
	a = Find_p(a);
	b = Find_p(b);
	
	if(a != b){
		parent[b] = a;
		
		wight[b] = w;
	}
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(20040
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		parent.push_back(i);
	}
	
	for(int i = 1; i <= M; i++){
		int a, b;
		cin >> a >> b;
	
		int x = Find(a);
		int y = Find(b);
		
		if(x == y){
			if(result == 0){
				result = i;
			}
		}
		else{
			Union(a, b);
		}
	}
	
	printf("%d", result);
	*/
	
	
	//2(3830
	
	while(1){
		int N, M;
		cin >> N >> M;
		if(N == 0 && M == 0){
			break;
		}
		else{
			parent.clear();
			for(int i = 0; i <= N; i++){
				parent.push_back(i);
			}
			wight.assign(N + 1, 0);
			
			for(int i = 0; i < M; i++){
				char dummy;
				int a, b, w;
				cin >> dummy;
				
				if(dummy == '!'){
					cin >> a >> b >> w;
					
					Union(a, b, w);
				}
				else{
					cin >> a >> b;
					
					a = Find_w(a, 0);
					b = Find_w(b, 0);
					
					printf("%d", b - a);
				}
			}
		}
	}
	
		
	return 0;
}
