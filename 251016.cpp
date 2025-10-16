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

//2637, 14567

/*
//1(2623
int N, M;
vector <int> v[1001];
vector <int> n;

queue <int> q;
*/


//2(2637
int N, M;
vector <int> v[101];
vector <int> n;

queue <int> q;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(2623
	cin >> N >> M;
	
	n.assign(N, 0);
	
	for(int i = 0; i < M; i++){
		int a = 0;
		cin >> a;
		
		vector <int> dummy;
		
		while(a--){
			int b;
			cin >> b;
			
			for(int j = 0; j < dummy.size(); j++){
				v[dummy[j]].push_back(b - 1);
				
				n[b - 1]++;
			}
			
			dummy.push_back(b - 1);
		}
	}
	
	for(int i = 0; i < N; i++){
		if(n[i] == 0){
			q.push(i);
		}
	}
	
	vector <int> result;
	for(int i = 0; i < N; i++){
		if(q.empty()){
			printf("0");
			return 0;
		}
		
		int dummy = q.front();
		q.pop();
		
		result.push_back(dummy + 1);
		
		for(int j = 0; j < v[dummy].size(); j++){
			int x = v[dummy][j];
			
			n[x]--;
			
			if(n[x] == 0){
				q.push(x);
			}
		}
	}
	
	for(int i = 0; i < result.size(); i++){
		printf("%d\n", result[i]);
	}
	*/
	
	
	//2(2637
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		v[i].assign(N, 0);
	}
	n.assign(N, 0);
	
	for(int i = 0; i < M; i++){
		int x, y, z;
		cin >> x >> y >> z;
		
		v[y - 1][x - 1] = z;
		
		n[x - 1]++;
	}
	
	for(int i = 0; i < N; i++){
		if(n[i] == 0){
			q.push(i);
		}
	}
	
	for(int i = 0; i< N; i++){
		int dummy = q.front();
		q.pop();
		
		for(int j = 0; j < N; j++){
			if(v[dummy][j] != 0){
				v[j][dummy] += v[dummy][j];
				
				n[j]--;
				
				if(n[j] == 0){
					q.push(j);
				}
			}
		}
	}
	
	for(int i = 0; i < N; i++){
		if(v[N - 1][i] != 0){
			printf("%d %d\n", i + 1, v[N - 1][i]);
		}
	}
	
	
	
	
	return 0;
}
