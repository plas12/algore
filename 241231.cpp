#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
#include <stack>
#include <queue> 
#include <cmath>

using namespace std;




int main(){
	
	//25918
	
	int l = 0, n, m = 0, triger = 0;
	string str;
	stack <int> s;
	
	cin >> n >> str;
	
	for(int i = 0; i <= n; i++){
		if(i == n){
			l++;
			i = 0;
			n = s.size();
			
			if(s.size() % 2 == 1 || m == 0){
				printf("-1 %d %d", s.size(), m);
				break;
			}
			else if(s.empty()){
				printf("%d", l);
				break;
			}
			str.clear();
			while(!s.empty()){
				 str.append(1, s.top());
				 s.pop(); 
			}

			printf("\n");
			m = 0;
		}
		else{
			if(triger == 1){
				triger = 0;
			}
			else if(((str[i] == '(' && str[i + 1] == ')') || (str[i] == ')' && str[i + 1] == '('))){
				triger = 1;
				m++;
				
				printf("!!  ");
				cout << str;
				printf("  %c %d\n", str[i], i);
			}
			
			else{
				s.push(str[i]);
				
				printf("push ");
				cout << str;
				printf("  %c %d\n", str[i], i);
			}
		}
	}
		
		
	
	
	return 0;
}
