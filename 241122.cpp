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
	stack <int> s;//stack <�ڷ���> �̸�; - ���� 
	
	s.push(6);//�̸�.push(���� ��); - ���� ���� stack��  ���� 
	
	s.top();//�̸�.top(); - ������ ���� Ȯ�� 
	
	s.pop();//�̸�.pop(); - ������ ���� ����
	
	s.empty();//�̸�.empty(); - stack�� ����ٸ� true  ���
	 
	s.size();//�̸�.size(); - stack�� ũ�� ���
	*/ 
	
	/*
	//2
	queue <int> q;//queue <�ڷ���> �̸�; - ����
	
	q.push(6);//�̸�.push(���� ��); - ���� ���� queue��  ���� 
	
	q.front();//�̸�.front(); - queue�� �� �� �� Ȯ��
	
	q.pop();//�̸�.pop(); - queue�� �� �հ��� ����
	
	q.empty();//�̸�.empty(); - queue�� ����ٸ� true ���
	
	q.size();//�̸�.size(); - queue�� ũ�� ���  
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
	
	while(!s.empty()){//s.empty == 0 => 1��� || s.empty == 1 => 0��� 
		printf("%d ", s.top());
		s.pop();
	}
	
	printf("\n");
	
	while(!q.empty()){//���ϵ��� 
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

