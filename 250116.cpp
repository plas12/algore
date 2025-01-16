#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
#include <stack>
#include <queue> 
#include <cmath>
#include <algorithm>

using namespace std;



int main(){
	/*
	//1(2579
	int l = 0;
	int dp[301];
	int stair[301];
	
	cin >> l;
	
	for(int i = 1; i <= l; i++){
		cin >> stair[i];
	}
	//printf("\n\n");
	
	dp[1] = stair[1];
	dp[2] = stair[1] + stair[2];
	dp[3] = max(stair[1] + stair[3], stair[2] + stair[3]);
	//printf("%d\n%d\n%d\n", dp[1], dp[2], dp[3]);
	
	for(int i = 4; i <= l; i++){
		dp[i] = max(dp[i - 2] + stair[i], dp[i - 3] + stair[i - 1] + stair[i]);	
		//printf("%d\n", dp[i]);
	}
	
	printf("%d", dp[l]);
	*/
	
	//2(2156
	int l = 0; 
	int a[10001];
	int dp[10001];
	cin >> l;
	
	for(int i = 1; i <= l; i++){
		cin >> a[i];
	}
	printf("\n\n");
	
	dp[1] = a[1];
	dp[2] = a[1] + a[2];
	printf("%d\n%d\n", dp[1], dp[2]);
	
	for(int i = 3; i <= l; i++){
		dp[i] = max(dp[i - 2] + a[i], dp[i - 1]);
		printf("%d %d\n", dp[i], max(dp[i - 2] + a[i], dp[i - 1]));
	}
	
	printf("\n%d", dp[l]);	
	
	
	
	
	
	
	
	return 0;
}
