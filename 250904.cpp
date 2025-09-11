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
//Find
int Find(int x){
	if(x == parent[x]){
		return x;
	}
	
	return parent[x] = Find(parent[x]);
}

//Union
void Union(int a, int b){
	a = Find(a);
	b = Find(b);
	
	if(a > b){
		parent[a] = b;
	}
	else{
		parent[b] = a;
	}
}

//1717, 1976, 10775, 17352, 16562, 20040
*/

/*
//1(1717
int N, M;
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
	
	if(a > b){
		parent[a] = b;
	}
	else{
		parent[b] = a;
	}
}
*/

/*
//2(1976
int N, M;
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
	
	if(a > b){
		parent[a] = b;
	}
	else{
		parent[b] = a;
	}
}
*/


//3(10775
int N;
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
	
	if(a > b){
		parent[a] = b;
	}
	else{
		parent[b] = a;
	}
}





int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(1717
	cin >> N >> M;
	
	for(int i = 0; i <= N + 1; i++){
		parent.push_back(i);
	}
	
	for(int i = 0; i < M; i++){
		int n, a, b;
		cin >> n >> a >> b;
		
		if(n == 0){
			Union(a, b);
		}
		else{
			int x = Find(a);
			int y = Find(b);
			
			if(x == y){
				printf("yes\n");
			}
			else{
				printf("no\n");
			}
		}
	}
	*/
	
	/*
	//2(1976
	cin >> N >> M;
	
	for(int i = 0; i <= N + 1; i++){
		parent.push_back(i);
	}
	
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++){
			int dummy;
			cin >> dummy;
			
			if(dummy == 1){
				Union(i, j);
			}
		}
	}
	
	vector <int> v;
	for(int i = 0; i < M; i++){
		int dummy;
		cin >> dummy;
		
		if(i != 0){
			int x = Find(v.back());
			int y = Find(dummy);
			
			if(x != y){
				printf("NO");
				return 0;
			}
		}
		
		v.push_back(dummy);
	}
	
	printf("YES");
	*/
	
	
	//3(10775
	cin >> N;
	
	for(int i = 0; i <= N; i++){
		parent.push_back(i);
	}
	
	for(int i = 0; i < N - 2; i++){
		int a, b;
		cin >> a >> b;
		
		Union(a, b);
	}
	
	int first = -1, second = -1;
	for(int i = 1; i <= N; i++){
			if(i == parent[i]){
				if(first == -1){
					first = i;
				}
				else{
					second = i;
					break;
				}
			}
	}
	
	printf("%d %d", first, second);
	
	
	
	
	return 0;
}

