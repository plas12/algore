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

//1(10775
int N, M, i = 0;
vector <int> parent;
vector <int> v;

int Find(int x){
	if(x == parent[x]){
		return x;
	}
	
	return parent[x] = Find(parent[x]);
}

void Union(int a, int b){
	a = Find(a);
	b = Find(b);
	
	if(a != b){
		parent[a] = b;
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//1(10775
	cin >> N >> M;
	
	for(i = 0; i <= N; i++){
		parent.push_back(i);
	}
	
	v.push_back(0);
	
	int cnt = 0;
	for(int i = 0; i < M; i++){
		int dummy;
		cin >> dummy;
		
		v.push_back(dummy);
		
		int flag = Find(dummy);
		
		if(flag == 0){
			printf("%d", i);
			return 0;
		}

		Union(flag, flag - 1);
	}
	
	printf("%d", N);
	
	
	
	
	
	
	
	
	return 0;
}
