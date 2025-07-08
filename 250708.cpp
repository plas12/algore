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






int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(21758
	int N = 0;
	vector <int> map;
	vector <int> dp;
	
	cin >> N;
	
	int dummy = 0;
	for(int i = 0; i < N; i++){
		int n = 0;
		cin >> n;
		
		dummy += n;
		
		map.push_back(n);
		dp.push_back(dummy);
	}
//	printf("\n\n");
	
//	for(int i = 0; i < N; i++){
//		printf("%d\n", map[i]);
//	}
//	printf("\n");
	
//	for(int i = 0; i < N; i++){
//		printf("%d\n", dp[i]);
//	}
//	printf("\n\n");
	
	dummy = -1;
	
	for(int i = 1; i < N - 1; i++){
		dummy = max(dummy, dp[N - 1] - dp[i] - map[i]);
//		printf("%d\n", dummy);
	}
//	printf("\n");
	
	int answer1 = (dp[N - 1] - dp[0]) + dummy;
	
	dummy = -1;
	
	for(int i = N - 2; i > 0; i--){
		dummy = max(dummy, dp[i - 1] - map[i]);
//		printf("%d\n", dummy);
	}
//	printf("\n");
	
	int answer2 = dp[N - 2] + dummy;
	
	dummy = -1;
	
	for(int i = 1; i < N - 1; i++){
		dummy = max(dummy, (dp[i] - dp[0]) + (dp[N - 2] - dp[i - 1]));
//		printf("%d\n");
	}
//	printf("\n");
	
	int answer3 = dummy;
	
	int result = max(answer1, max(answer2, answer3));
	
//	printf("%d %d %d    %d\n", answer1, answer2, answer3, result);

	printf("%d\n", result);
	*/
	
	
	//
	
	
	
	
	
	
	
	return 0;
}
