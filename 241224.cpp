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
	
	//25918
	
	int n = 0, l = 0, a = 0;
	string str;
	stack <char> s;
	
	cin >> n >> str;
	
	while(1){
		int m = 0;
		for(int i = 0; str[i]; i++){
			
			if(s.empty()){
				s.push();
			}
			
			else{
				
				if(s.top() == '('){
					if(str[i] == ')'){
						s.pop();
					}
					else{
						str[a++] = str[i];
					}
				}
				
				else{
					if(str[i] == '('){
						s.pop();
					}
					else{
						str[a++] = str[i];
					}
				}
				
			}
			
		}
		
		if(str.size() % 2 == 1 || !s.empty()){
			printf("-1");
		}
		
		
	}
	
	return 0;
}
