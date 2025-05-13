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
/*
//2(32290
vector <int> v;
*/





int main(){
	/*
	//1(25166
	int N, M;
	scanf("%d %d", &N, &M);
	
	if(N <= 1023){
		printf("No thanks");
	}
	else{
		N = N - 1023;
		
		if(M < N){
			printf("Impossible");
		}
		else{
			int n = N & M;
			
			if(n == 0){
				printf("Impossible");
			}
			else{
				printf("Thanks");
			}
		}
	}
	*/
	
	/*
	//2(32290
	int l, r, x;
	scanf("%d %d %d", &l, &r, &x);
	
	for(int i = l; i <= r; i++){
		v.push_back(i | x);
	}
	sort(v.begin(), v.end());
	
	int n = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i] == n){
			n++;
		}
	}
	
	printf("%d", n);
	*/
	
	
	//3(5525
	int N, M, cnt = 0;
	string s;
	scanf("%d %d", &N, &M);
	
	string a = "IOI";
	for(int i = 0;  i < N - 1; i++){
		a += "OI";
	}	
	
	cin >> s;
	
	int i = 0;
	while(i < M - 2 * N){
		if(s[i] == 'I'){
			if( == a){
				cnt++;
			}
			else if(s[i + 1] == 'O'){
				i++;
			}
		}
		i++;
	}
	printf("%d", cnt);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
