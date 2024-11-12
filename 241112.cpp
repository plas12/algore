#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;





int main(){
	/*
	//4796
	int i = 1;
	while(1){
		int a, b, c, n;	
		cin >> a >> b >> c;
		
		if(a == 0 && b == 0 && c == 0){
			break;
		}
		else{
			n = c % b;
			if(a < n){
				n = a;
			}
			printf("Case %d: %d\n", i, (c / b) * a + n);
		}
		i++;
	}
	*/
	
	/*
	//10953
	int l = 0;
	cin >> l;
	
	for(int i = 0; i < l; i++){
		int a, b;
		scanf("%d,%d", &a, &b);
		printf("%d\n", a + b);
	}
	*/
	
	/*
	//2475
	int a, b, c, d, e, n;
	
	cin >> a >> b >> c >> d >> e;
	
	printf("%d", (a * a + b * b + c * c + d * d + e * e) % 10);
	*/
	
	/*
	//1924
	int mon[12] = {0, 31, 28, 31 ,30, 31, 30, 31, 31, 30, 31, 30};
	int a = 0, b = 0;
	
	cin >> a >> b;	
	
	int n = b;
	
	for(int i = 0; i < a; i++){
		n += mon[i];
	}
	
	//printf("%d %d\n", a, n);
	
	if(n % 7 == 0){
		printf("SUN");
	}
	if(n % 7 == 1){
		printf("MON");
	}
	if(n % 7 == 2){
		printf("TUE");
	}
	if(n % 7 == 3){
		printf("WED");
	}
	if(n % 7 == 4){
		printf("THU");
	}
	if(n % 7 == 5){
		printf("FRI");
	}
	if(n % 7 == 6){
		printf("SAT");
	}
	*/
	
	/*
	//5086
	while(1){	
		int a, b;
		cin >> a >> b;
		if(a == 0 && b == 0){
			break;
		}
	
		if(b % a == 0){
			printf("factor\n");
		}
		else if(a % b == 0){
			printf("multiple\n");
		}
		else{
			printf("neither\n");
		}
		
	}
	*/
	
	
	//2587
	int a[5] = {};
	int n = 0; 
	
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	
	printf("\n\n %d \n\n", (a[0] + a[1] + a[2] + a[3] + a[4]) / 5);
	
	for(int i = 0; i < 5; i++){
		int k[2] = {0, 0};
		for(int j = i; j < 5; j++){
			if(k[0] < a[j]){
				k[0] = a[j];
				k[1] = j;
			}
		}
		n = a[4];
		a[4] = k[0];
		a[k[1]] = n;
	}	
	
	printf("%d\n%d\n%d\n%d\n%d", a[0], a[1], a[2], a[3], a[4]);
	
	
	return 0;
}
