//26146
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

int N, M;

int idx = 1;

vector <int> disc;
vector <int> low;
vector <bool> check;
vector <int> graph[200001];

vector <vector <int> > result;

stack <int> st;

void dfs(int v){
	disc[v] = idx;
	low[v] = idx;
	idx++;
	st.push(v);
	check[v] = true;
		
	for(int i = 0; i < graph[v].size(); i++){
		int next = graph[v][i];
		
		if(disc[next] == -1){
			dfs(next);
			low[v] = min(low[v], low[next]);
		}
		else if(check[next]){
			low[v] = min(low[v], disc[next]);
		}
	}
	
	if(low[v] == disc[v]){
		vector <int> temp;
		while(1){
			int node = st.top();
			st.pop();
			check[node] = false;
			temp.push_back(node);
			if(node == v){
				break;
			}
		}
		sort(temp.begin(), temp.end());
		result.push_back(temp);
	}
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N >> M;
	
	disc.assign(N + 1, -1);
	low.assign(N + 1, -1);
	check.assign(N + 1, false);
	
	for(int i = 0; i < M; i++){
		int a, b;
		cin >> a >> b;
		
		graph[a].push_back(b);
	}
	
	for(int i = 1; i <= N; i++){
//		printf("%d %d : ", disc[i], idx);
		if(disc[i] == -1){
			dfs(1);
		}
//		printf("%d %d    ", disc[i], idx);
	}
	
	if(result.size() == 1){
		printf("Yes");
	}
	else{
		printf("No");
	}
	
//	sort(result.begin(), result.end());
//	
//	printf("%d\n", result.size());
//	for(int i = 0; i < result.size(); i++){
//		vector <int> anser = result[i];
//		for(int i = 0; i < anser.size(); i++){
//			printf("%d ", anser[i]);
//		}
//		printf("-1\n");
//	}
	
	
	
	return 0;
}
