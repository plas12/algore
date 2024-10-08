#include <stdio.h>
#include <stdlib.h>

int prime(int n){
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	/*
	1546
	double xy[1001] = {}, max = 0, sum = 0;
	int a = 0;
	
	scanf("%d", &a);
	
	for(int i = 0; i < a; i++){
		int b = 0;
		scanf("%d", &b);
		xy[i] = b * 1.0;
		if(max < xy[i]){
			max = b * 1.0;
		}
	}
	
	for(int i = 0; i < a; i++){
		sum += xy[i] / max * 100;
	}
	
	printf("%lf", sum / a);
	*/
	/*
	1110
	int a = 0, b = 0, c = 0, l = 0, f;
	
	scanf("%d", &f);
	
	c = f;
	while(1){
		a = c / 10 % 10;
		b = c % 10;
		c = b * 10 + (a + b) % 10;
		l++;
		printf("a%da b%db c%dc l%dl f%df\n", a, b, c, l, f);
		if(c == f){
			break;
		}
	}
	printf("%d", l);
	*/
	/*
	2480
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a == b && b == c && c == a){
		printf("%d", 10000 + a * 1000);
	}
	else if(a != b && b != c && c != a){
		int max = 0;
		
		if( max < a){
			max = a;
		}
		if( max < b){
			max = b;
		}
		if( max < c){
			max = c;
		}
		
		printf("%d", max * 100);
	}
	else{
		if(a == b && b != c && c != a){
			printf("%d", 1000 + a * 100);
		}
		else if(b == c && a != b && a != c){
			printf("%d", 1000 + b * 100);
		}
		else if(a == c && c != b && a != b){
			printf("%d", 1000 + a * 100);
		}
	}
	*/
	/*
	10818
	int a = 0, B = -10000000, S = 1000000000;
	scanf("%d", &a);
	
	for(int i = 0; i < a; i++){
		int b;
		scanf("%d", &b);
		if(B < b){
			B = b;
		}
		if(b <	 S){
			S = b;
		}
	}
	
	printf("%d %d", S, B);
	*/
		
	
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = a; i <= b; i++){
		if(prime(i) == 0 || i % 2 == 0){
			
		}
		else{
			printf("%d\n", i);
		}
	}
	
}
