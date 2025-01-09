#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
#include <stack>
#include <queue> 
#include <cmath>
#include <algorithm>

using namespace std;





int main(){
	/*
	//1(9095
	int l = 0;
	int a[11];
	cin >> l;
	
	a[1] = 1;
	a[2] = 2;
	a[3] = 4;
	
	for(int i = 4; i < 11; i++){
		a[i] = a[i - 1] + a[i - 2] + a[i - 3];
	}
	
	for(int i = 0; i < l; i++){
		int n = 0;
		cin >> n;
		printf("%d\n", a[n]);
	}
	*/
	
	/*
	//2(9625
	int l = 0, i = 0;
	int a[46];
	int b[46];
	cin >> l;
	
	a[1] = 1;
	b[1] = 0;
	a[2] = 0;
	b[2] = 1;
	
	for(i = 3; i <= l + 1; i++){
		a[i] = b[i - 1];
		b[i] = a[i - 1] + b[i - 1];
		//printf("%d %d\n", a[i], b[i]);
	}
	
	printf("%d %d\n", a[l + 1], b[l + 1]);
	*/
	
	/*
	//3(2502
	int l = 0;
	int n = 0;
	cin >> l >> n;
	
	for(int start1 = 1; start1 < n; start1++){
		for(int start2 = 1; start2 < n; start2++){
			int a[31];
			a[1] = start1;
			a[2] = start2;
			for(int i = 3; i <= l; i++){
				a[i] = a[i - 1] + a[i - 2];
				//printf("%d %d    %d\n", start1, start2, a[i]);
			}
			if(a[l] == n){
				printf("%d\n%d", start1, start2);
				return 0;
			}
			//printf("-----\n");
		}
	}
	*/
		
	/*
	//4(9461
	int l = 0;
	cin >> l;
	
	long long a[101];
	
	a[1] = 1;
	a[2] = 1;
	a[3] = 1;
	a[4] = 2;
	a[5] = 2;
	
	long long start1 = 1, start2 = 5;
	
	for(int i = 6; i <= 101; i++){
		a[i] = a[start1] + a[start2];
		start1++;
		start2++;
		//printf("%lld\n", a[i]);
	}
	
	for(int i = 0; i < l; i++){
		int n = 0;
		cin >> n;
		
		printf("%lld\n", a[n]);
	}
	*/
	
}
