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
/*
//1(1912
bool cmp(int left, int right){
	return left > right;
}

int a[100001];
int dp[100001];
*/

/*
//2(1929
int a[1000001];
*/


//3(1915
int a[1001][1001];
int dp[1001][1001];



int main(){
	/*
	//1(1912
	int l = 0;
	cin >> l;
	
	for(int i = 0; i < l; i++){
		cin >> a[i];
	}
	
	dp[0] = a[0];
	dp[1] = max(a[0] + a[1], a[1]); 
	
	for(int i = 2; i < l; i++){
		dp[i] = max(dp[i - 1] + a[i], a[i]);
	}
	
	sort(dp, dp + l, cmp);
	
	printf("%d", dp[0]);
	*/
	
	/*
	//2(1929
	int st, en;
	cin >> st >> en;
	
	a[0] = 1;
	a[1] = 1;
	
	for(int i = 2; i <= en / 2; i++){
		if(a[i] == 0){
			int n = i;
			while(1){
				if(en < n + i){
					break;
				}
				else{
					n += i;
					a[n] = 1;
					//printf("%d\n", n);
				}
			}
			//printf("\n");
		}
	}
	
	for(int i = st; i <= en; i++){
		if(a[i] == 0){
			printf("%d\n", i);
		}
	}
	*/
	
	
	//3(1915
	int n, m;
	int cnt = 0;
	cin >> n >> m; 
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			int x = 0;
			scanf("%1d", &x);
			a[i][j] = x;
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == 1){
					if(1 < a[i - 1][j] + a[i][j - 1] + a[i][j + 1] + a[i + 1][j]){
					if(a[i - 1][j] == 1){
						dp[i][j] = dp[i - 1][j] + 1;
					}
					else if(a[i][j - 1] == 1){
						dp[i][j] = dp[i][j - 1] + 1;
					}
					else{
						dp[i][j] = 1;
					}
				}
			}
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cnt = max(cnt, dp[i][j]);
		}
	}
	//printf("%d", cnt);
	
	
	int x = 1;
	while(1){
		if(cnt < x * x){
			printf("%d\n", x * x);
			break;
		}
		else{
			x++;
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
