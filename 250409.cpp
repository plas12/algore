#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>
#include <cmath>

using namespace std;




int main(){
	/*
	//1(16953
	int A, B, l = 0;
	cin >> A >> B;
	
	while(1){
		if(A == B){
			printf("%d\n", l + 1);
			break;
		}
		else if(B < A){
			printf("-1\n");
			break;
		}
		else{
			if(B % 2 && B % 10 != 1){
				printf("-1\n");
				break;
			} 
			else if(B % 2){
				B /= 10;
				l++;
			}
			else{
				B /= 2;
				l++;
			}
		}
	}
	*/
	
	
	//2(2812
	int N, K;
	stack <int> s;
	cin >> N >> K;
	
	//1
	//9
	//92
	//94
	
	int l = 0;
	while(1){
		if(l == N){
			int a = s.size();
			vector <int> v;
			
			for(int i = 0; i < a; i++){
				//printf("%d ", s.top());
				v.push_back(s.top()); 
				
				s.pop();
			}
			//printf("\n");
			
			reverse(v.begin(), v.end());
			
			for(int i = 0; i < v.size(); i++){
				printf("%d ", v[i]);
			}
			
			break;
		}
		else{
			int n = 0;
			scanf("%1d", &n);
			
			//printf("%d   ", n);
			
			if(K == 0){
				s.push(n);
			}	
			else if(s.empty()){
				s.push(n);
			//	printf("!\n");
			}
			else if(n <= s.top()){
				s.push(n);
			//	printf("@\n");
			}
			else{
				while(1){
					if(s.empty() || n <= s.top() || K == 0){
						break;
					}
					else{
						K--;
						s.pop();
					}
				}
				s.push(n);
				
			//	printf("#\n");
			}
		}
		
		l++;
	}
	
	
	return 0;
}
