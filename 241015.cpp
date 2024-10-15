#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;


int main(){
	/*
	2577
	int a, b, c;
	int num[100] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	scanf("%d %d %d", &a, &b, &c);
	int n = a * b * c;
	
	while(1){
		if(n <= 0){
			break;
		}
		num[n%10]++;
		n /= 10;
	}
	
	for(int i = 0; i < 10; i++){
		printf("%d\n", num[i]);
	}
	*/
	/*
	5597
	int a[31] = {};
	
	for(int i = 0; i < 28; i++){
		int n = 0;
		
		scanf("%d", &n);
		
		a[n]++;
	}
	
	for(int i = 1; i < 31; i++){
		if(a[i] == 0){
			printf("%d\n", i);
		}
	}
	*/
	
	
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.9lf", a / b);
    
    
	

	
}
