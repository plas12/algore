#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
#include <stack> //stack
#include <queue> //queue

using namespace std;





int main(){
	/*
	//1 
	stack <int> s;//stack <자료형> 이름; - 선언 
	
	s.push(6);//이름.push(넣을 값); - 넣을 값을 stack에  삽입 
	
	s.top();//이름.top(); - 맨위의 값을 확인 
	
	s.pop();//이름.pop(); - 맨위의 값을 삭제
	
	s.empty();//이름.empty(); - stack이 비었다면 true  출력
	 
	s.size();//이름.size(); - stack의 크기 출력
	*/ 
	
	/*
	//2
	queue <int> q;//queue <자료형> 이름; - 선언
	
	q.push(6);//이름.push(넣을 값); - 넣을 값을 queue에  삽입 
	
	q.front();//이름.front(); - queue의 맨 앞 값 확인
	
	q.pop();//이름.pop(); - queue의 맨 앞값을 삭제
	
	q.empty();//이름.empty(); - queue가 비었다면 true 출력
	
	q.size();//이름.size(); - queue의 크기 출력  
	*/
	
	/*
	//3
	stack <int> s;
	queue <int> q;
	
	for(int i = 0; i < 10; i++){
		int t = 0;
		scanf("%d", &t);
		s.push(t);
		q.push(t); 
	}
	
	while(!s.empty()){//s.empty == 0 => 1출력 || s.empty == 1 => 0출력 
		printf("%d ", s.top());
		s.pop();
	}
	
	printf("\n");
	
	while(!q.empty()){//이하동문 
		printf("%d ", q.front());
		q.pop();
	}
	*/
	
	
	//1158
	int a = 0;
	int b = 0;
	queue <int> q;
	cin >> a >> b;
	
	for(int i = 1; i <= a; i++){
		q.push(i);
	}
	
	printf("<");
	
	while(!q.empty()){
		for(int i = 1; i < b; i++){
			q.push(q.front());
			q.pop();
		}
		if(q.size() == 1){
			printf("%d>", q.front());
			q.pop();
		}
		else{
			printf("%d, ", q.front());
			q.pop();
		}
	}
	return 0;
}

