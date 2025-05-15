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

//*2798, *1065, 2503, 2851, 2930, 32371, 14697

/*
//1(2798
vector <int> v;
vector <int> a;

bool cmp(int left, int right){
	return left > right;
}
*/


//4(2503
vector <int> a = {0, 0, 0, 0, 0, 0, 0, 0, 0};
vector <int> b = {0, 0, 0, 0, 0, 0, 0, 0, 0};
vector <int> c = {0, 0, 0, 0, 0, 0, 0, 0, 0};
vector <int> a1 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
vector <int> b1 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
vector <int> c1 = {0, 0, 0, 0, 0, 0, 0, 0, 0};








int main(){
	/*
	//1(1740
	unsigned long long n = 1, N, a = 0;
	//1byte == 8bit;
	
	scanf("%lld", &N);
	
	while(0 < N){
		if(N & 1){
			a += n;
		}
		
		n *= 3;
		N = N >> 1;
		//printf("%d\n", N);
	}
	
	printf("%lld", a);	
	*/
	
	/*
	//2(2798
	int N, M;
	scanf("%d %d", &N, &M);
	
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		v.push_back(n);
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < N - 2; i++){
		for(int j = i + 1; j < N - 1; j++){
			for(int k = j + 1; k < N; k++){
				int n = v[i] + v[j] + v[k];
				
				if(n <= M){
					a.push_back(n);
				}
			}
		}
	}
	
	sort(a.begin(), a.end(), cmp);
	
	printf("%d", a[0]);
	*/
	
	/*
	//3(1065
	int N = 0;
	scanf("%d", &N);
	
	if(N < 100){
		printf("%d", N);
	}
	else{
		int n = 0;
		for(int i = 100; i <= N; i++){
			int a = i % 10, b = i / 10 % 10, c = i / 100;
			
			//printf("%d %d %d", c, b, a);
						
			if(c - b == b - a){
				n++;
			//	printf("   !!!");
			}
			
			//printf("\n");
		}
		
		printf("%d", 99 + n);
	}
	*/
	
	
	//4(2503
	int N, n = 0, at = 0, bt = 0, ct = 0, an, bn, cn;
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		int aa, bb, cc, st, ba;
		scanf("%1d%1d%1d %d %d", &aa, &bb, &cc, &st, &ba);
		
		st = st - n;
		
		if(0 < st){
			if(at == 0){
				if(0 < st && a[aa] == 1){
					at = 1;
					an = aa;
					
					for(int i = 0; i < 9; i++){
						if(a1[i] == 1){
							b[i] = 0;
							c[i] = 0;
						}
					}
					
					st--;
				}
				else{
					if()
				}
			}
		}
	}
	
	
	
	
	return 0;
}
