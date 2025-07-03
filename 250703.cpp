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
//1(14925
int N, M;
int map[1001][1001] = {0};
int result = -1;
*/


//2(21758
int N;
int map[100001] = {0};
int dp[100001] = {0};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(14925
	cin >> N >> M;
	
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= M; j++){
			int n = 0;
			cin >> n;
			
			if(n == 0){
				map[i][j] = 1;
			}
			else{
				map[i][j] = 0;
			}
		}
	}
//	printf("\n\n");
	
//	for(int i = 0; i <= N; i++){
//		for(int j = 0; j <= M; j++){
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
	
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= M; j++){
//			int n = map[i][j];
//			int m = dp[i][j];
//			
//			int a = dp[i - 1][j];
//			int b = dp[i - 1][j - 1];
//			int c = dp[i][j - 1];
//			
			int a2 = map[i - 1][j];
			int b2 = map[i - 1][j - 1];
			int c2 = map[i][j - 1];
//			
//			if(n == 1){
//				if(a == b && b == c){
//					dp[i][j] = a + 1;
//				}
//				else if(a2 == 0 || b2 == 0 || c2 == 0){
//					dp[i][j] = 1;
//				}
//				else{
//					dp[i][j] = max(a, max(b, c));
//				}
//			}

			if(map[i][j] == 1){
				map[i][j] = min(a2, min(b2, c2)) + 1;
			}
			
			result = max(result, map[i][j]);
		}
	}
//	printf("\n\n");
	
//	for(int i = 0; i <= N; i++){
//		for(int j = 0; j <= M; j++){
//			printf("%d ", dp[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");
	
	
//	int result = -1;
//	
//	for(int i = 1; i <= N; i++){
//		for(int j = 1; j <= M; j++){
//			result = max(result, dp[i][j]);
//		}
//	}
	
	printf("%d\n", result);
	*/
	
	
	//2(21758
	cin >> N;
	
	int M = -1;
	int m = 1000000001;
	int m_i;
	for(int i = 1; i <= N; i++){
		int n = 0;
		cin >> n;
		
		M = max(M, n);
		
		if(n < m){
			m = n;
			m_i = i;
		}
		
		map[i] = n;
		dp[i] = dp[i - 1] + n;
	}
	
	if(N == 3){
		printf("%d", M * 2);
	}
	else{
//		printf("%d\n", (map[N] - map[1]) - m + (map[N] - map[m_i]));
//		printf("%d %d %d\n", (map[N] - map[1]), m, (map[N] - map[m_i]));

		vector <int> v;
		for(int i = 2; i < N; i++){
			v.push_back(dp[N] - dp[i] - map[i]);
		}
		
		int a = -1;
		
		for(int i = 0; i < v.size(); i++){
			a = max(a, v[i]);
		}
		a = (dp[N] - dp[1]) + a;
		
		v.clear();
		for(int i = N - 1; i >= 0; i--){
			v.push_back(dp[i - 1] - map[i]);
		}
		
		int b = -1;
		
		for(int i = 0; i < v.size(); i++){
			b = max(, v[i]);
		}
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
