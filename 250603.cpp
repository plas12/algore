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
//1(1967
vector <pair<int, int> > v[10001];
bool check[10001] = {false};
int N = 0, check_point = 0, M = 0;

void dfs(int n, int depth){
	check[n] = true;

	if(M < depth){
		M = depth;
		check_point = n;
	}
	//cout << M << "   " << depth << '\n';
	
	for(int i = 0; i < v[n].size(); i++){
		int next = v[n][i].first;
		
		if(check[next] == false){
			dfs(next, depth + v[n][i].second);
		}
	} 
	
}
*/


//2(19581
vector <pair<int, int> > v[100001];
bool check[100001] = {false};
int N, M = 0, check_point_1 = -1, check_point_2 = -1, tri = 0;
int second_1 = 0, second_2 = 0;

void dfs(int n, int depth){
	check[n] = true;
	
	if(M < depth){
		if(tri == 0){
			check_point_1 = n;
//			second_1 = M;
		}
		else{
			check_point_2 = n;
//			second_2 = M;
		}
		
		M = depth;
	}
	//cout << M << "   " << depth << '\n';
	
	for(int i = 0; i < v[n].size(); i++){
		int next = v[n][i].first;
		
		if(check[next] == false){
			dfs(next, depth + v[n][i].second);
		}
	}
}

bool cmp(int left, int right){
	return left > right;
}







int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(1967
	cin >> N;
	
	for(int i = 0; i < N - 1; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		v[a].push_back({b, c});
		v[b].push_back({a, c});
	}
	
//	for(int i = 1; i <= N; i++){
//		for(int j = 0; j < v[i].size(); j++){
//			cout << v[i][j].first << "   " << v[i][j].second << '\n';
//		}
//		cout << '\n' << '\n';
//	}
	
	dfs(1, 0);
	
	//cout << M << "   " << check_point << '\n' << '\n';
	
	memset(check, false, sizeof(check));
	M = 0;
	
	dfs(check_point, 0);
	
	//cout << M << "   " << check_point << '\n' << '\n';
	
	cout << M;
	*/
	
	
	//2(19581
	cin >> N;
	
	for(int i = 0; i < N - 1; i++){
		int a, b, c;
		cin >> a >> b >> c;
		
		v[a].push_back({b, c});
		v[b].push_back({a, c});
	}
	
	tri = 0;
	dfs(1, 0);
	
	M = 0;
	memset(check, false, sizeof(check));
	
	tri = 1;
	dfs(check_point_1, 0);
	
	cout << check_point_1 << "   " << check_point_2 << '\n' << '\n';
	
//	if(second_1 < second_2){
//		cout << second_2;
//	}
//	else{
//		cout << second_1;
//	}

//	sort(list.begin(), list.end(), cmp);
	
//	for(int i = 0; i < list.size(); i++){
//		cout << list[i] << '\n';
//	}
	
//	cout << list[1];
	
	return 0;
}

