#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <cstring>
#include <cmath>

using namespace std;

//1(17298
stack <int> s;
int a[1000001];

int main(){

	//1(17298
	int l;
	cin >> l;
	
	int n, i = 0, x = 0, j = 0;
	while(1){
		if(i == l - 1){
			for(int p = 0; p < l - 1; p++){
				if(a[p] == 0){
					printf("-1 ");
				}
				else{
					printf("%d ", a[p]);
				}
			}
			printf("-1\n");
			break;
		}
		
		if(x <= l){
			cin >> n;
			x++;
		}
		
		if(s.empty()){
			s.push(n);
		}
		else if(s.top() < n){
			s.pop();
			if(x < l){
				s.push(n);
			}
		}
		else if(n < s.top()){
			if(s.size() == 2){
				
			}
			s.push(n);
		}
	}
	
	
	
	
	
	
	return 0;
}
