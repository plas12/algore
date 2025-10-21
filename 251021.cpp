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
//1(2637
int N, M;
vector <int> v[101];
vector <int> n;
vector <int> m;

queue <int> q;
*/

/*
//2(14567
int N, M;
vector <int> v[1001];
vector <int> n;
vector <int> time;

queue <int> q;
*/




int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(2637
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		v[i].assign(N, 0);
	}
	n.assign(N, 0);
	
	for(int i = 0; i < M; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		v[b - 1][a - 1] = c;
		
		n[a - 1]++;
	}
//	printf("\n\n");
//	
//	for(int j = 0; j < N; j++){
//		for(int i = 0; i < N; i++){
//				printf("%d ", v[j][i]);
//		}
//		printf("\n");
//	}
//	printf("\n");
	
	for(int i = 0; i < N; i++){
		if(n[i] == 0){
			q.push(i);
			m.push_back(i);
		}
	}

	for(int i = 0; i < N; i++){
		int dummy = q.front();
		q.pop();
		
		for(int j = 0; j < N; j++){
			int x = v[dummy][j];
			if(x != 0 && dummy != j){
				n[j]--;
				
				for(int k = 0; k < m.size(); k++){
					v[m[k]][j] += v[m[k]][dummy] * x; 
				}
				
				if(n[j] == 0){
					q.push(j);
				}
			}
		}
	}
	
//	for(int j = 0; j < N; j++){
//		for(int i = 0; i < N; i++){
//				printf("%d ", v[j][i]);
//		}
//		printf("\n");
//	}
	
	for(int i = 0; i < m.size(); i++){
		printf("%d %d\n", m[i] + 1, v[m[i]][N - 1]);
	}
	*/
	
	/*
	//2(14567
	cin >> N >> M;
	
	time.assign(N, 1);
	n.assign(N, 0);
	
	for(int i = 0; i < M; i++){
		int a, b;
		cin >> a >> b;
		
		v[a - 1].push_back(b - 1);
		n[b - 1]++;
	}
	
	for(int i = 0; i < N; i++){
		if(n[i] == 0){
			q.push(i);
		}
	}
	
	for(int i = 0; i < N; i++){
		int dummy = q.front();
		q.pop();
		
		for(int j = 0; j < v[dummy].size(); j++){
			int x = v[dummy][j];
			
			time[x] = max(time[x], time[dummy] + 1);
			
			n[x]--;
			
			if(n[x] == 0){
				q.push(x);
			}
		}
	}
	
	for(int i = 0; i < N; i++){
		printf("%d ", time[i]);
	}
	*/
	return 0;
}
