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
	
	
	//1(2531
	int N, d, k, c;
	cin >> N >> d >> k >> c;
	
	int map[60001] = {0};
	
	for(int i = 1; i <= N; i++){
		int n = 0;
		cin >> n;
		
		map[i] = n;
		map[i + N] = n;
	}
	map[0] = map[N];
	
	int answer = -1;
	for(int i = 1; i <= N; i++){
		int a[3001] = {0};
		
		a[c]++;
		
		for(int j = 0; j < k; j++){
			a[map[i + j]]++;
		}
		
//		printf("\n");
//		for(int j = 0; j <= d; j++){
//			printf("%d ", a[j]);
//		}		
//		printf("\n\n");

		int cnt = 0;
		for(int j = 1; j <= d; j++){
			if(a[j] != 0){
//				printf("%d ", j);
				cnt++;
			}
		}
//		printf("\n");
		
		answer = max(answer, cnt);
	}
 	
	printf("%d\n", answer);
	
	
	return 0;
}
