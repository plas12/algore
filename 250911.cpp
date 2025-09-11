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

//getchar()

/*
//1(16562
int N, M, k;
int result = 0;
vector <int> money;
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
	
	if(money[a - 1] < money[b - 1]){
		parent[b] = a;
	}
	else{
		parent[a] = b;
	}
}
*/


//2(20040
int N, M;
vector <int> parent;

int cnt = 0;
int Find(int x){
	if(x == parent[x]){
		return x;
	}
	
	cnt++;
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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(16562
	cin >> N >> M >> k;
	for(int i = 0; i < N; i++){
		int dummy;
		cin >> dummy;
		
		money.push_back(dummy);
	}
	
	for(int i = 0; i <= N; i++){
		parent.push_back(i);
	}
	
	for(int i = 0; i < M; i++){
		int a, b;
		cin >> a >> b;
		
		Union(a, b);
	}
	
	for(int i = 1; i <= N; i++){
//		printf("%d %d  %d\n", i, parent[i], money[i - 1]);
		if(i == parent[i]){
			result += money[i - 1];
		}
	}
	
	if(result <= k){
		printf("%d", result);
	}
	else{
		printf("Oh no");
	}
	*/
	
	
	//2(20040
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		parent.push_back(i);
	}
	
	for(int i = 0; i < M; i++){
		int x, y;
		cin >> x >> y;
		
		if(x == parent[y]){
			cnt = 0;
			int dummy = Find(y);
			
			printf("%d \n", cnt);
			if(cnt != 1){
				printf("%d", i + 1);
				return 0;
			}
		}
		if(y == parent[x]){
			cnt = 0;
			int dummy = Find(x);
			
			printf("%d \n", cnt);
			if(cnt != 1){
				printf("%d", i + 1);
				return 0;
			}
		}
		
		Union(x, y);
	}
	
	printf("0");
	
	return 0;
}
