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
	//1
	int a[10];
	
	for(int i = 0; i < 10; i++){
		int n = 0, l = 0;
		scanf("%d", &n);
		for(int k = 0; k < 10; k++){
			if(n < a[k]){
				a[k - 1] = n;
			}
			else{
				if(k != 0){
					a[k - 1] = a[k];
					a[k] = n;
				}
			}
		}
	}
	
	for(int i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	*/
	
	
	//2
	int l = 0;
	
	int a1[100], b1[100], c1[100];
	int a2[100], b2[100], c2[100];
	
	scanf("%d", &l);
	
	for(int i = 0; i < l; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		
		a1[i] = a;
		a2[i] = a;
		b1[i] = b;
		b2[i] = b;
		c1[i] = c;
		c2[i] = c;
	}
	
	sort(c2, c2 + l);
	
	
	return 0;
}
