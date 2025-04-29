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
//1(3273
int N, M, l = 0;
vector <int> v;
*/

/*
//2(1806
int N, M, B = 100001;
vector <int> v;
*/


//3(2230
int N, M, B = 2000000001;
vector <int> v;

int main(){
	/*
	//1(3273
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		v.push_back(n);
	}
	
	scanf("%d", &M);
		 
	sort(v.begin(), v.end());
	
//	for(int i = 0; i < v.size(); i++){
//		printf("%d ", v[i]);
//	}
//	printf("\n\n");
	
	int L = 0;
	int R = v.size() - 1;
	
	while(L < R){
		int n = v[L] + v[R];

//		printf("%d %d   %d\n", L, R , n);
		
		if(n == M){
//			printf("%d %d\n", v[L], v[R]);
			l++;
			L++;
		}
		else if(n < M){
			L++;
		}
		else{
			R--;
		}
	}
	
	printf("%d", l);
	*/
	
	/*
	//2(1806
	scanf("%d %d", &N, &M);	
	
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		v.push_back(n);
	}
	
	int L = 0, R = 0;
	int n = 0;
	
	while(L <= R && R <= v.size()){
		if(M <= n){
			B = min(B, R - L);

			n -= v[L++];
		}
		else{
			n += v[R++];
		}
		
//		printf("%d %d\n", L, R);
	}
	
	if(B == 100001){
		printf("0");
	}
	else{
		printf("%d", B);
	}
	*/
	
	
	//3(2230
	scanf("%d %d", &N, &M);
	
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		v.push_back(n); 
	}
	
	sort(v.begin(), v.end());
	
	int L = N / 2;
	int R = N / 2 + 1;
	int i = 0;
	
//	printf("%d %d\n\n", L, R);
	
	while(1){
		int n = abs(v[R] - v[L]);
		int m = abs(v[R] - v[L]);
		
		if(M <= n || M <= m){
			if(M == n){
				printf("%d", M);
				break;
			}
			else if(M == m){
				printf("%d", M);
				break;
			}
			else if(M < n){
				B = min(B, n);
			}
			else if(M < m){
				B = min(B, m);
			}
			printf("%d", B);
			break;
		}
		else{
			if(0 < L){
				L--;
			}
			if(R < N - 1){
				R++;
			}
		}
	}
	
	
	return 0;
}
