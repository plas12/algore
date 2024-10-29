#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

void sg(int a, int b){
	int i = 2;
	int c = 1;
	while(1){
		i++;
		if(a % i == 0 && b % i == 0){
			a /= i;
			b /= i;
			c *= i;
			i = 2;
		}
		if(i > a && i > b){
			break;
		}
	}
	c *= a * b;
	printf("%d", c);
}

int main(){
	/*
	23080
	int a = {0};
	string str;
	cin >> a >> str;
	
	for(int i = 0; str[i]; i++){
		if(i % a == 0){
			printf("%c", str[i]);
		}
	}
	*/
	/*
	1152
	int a = 0, n = 0;
	string str;
	getline(cin, str);
	
	for(int i = 0; str[i]; i++){
		if(str[i] != ' '){
			 n = 1;
		}
		
		else{
			if(n == 1){
				a++;
				n = 0;
			}
		}
	}
	if(n == 1){
		a++;
	}
	
	printf("%d", a);
	*/
	/*
	2675
	int a = 0;
	scanf("%d", &a);
	
	for(int i = 0; i < a; i++){
		int l = 0;
		string str;
		cin >> l >> str;
		
		for(int j = 0; str[j]; j++){
			for(int k = 0; k < l; k++){
				printf("%c", str[j]);
			}
		}
        printf("\n");
		
	}
	*/
	
	
	int l = 0;
	scanf("%d", &l);
	
	
	for(int i = 0; i < l; i++){
		int a , b;
		scanf("%d %d", &a, &b);
		sg(a, b);
	}
	
	return 0;
}
