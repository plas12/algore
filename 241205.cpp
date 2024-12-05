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
	//1(9012
	int n;
	cin >> n;
	
	
	while(n--){
		string str;
		stack <char> s;
		
		cin >> str;
		
		for(int i = 0; str[i]; i++){
			if(s.empty()){
				s.push(str[i]);
			}
			else{
				if(str[i] == '('){
					s.push(str[i]);
				}
				if(str[i] == ')'){
					if(s.top() == '('){
						s.pop();
					}
					else{
						s.push(str[i]);
					}
				}
			}
		}
		
		if(s.empty()){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	*/
	
	/*
	//2(2164
	queue <int> q;
	int a = 0;
	int i = 0;
	cin >> a;
	
	for(int i = 1; i <= a; i++){
		q.push(i);
	}
	
	while(q.size() != 1){
		if(i % 2 == 0){
			q.pop();
			
		}
		else{
			q.push(q.front());
			q.pop();
		}
		i++;
	}	
	printf("%d", q.front());
	*/
	
	
	//3
	int n = 0;
	stack <int> s; 
	string str;
	
	cin >> str;
	
	for(int i = 0; str[i]; i++){
		if((str[i] == '(' && str[i+1] == ')')){
			n += s.size();
			printf("\nstick : %d, n : %d, i : %d\n", s.size() , n, i);
		}
		else if(i == str.length()){
			n += s.size();
			printf("\nstick : %d, n : %d, i : %d\n", s.size() , n, i);
		}
		
		else{
			if(str[i] == '('){
				s.push(str[i]);
				printf("\nstick : %d\n", s.size());
			}
			else{
				s.pop();
				n++;
				printf("\nstick : %d, n : %d, i : %d\n", s.size() , n, i);
			}
		}
		
		
	}
	
	printf("%d", n);
	
	
	
	return 0;
}
