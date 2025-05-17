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
//2(12865
int weight[101] = {0}; 
int value[101] = {0};
int dp[101][100001] = {0};
*/

/*
//3(12865
int weight[101] = {0};
int value[101] = {0};
int dp[101] = {0};
*/


//4(9084




int main(){
	/*
	//1(가방 문제
	한정된 자원이 있을때 가방안에 자원을 넣어 최대의 이득을 보는 문제
	
	
	dp를 이용하여 문제를 해결 
	
	top-down방식 
	
	Botton-up방식 
	
	최대무게가 w인 가방에서 i번째 물건까지 판단했을떄 최대의 무게 
	
	*/
	
	/*
	//2(12865
	//2차원 
	
	int n, k;
	scanf("%d %d", &n, &k);
	printf("\n\n\n");
	
	for(int i = 1; i <= n; i++){
		scanf("%d %d", &weight[i], &value[i]);
		printf("%d item\n\n", i);
	}
	
	for(int lim = 1; lim <= k; lim++){
		printf("lim : %d  -  ", lim);
		for(int item = 1; item <= n; item++){
			printf("item : %d ", item);
			if(weight[item] > lim){
				dp[item][lim] = dp[item - 1][lim];
				printf("!!! dp[%d][%d] : %d  |  ", item, lim, dp[item][lim]);
			}
			else{
				dp[item][lim] = max(dp[item - 1][lim - weight[item]] + value[item], dp[item - 1][lim]);
				printf("@@@ dp[%d][%d] : %d  |  ", item, lim, dp[item][lim]);
			}
		}
		printf("\n");
	}
	
	printf("%d", dp[n][k]);
	*/
	
	/*
	//3(12865
	1차원 
	
	int n, k;
	scanf("%d %d", &n, *k);
	
	for(int i = 1; i <= n; i++){
		scanf("%d %d", &weight[i], &value[i]);
	}
	
	for(int item = 1; i <= n; item++){
		for(int lim = k; lim >= weight[item]; lim--){
			dp[lim] = max(dp[lim], dp[lim - weight[item]] + value[item]);
		}
	}
	
	printf("%d", dp[k]);
	*/
	
	
	//4(9084
	
	
	//공부 팁 : 인터넷 검색(다른사람의 설명, 번례, ai등)  
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
