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
	
	//1(15501
	int l = 0;
	int a = 0, b = 0;
	int n = 0;
	int x = 0;
	cin >> l;	
	
	for(int i = 0; i < l; i++){
		int m;
		cin >> m;
	}
	
	cin >> b;
	for(int i = 0; i < l - 1; i++){
		
		cin >> a;
		//printf("%d %d %d\n", a, b, n);
		if(b - a == 1){
			if(x == -1){
				printf("bad puzzle");
				return 0;
			}
			else{
				x = 1;
			}
		}
		else if(b - a == -1){
			if(x == 1){
				printf("bad puzzle");
				return 0;
			}
			else{
				x = -1;
			}
		}
		else{
			n++;
			//printf("%d %d\n", b, a);
		}
		b = a;
		
	}
	
	if(n < 2){
		printf("good puzzle\n");
	}
	else{
		printf("bad puzzle\n");
	}
	
	
	
	
	
	
	return 0;
}
