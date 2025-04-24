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
//2(2417

long long bs(long long n){
	long long l = 0;
	long long r = sqrt(n);
	
	while(l <= r){
		long long mid = (l + r) / 2;
		
		if(mid * mid < n){
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
		
		//printf("%lld   %lld %lld\n", mid, l, r);
	}
	
	return l;
}
*/


//3(1806
int N, M;
int A = 10001;

vector <int> v;


int main(){
	/*
	//1(11728
	int N, M;
	scanf("%d %d", &N, &M);
	vector <int> v;
	
	for(int i = 0; i < N + M; i++){
		int n = 0;
		scanf("%d", &n);
		
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	
	for(int i = 0; i < N + M; i++){
		printf("%d ", v[i]);
	}
	*/
	
	/*
	//2(2417
//	long long n;
//	long long i;
//	
//	scanf("%lld", &n);
//	
//	i = (long long)sqrt(n);
//	
//	if(i * i < n){
//		printf("%lld", i + 1);
//	}
//	else{
//		printf("%lld", i);
//	}

	long long N = 0;
	long long result;
	
	scanf("%lld", &N);
	
	result = bs(N);
	
	printf("%lld", result);
	*/
	
	
	//3(1806
	scanf("%d %d", &N, &M);
	
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		v.push_back(n); 
	}
	
	int L = 0, R = 0;
	int a = 0;
	
	while(L <= R && R <= N - 1){
		if(M <= a){
//			printf("!!!\n");
			A = min(A, R - L);
			
			//printf("!!!  %d   %d %d\n", a, L + 1, R);
			
			a -= v[L++];
		}
		else{
			//printf("@@@  %d   %d %d\n", a, L + 1, R);
			
			a += v[R++];
		}
	}
	
	if(A == 10001){
		printf("0\n");
	}
	else{
		printf("%d\n", A);
	}
	
	
	
	
	
	
	
	return 0;
}
