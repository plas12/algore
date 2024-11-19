#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;





int main(){
	/*
	//10430
	
	int a[42] = {0};
	int b = 0;
	
	for(int i = 0; i < 10; i++){
		int n = 0;
		cin >> n;
		a[n % 42]++;
	}	
	
	for(int i = 0; i < 42; i++){
		if(a[i] != 0){
			b++;
		}
	}
	
	printf("%d", b);
	*/
	
	/*
	//2908
	
	int a, b;
	int x = 0, y = 0	;
	
	cin >> a >> b;
	
	for(int i = 0; i < 3; i++){
		x =  x * 10 + a % 10;
		a /= 10;
	}
	
	for(int i = 0; i < 3; i++){
		y = y * 10 + b % 10;
		b /= 10;
	}
	
	if(x > y){
		printf("%d", x);
	}
	else{
		printf("%d", y);
	}
	*/
	
	
	//2903
	
	int l;
	cin >> l;
	
	int a = 4, b = 2;
	
	for(int i = 0; i < l; i++){
		b = b + (b - 1);
		a = b * b;
	}
	
	printf("%d", a);
	
	
	
	
	
	return 0;
}
