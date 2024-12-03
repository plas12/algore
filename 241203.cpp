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
	//6603
	
	while(1){
		int k = 0;
		
		scanf("%d", &k);
		
		if(k == 0){
			break;
		}
		else{
			vector <int> s;
			for(int i = 0; i < k; i++){
				int a = 0;
				scanf("%d", &a);
				s.push_back(a);
			}
			for(int a = 0; a < s.size() - 5; a++){
				
				for(int b = a + 1; b < s.size() - 4; b++){
					
					for(int c = b + 1; c < s.size() - 3; c++){
						
						for(int d = c + 1; d < s.size() - 2; d++){
							
							for(int e = d + 1; e < s.size() - 1; e++){
								
								for(int f = e + 1; f < s.size() - 0; f++){
									printf("%d ", s[a]);
									printf("%d ", s[b]);
									printf("%d ", s[c]);
									printf("%d ", s[d]);
									printf("%d ", s[e]);
									printf("%d\n", s[f]);
								}
							}
						}
					}
				} 
			}
			printf("\n");
		}
	}
	*/
	
	
	//11005
	
	int n = 0, b = 0;
	scanf("%d %d", &n, &b);
	
	char a[36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	
	int x = 1;
	while(1){
		if(x > n){
			x /= b;
			break;
		}
		x *= b;
		printf("%d\n", x);
	}
	
	while(1){
			
		printf("\n!!!%c %d %d %d!!!\n", a[n / x], n / x, n, x);
		printf("%c", a[n / x]);
		if(x == 1){
			printf("\n@@@%c %d %d %d@@@\n", a[n / x], n / x, n, x);
			break;
		}
		printf("\n!!!%c %d %d %d %d!!!\n", a[n / x], n / x, n, x, (n / x) * x);
		n = n - ((n / x) * x);
		
		printf("\n!!!%c %d %d %d!!!\n", a[n / x], n / x, n, x);
		x /= b;
		printf("\n!!!%c %d %d %d!!!\n\n\n", a[n / x], n / x, n, x);
			
	}
	
	
	
	
	return 0;
}
