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
//1(Bit Masking
and	A & B(둘다 1이면 1출력) 1 1 0 1 & 0 0 1 1 == 0 0 0 1
or	A | B(둘중 하나라도 1이면 1출력) 1 1 0 1 | 0 0 1 1 == 1 1 1 1
xor A ^ B(둘이 다를때 1 출력) 1 1 0 1 ^ 0 0 1 1 == 1 1 1 0
not ~A(전체비트 반전) - 1 1 0 1 == 0 0 1 0
A << B(A를 B칸만큼 왼쪽으로 밈) 1 1 0 1 << 1 == (1) 1 0 1 0
A >> B(A를 B칸만큼 오른쪽으로 밈) 1 1 0 1 >> 1 == 0 1 1 0 (1)
*/

/*
//3(24389
int different(int n, int m){
	int a = n & m;
	int cnt = 0;
	
	for(int i = 0; i < 32; i++){
		if(n % (1 << i)){
			cnt++;
		}
	}
	
	return cnt;
}
*/

int main(){
	/*
	//1(Bit Masking
	int n;
	int cnt = 0;
	scanf("%d", &n);
	
	for(int i = 0; i < 4; i++){
		if(n & (1 << i)){
			cnt++;
		}
	}
	
	printf("%d", cnt);
	*/
	
	/*
	//2(12833
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	
	if(C % 2){
		printf("%d", A ^ B);
	}
	else{
		printf("%d", A);
	}
	*/
	
	/*
	//3(24389
	long long N = 0;
	scanf("%d", &N);
	int M = N;
	
	~M;
	M++;
	
	printf("%d", different(N, M));
	*/
	
	/*
	//4(1094
	int X = 0;
	int cnt = 0;
	scanf("%d", &X);
	
	for(int i = 0; i < 7; i++){
		if(X & 1 << i){
			cnt++;
		}
	}
	
	printf("%d", cnt);
	*/
	
/* 	
	//4(1740
	int N = 0;
	int A = 0;
	int two = 1;
	int three = 1;
	
	scanf("%d", &N);
	
	int i = 0;
	while(two <= N){
		if(N & (1 << i)){
			A += three;
		}
		
		i++;
		two *= 2;
		three *= 3;
	}
	
	printf("%d", A);
	
0001 1 1 	1

0010 2 3 	3		
0011 3 4 	1 + 3

0100 4 9 	9		
0101 5 10 	1 + 9
0110 6 12 	3 + 9
0111 7 13 	1 + 3 + 9

1000 8 27	27		
1001 9 28	1 + 27
1010 10 30	3 + 27
1011 11 31	1 + 3 + 27
1100 12 36	9 + 27
1101 13 37	1 + 9 + 27
1110 14 39	3 + 9 + 27
1111 15 40	1 + 3 + 9 + 27

//순서를 2진법으로 나타내고, 그대로 3진법으로 옮기기 
*/
	
	/*
	//5(27965
	int A;
	int B;
	scanf("%d %d", &A, &B);
	
	int C = A ^ B;
	
	printf("%d", C);
	*/
	
	
	//6(25166
	int S;
	int M;
	int N = 1023;
	scanf("%d %d", &S, &M);
	
	if(S <= N){
		printf("No thanks");
	}
	else{
		int n = S - N;
		
		if(n & M == n){
			printf("Thanks");
		}
		else{
			printf("Impossible");
		}
	}
	
	
	
	return 0;
}
