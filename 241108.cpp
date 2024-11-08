#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;





int main(){
	/*
	//2745
	string str;
	int a = 0, b = 0;
	
	cin >> str >> b;
	
	for(int i = 0; str[i]; i++){
		int c = 1;
		for(int j = str.size() - 1; j > i; j--){
				c *= b;
		}
		
		if('A' <= str[i] && str[i] <= 'Z'){
			a += (str[i] - 55) * c;
		}
		else{
			a += (str[i] - '0') * c;
		}
		
	}	
	
	printf("%d\n", a);
	*/
	
	/*
	//31403
	string a, b, c;
	cin >> a >> b >> c;
	
	cout << stoi(a) + stoi(b) - stoi(c) << "\n";//stoi는 괄호안의 문자열을 그대로 정수로 만드는 함수 
	
	cout << stoi(a + b) - stoi(c) << "\n"; 
	*/
	
	/*
	//11653
	int a, n = 2;
	cin >> a;
	
	while(a != 1){
		if(a % n == 0){
			a /= n;
			printf("%d\n", n);
			n = 2;
		}
		else{
			n++;
		}
	}
	*/
	
	/*
	//1009
	int a, b, l;
	cin >> l;
	
	for(int j = 0; j < l; j++){
		cin >> a >> b;
		int n = 1;
		
		for(int i = 0; i < b; i++){
			n *= a;
			n = n % 10;
		}
		if(n == 0){
			printf("10\n");
		}
		else{
			printf("%d\n", n);
		}
		
	}
	*/
	
	
	//4796
	int i = 1;
	while(1){
		int a, b, c, n;
		cin >> a >> b >> c;
		
		if(a == 0 && b == 0 && c == 0){
			break;
		}
		else{
			n += ((c / b) * a) + (c % b);
			printf("case %d: %d\n", i, n);
		}
		i++;
	}
	
	
	return 0;
}
