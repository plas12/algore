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
//1(2512
long long N = 0, M = 0;
vector <long long> v;

long long A = 9223372036854775807;
long long answer = -1;
*/

/*
//2(2003
int N, M, a = 0, l = 0;
vector <int> v;
*/


//3(3273
int N = 0, M = 0;
int l = 0;
vector <int> v;
vector <int> v2;



int main(){
	/*
	//1(2512
	scanf("%d", &N);
	
	int B = 0;
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		B += n;
		
		v.push_back(n); 
	}
	
	sort(v.begin(), v.end());
	
	scanf("%d", &M);
	
	if(B <= M){
		printf("%d", v[N - 1]);
	}
	else{
		int n = 0;
		for(int i = N - 1; i >= 0; i--){
			n += v[i];
			int m = (M - (B - n)) / (N - i);
			
//			printf("m : %d", m);
			
			if(v[i - 1] < m && m <= v[i]){
//				printf(", v[i - 1] : %d, v[i] : %d", v[i - 1], v[i]);
				
				if(n % m < A){
//					printf(", before A : %d, before answer : %d", A, answer);
					
					A = n % m;
					answer = m;
					
//					printf(", after A : %d, after answer : %d", A, answer);
				}
			}
			
//			printf("\n");
		}
		
		if(answer == -1){
			printf("%d", M / N);
		}
		else{
			printf("%d", answer);
		}
	}
	*/
	
	/*
	//2(2003
	scanf("%d %d", &N, &M);
	
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		v.push_back(n); 
	}
	
//	printf("%d\n\n", v.size());
	
	int x = -1, y = -1;
	while(x <= y && y < N){
		
		if(a == M){
			l++;
//			printf("%d %d   %d\n", x + 1, y, a);
			y++;
			
			a += v[y];
		}
		else if(a < M){
			y++;
			
			a += v[y];
		}
		else{
			x++;
			
			a -= v[x];
		}
	}
	
	printf("%d", l);
	*/

	
	//3(3273
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		v.push_back(n); 
		v2.push_back(n); 
	}
	reverse(v2.begin(), v2.end());
	
	scanf("%d", &M);
	
	printf("%d %d\n\n", N, M);
	
	for(int i = 0; i < N; i++){
		if(v[i] != -1){
			int n = M - v[i];
			printf("!! %d !!\n", n);
			
			int L = i + 1;
			int R = N - 1;
			
			while(L <= R){
				int mid = (L + R) / 2;
				
				if(v[mid] == n){
					v[mid] = -1;
					l++;
					break;
				}
				else if(n < v[mid]){
					R = mid - 1;
				}
				else{
					L = mid + 1;
				}
			}
			
		}
	}
	
	printf("%d", l);
	
	
	
	return 0;
}
