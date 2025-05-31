#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;


//2(33516






int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(9935
//	cin >> str;
//	cin >> N;
//	
//	reverse(N.begin(), N.end());
//
//	for(int i = 0; i < str.size(); i++){
//		s.push(str[i]);
//		
//		if(str[i] == N[0]){
//			string n;
//			
//			for(int i = 0; i < N.size(); i++){
//				n += s.top();
//				s.pop();
//			}
////			cout << n << "  " << N << '\n';
//			
//			if(n != N){
//				for(int i = 0; i < N.size(); i++){
//					s.push(n[i]);
//				}
//			}
//		}
//	}
//	
//	if(s.empty()){
//		cout << "FRULA";
//	}
//	else{
//		int n = s.size();
//		string m;
//		for(int i = 0; i < n; i++){
//			m += s.top();
//			s.pop();
//		}
//		
//		reverse(m.begin(), m.end());
//		
//		cout << m;
//	}
	
	string str;
	string bomb;
	
	cin >> str >> bomb;
	
	stack <char>  s;
	
	for(int i = 0; i < str.size(); i++){
		char c = str[i];
		
		s.push(c);
		
		if(bomb.size() <= s.size()){
			bool match = true;
			string str2 = "";
			
			for(int j = 0; j < bomb.size(); j++){
				if(s.top() != bomb[bomb.size() - 1 - j]){
					match = false;
					break;
				}
				str2 += s.top();
				s.pop();
			} 
			
			if(!match){
				for(int j = str2.size() - 1; j  >= 0; j--){
					s.push(str2[j]);
				}
			}
		}
	}
	
	if(s.empty()){
		cout << "FRULA";
	}
	else{
		string result = "";
		
		while(!s.empty()){
			result += s.top();
			s.pop();
		}
		
		reverse(result.begin(), result.end());
		cout << result;
	}
	*/
	
	
	//2(33516
	int n, cnt = 0;
	stack <int> s;
	
	string str;
	
	cin >> n;
	cin >> str;
	
	for(int i = 0; i < str.size(); i++){
		char c = str[i];
		
		if(c == 's'){
			s.push(1);
		}
		else if(c == 'k'){
			if(!s.empty() && s.top() == 1){
				s.top()++;
			}
			else{
				while(!s.empty()){
					s.pop();
				}
			}
		}
		else if(c == 'e'){
			if(!s.empty() && (s.top() == 2 || s.top() == 3)){
				s.top()++;
			}
			else{
				while(!s.empty()){
					s.pop();
				}
			}
		}
		else if(c == 'p'){
			if(!s.empty() && s.top() == 4){
				s.top()++;
			}
			else{
				while(!s.empty()){
					s.pop();
				}
			}
		}
		else{
			while(!s.empty()){
				s.pop();
			}
		}
		
		while(!s.empty() && s.top() == 5){
			cnt++;
			s.pop();
			
			if(!s.empty()){
				s.top()++;
			}
		}
	}
	
	cout << cnt;
	
	
	
	return 0;
}
