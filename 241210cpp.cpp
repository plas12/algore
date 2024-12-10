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
	//10103
	int a = 0;
	int x_score = 100, y_score = 100;
	
	cin >> a;
	
	for(int i = 0; i < a; i++){
		int x = 0;
		int y = 0;
		
		cin >> x >> y;
		
		if(x > y){
			y_score -= x;
		}
		if(y > x){
			x_score -= y;
		}
	}
	
	printf("%d\n%d", x_score, y_score);
	*/
	
	/*
	//5073
	
	while(1){
		int a, b, c, bi = 0;
		cin >> a >> b >> c;
		
		if(a == 0 && b == 0 && c ==  0){
			break;
		}
		
		else{
			
			if(a > b){
				bi = a;
			}
			else{
				bi = b;
			}
			
			if(c > bi){
				bi = c;
			}

			if(bi == a){
				if(bi >= b + c){
					printf("Invalid\n");
				}
				else if(a == b && b == c){
					printf("Equilateral\n");
				}
				else if((a == b && b != c) || (a == c && b != c) || (b == c && a != b)){
					printf("Isosceles\n");
				}
				else{
					printf("Scalene\n");
				}
				
			}
			else if(bi == b){
				if(bi >= a + c){
					printf("Invalid\n");
				}
				else if(a == b && b == c){
					printf("Equilateral\n");
				}
				else if((a == b && b != c) || (a == c && b != c) || (b == c && a != b)){
					printf("Isosceles\n");
				}
				else{
					printf("Scalene\n");
				}
			}
			else if(bi == c){
				if(bi >= a + b){
					printf("Invalid\n");
				}
				else if(a == b && b == c){
					printf("Equilateral\n");
				}
				else if((a == b && b != c) || (a == c && b != c) || (b == c && a != b)){
					printf("Isosceles\n");
				}
				else{
					printf("Scalene\n");
				}
			}
			
		}
	}
	*/
	
	/*
	//1292
	int i = 0;
	int a = 1;
	int n = 1;
	int m = 0;
	int bi, sm;
	
	cin >> sm >> bi;
		
	while(1){
		for(int l = 0; l < a; l++){
			i++;
			if(sm <= i && i <= bi){
				m += a;	
			}
			else if(bi < i){
				n = 0;
				break;
			}
		}
		a++;
		if(n == 0){
			break;
		}
	}
	
	printf("%d", m);
	*/
	
	/*
	//10799
	stack <char> s;
	string str;
	int cnt = 0;
	int i = 0;
	
	cin >> str;
	
	while(1){
		if(str[i] == '\0'){
			break;
		}
		if(str[i] == '(' && str[i + 1] == ')'){
			cnt += s.size();
			//printf("cnt : %d, s.size : %d\n", cnt, s.size());
		}
		else if(str[i - 1] == '(' && str[i] == ')'){
			
		}
		else{
			if(str[i] == '('){
				s.push('(');
				//printf("s.size :%d\n", s.size());
			}
			else{
				s.pop();
				cnt++;
				//printf("cnt : %d, s.size : %d\n", cnt, s.size());
			}
		}
		i++;
	} 
	
	printf("%d", cnt);
	*/
	
	/*
	//5554
	int a = 0;
	for(int i = 0; i < 4; i++){
		int n = 0;
		cin >> n;
		a += n;
	}
	
	printf("%d\n%d", a / 60, a % 60); 
	*/
	
	/*
	//2010
	int a = 0, n = 0;
	cin >> a;
	for(int i = 0; i < a; i++){
		int b = 0;
		cin >> b;
		if(i == a - 1){
			n += b;
		}
		else{
			n += b - 1;
		}
	}
	
	printf("%d", n);
	*/
	
	
	//2935
	string a, b;
	char n;
	
	cin >> a >> n >> b;
	
	string answer;
	
	if(n == '+'){
		if(a.length() > b.length()){
			for(int i = 0; i < a.length() - b.length(); i++){
				printf("%d", a[a.length() - i]);
			}
			for(int i = b.length() - 1; i >= 0; i--){
				printf("%d", b[i]);
			}
		}	
		if(a.length() < b.length()){
			for(int i = 0; i < b.length() - a.length(); i++){
				printf("%d", b[b.length() - i]);
			}
			for(int i = a.length() - 1; i >= 0; i--){
				printf("%d", a[i]);
			}
		}
		if(a.length() == b.length()){
			printf("2");
			for(int i = 0; i < a.length() -  2; i++){
				printf("0");
			}
		}
	}
	if(n == '*'){
		
	}
	
	
	
	
	
	
	return 0;
}
