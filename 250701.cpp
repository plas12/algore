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
//1(2025/06/29 koi_2_3
int N, Q;
vector <int> v;
vector <int> num;
int n, m;

void asdf(int a, int b, int cnt){
	if(b == n){
		if(m <= a){
			num.push_back(cnt);
//			printf("%d  ", cnt);	
		}
	}
	else{
		asdf(a + v[b], b + 1, cnt + 1);
		asdf(a, b + 1, cnt);
	}
}
*/

/*
//2(2559
int N, K;
vector <int> dp;
*/


//3(11441
int N, M;
vector <int> dp;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(2025/06/29 koi_2_3
	cin >> N >> Q;
	
	for(int i = 0; i < N; i++){
		int dummy;
		cin >> dummy;
		
		v.push_back(dummy);
	}
	
	for(int i = 0; i < Q; i++){
		cin >> n >> m;
		
		num.clear();
		
		asdf(0, 0, 0);
		
		sort(num.begin(), num.end());
		
		if(num.empty()){
			printf("-1\n");
		}
		else{
			printf("%d\n", num[0]);
		}
	}
	*/
	
	/*
	//2(2559
	cin >> N >> K;
	
	int dummy1 = 0;
	for(int i = 0; i < N; i++){
		int n = 0;
		cin >> n;
		
		dummy1 += n;
		
		dp.push_back(dummy1);
	}
	
	int result =  -10000001;
	for(int i = K - 1; i < N; i++){
		result = max(result, dp[i] - dp[i - K]);
	}
	
	printf("%d", result);
	*/
	
	
	//3(11441
	cin >> N;
	
	dp.push_back(0);
	
	int dummy1 = 0;
	for(int i = 0; i < N; i++){
		int n = 0;
		cin >> n;
		
		dummy1 += n;
		
		dp.push_back(dummy1);
	}
	
	cin >> M;
	for(int i = 0; i < M; i++){
		int n, m;
		cin >> n >> m;
		
		printf("%d\n", dp[m] - dp[n - 1]);
	}
	
	return 0;
}
