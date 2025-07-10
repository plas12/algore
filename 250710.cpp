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
//1(17425
long long dp[1000001];
*/






int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(17425
	int N = 0;
	int T = 0;
	
	for(int i = 1; i <= 1000001; i++){
		for(int j = i; j <= 1000001; j += i){
			dp[j] += i;
		}
	}
		
	for(int i = 2; i <= 1000001; i++){
		dp[i] += dp[i - 1];
	}
		
	scanf("%d", &T);
		
	while(T--){
		scanf("%d", &N);
		printf("%lld\n", dp[N]);
	}
	*/

	
	//2(2531
	int N, d, k, c;
	int map[60001];
	cin >> N >> d >> k >> c;
	
	for(int i = 0; i < N; i++){
		int n = 0;
		cin >> n;
		
		map[i] = n;
		map[i + N] = n;
	}
	map[0] = map[N];
	
	int answer = -1;
	for(int i = 0; i <= N; i++){
		int t[30001] = {0};
		int cnt = 0;
		
		if(map[i - 1] == c || map[i + k] == c){
			t[c]++;
		}
			
		for(int j = 0; j < k; j++){
			t[map[i + j]]++;
		}
		
//		printf("\n");
//		for(int i = 1; i <= d; i++){
//			printf("%d ", t[i]);
//		}
//		printf("\n");
		
		for(int i = 1; i <= d; i++){
			if(t[i] != 0){
				cnt++;
			}
		}
		
		answer = max(answer, cnt);
//		printf("%d\n", cnt);
	}
//	printf("\n");
	
	printf("%d\n", answer);
	
	return 0;
}
