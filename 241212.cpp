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
	/1
	int a = 0;
	stack <int> s;
	
	cin >> a;
	
	for(int i = 0;i < a; i++){
		int n = 0;
		
		cin >> n;
		
		while(!s.empty() && s.top() < n){
			s.pop();
		}
		s.push(n);
	}
	
	printf("%d", s.size());
	*/
	
	/*
	//2 - queue 사용 예제 
	int a, b;
	scanf("%d %d", &a, &b);
	queue <int> q;
	q.push(a);
	
	while(!q.empty()){
		int num = q.front();
		q.pop();
		if(num == b){
			printf("1");
			return 0;
		}
		
		if(num * 2 <= b){
			q.push(num * 2);
		}
		if(num * 10 + 1 <= b){
			q.push(num * 10 + 1);
		}
	}
	
	printf("-1");
	*/
	
	
	//25918
	int a, l = 0, ll = 0;
	stack <int> s;
	string str;
	
	cin >> a >> str;
	
	while(1){
		if(a == ll){
			printf("%d", l);
			break;
		}
		else if(a % 2 == 1){
			printf("-1");
			break;
		}
		for(int i = 0; str[i]; i++){
			if(str[i] == '(' && str[i + 1] == ')'){
				ll++;
			}
			
		}
		l++;
	}
	
	
	
	
	
	return 0;
}
