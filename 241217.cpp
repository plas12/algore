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
	
	int l = 1, n = 0, m = 0;
	string str;
	stack <char> s;
	
	cin >> n >> str;
	
	while(1){
		m = 0;
		for(int i = 0; str[i]; i++){
			if(n == 1){
				n = 0;
			}
			
			else if(((str[i] == '(' && str[i + 1] == ')') || (str[i] == ')' && str[i + 1] == '('))){
				n = 1;
				m++;
			}
			
			else{
				s.push(str[i]);
			}
		}
		
		if(s.empty()){
			printf("%d", l);
			break;
		}
		else if(s.size() % 2 == 1){
			printf("-1");
			break;
		}
		else if(m == 0){
			printf("-1");
			break;
		}
		else{
			str.clear();
			string a;
			int x = s.size();
			for(int i = 0; i < x; i++){
				 a.append(1, s.top());
				 s.pop(); 
			}
			str = a;
		}
		
		l++;
		
	}
		
		
	
	
	return 0;
}
