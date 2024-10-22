#include <stdio.h>
#include <stdlib.h>



int main(){
	/*
	10869
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n%d\n%d\n%d\n%d\n", a + b, a - b, a * b, a / b, a % b);
	*/
	/*
	2739
	int a = 0;
	scanf("%d", &a);
	for(int i = 1; i <= 9; i++){
		printf("%d * %d = %d\n",a,i,a*i);
	}
	*/
	/*
	10430
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n%d\n%d\n%d", (a + b) % c, ((a %c) + (b % c)) % c, (a * b) % c, ((a % c) * (b % c)) %c);
	*/
	/*
	2753
	int a = 0;
	scanf("%d", &a);
	if(a % 4 == 0){
		if(a % 100 != 0 || a % 400 == 0){
			printf("1");
		}
		else{
			printf("0");
		}
	}
	else{
		printf("0");
	}
	*/
	/*
	10950
	int a = 0;
	scanf("%d", &a);
	for(int i = 0; i < a; i++){
		int n, m;
		scanf("%d %d", &n, &m);
		printf("%d\n", n + m);
	}
	*/
	/*
	10952
	while(1){
		int a, b;
		scanf("%d %d", &a, &b);
		if(a == 0 && b == 0){
			break;
		}
		else{
			printf("%d\n", a + b);
		}
	}
	*/
	/*
	11021
	int a = 0;
	scanf("%d", &a);
	for(int i = 1; i <= a; i++){
		int n, m;
		scanf("%d %d", &n, &m);
		printf("Case #%d: %d\n", i, n + m);
	}
	*/
	/*
	11022
	int a = 0;
	scanf("%d", &a);
	for(int i = 1; i <= a; i++){
		int n, m;
		scanf("%d %d", &n, &m);
		printf("Case #%d: %d + %d = %d\n", i, n, m, n + m);
	}
	*/
	/*
	11382
	long long a, b, c;
	scanf("%ld %ld %ld", &a, &b, &c);
	printf("%ld", a + b + c);
	*/
	/*
	10872
	int a = 0, b = 1;
	scanf("%d", &a);
	for(int i = 1; i <= a; i++){
		b *= i;
	}
	printf("%d", b);
	*/
	/*
	2558
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d", a +b);
	*/
	
	
	int a = 0, l = 1, i;
	scanf("%d", &a);
	for(int j = l; j > 0; j--){
		for(int k = 1; k <= l; k++){
			if(i == a){
				printf("%d/%d", j, k);
				break;
			}
			else{
				l++;
				i++;
			}
		}
	}
	
	return 0;
}
