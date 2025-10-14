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
//1(1516
int N;
vector <int> time;
vector <int> v[501];
vector <int> n;

queue <int> q;

vector <int> result;
*/

/*
//2(1766
int N, M;

vector <int> v[32001];
vector <int> n;
priority_queue <int, vector <int>, greater <int> > pq;
*/

/*
//3(2056
int N;
vector <int> time;
vector <int> v[10001];
vector <int> n;

queue <int> q;

vector <int> result;
*/

/*
//4(2252
int N, M;

vector <int> v[32001];
vector <int> n;
priority_queue <int, vector <int>, greater <int> > pq;
*/


//5(2623

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
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
				v[dummy - 1].push_back(i);
			}
			
			cnt++;
		}
		
		n.push_back(cnt);
		
		if(cnt == 0){
			q.push(i);
		}
		
		result.push_back(0);
	}
	
	for(int i = 0; i < N; i++){
		int dummy = q.front();
		q.pop();
		
		result[dummy] += time[dummy];
		
		time[dummy] = result[dummy];
		
//		printf("%d\n", dummy);
		
		for(int j = 0; j < v[dummy].size(); j++){
			int x = v[dummy][j];

			result[x] = max(result[x], time[dummy]);

			n[x]--;

//			printf("%d %d %d %d  ", x, result[x], time[dummy], n[x]);
			
			if(n[x] == 0){
				q.push(x);
//				printf("!!!");
			}
			
//			printf("\n");
		}
		
//		printf("\n");
	}
	
	
	for(int i = 0; i < N; i++){
		printf("%d\n", result[i]);
	}
	*/
	
	/*
	//2(1766
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		n.push_back(0);
	}
	
	for(int i = 0; i < M; i++){
		int a, b;
		cin >> a >> b;
		
		v[a - 1].push_back(b - 1);
		
		n[b - 1]++;
	}
	
	for(int i = 0; i < N; i++){
		if(n[i] == 0){
			pq.push(i);
		}
	}
	
	for(int i = 0; i < N; i++){
		int dummy = pq.top();
		pq.pop();
		
		printf("%d ", dummy + 1);
		
		for(int j = 0; j < v[dummy].size(); j++){
			int x = v[dummy][j];
			
			n[x]--;
			
			if(n[x] == 0){
				pq.push(x);
			}
		}
	}
	*/
	
	/*
	//3(2056
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int a;
		cin >> a;
		time.push_back(a);
		
		int cnt;
		cin >> cnt;
		
		for(int j = 0; j < cnt; j++){
			int dummy;
			cin >> dummy;
			
			v[dummy - 1].push_back(i);
		}
		
		n.push_back(cnt);
		
		if(cnt == 0){
			q.push(i);
		}
		
		result.push_back(0);
	}
	
	for(int i = 0; i < N; i++){
		int dummy = q.front();
		q.pop();
		
		result[dummy] += time[dummy];
		
		time[dummy] = result[dummy];
		
//		printf("%d\n", dummy);
		
		for(int j = 0; j < v[dummy].size(); j++){
			int x = v[dummy][j];

			result[x] = max(result[x], time[dummy]);

			n[x]--;

//			printf("%d %d %d %d  ", x, result[x], time[dummy], n[x]);
			
			if(n[x] == 0){
				q.push(x);
//				printf("!!!");
			}
			
//			printf("\n");
		}
		
//		printf("\n");
	}
	
	int answer = -1;
	for(int i = 0; i < N; i++){
		answer = max(answer, result[i]);
	}
	
	printf("%d", answer);
	*/
	
	/*
	//4(2252
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		n.push_back(0);
	}
	
	for(int i = 0; i < M; i++){
		int a, b;
		cin >> a >> b;
		
		v[a - 1].push_back(b - 1);
		
		n[b - 1]++;
	}
	
	for(int i = 0; i < N; i++){
		if(n[i] == 0){
			pq.push(i);
		}
	}
	
	for(int i = 0; i < N; i++){
		int dummy = pq.top();
		pq.pop();
		
		printf("%d ", dummy + 1);
		
		for(int j = 0; j < v[dummy].size(); j++){
			int x = v[dummy][j];
			
			n[x]--;
			
			if(n[x] == 0){
				pq.push(x);
			}
		}
	}
	*/
	
	
	//5(2623
	
	//int x = 0; 
	//while(cin >> x)
	//»ç¿ë 
	
	
	
	
	
	
	return 0;
}
