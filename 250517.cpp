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
	//1(���� ����
	������ �ڿ��� ������ ����ȿ� �ڿ��� �־� �ִ��� �̵��� ���� ����
	
	
	dp�� �̿��Ͽ� ������ �ذ� 
	
	top-down��� 
	
	Botton-up��� 
	
	�ִ빫�԰� w�� ���濡�� i��° ���Ǳ��� �Ǵ������� �ִ��� ���� 
	
	*/
	
	/*
	//2(12865
	//2���� 
	
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
	1���� 
	
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
	
	
	//���� �� : ���ͳ� �˻�(�ٸ������ ����, ����, ai��)  
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
