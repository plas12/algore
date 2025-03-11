#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>
#include <cmath>

using namespace std;
/*
//1(15501
int a[2000001];
int b[1000001];
int c[1000001];
*/

/*
//2(17298
int a[1000001];
int b[1000001];
stack <int> s;
*/


//3(14864






int main(){
	/*
	//1(15501
	int l = 0;
	cin >> l;
	
	for(int i = 0; i < l; i++){
		int n = 0;
		cin >> n;
		a[i] = n;
		a[i + l] = n;
	}
	
	for(int i = 0; i < l; i++){
		int n = 0;
		cin >> n;
		b[i] = n;
		c[l - (i + 1)] = n;
	}
	
	
	
	for(int i = 0; i < l; i++){
		if(a[i] == b[0]){
			int n = 0;
			for(int j = 0; j < l; j++){
				if(a[i + j] == b[j]){
					n++;
				}
			}
			if(n == l){
				printf("good puzzle");
				return 0;
			}
		}
		else if(a[i] == c[0]){
			int n = 0;
			for(int j = 0; j < l; j++){
				if(a[i + j] == c[j]){
					n++;
				}
			}
			if(n == l){
				printf("good puzzle");
				return 0;
			}
		}
	}
	
	printf("bad puzzle");
	*/
	
	/*
	//2(17298
	int l = 0;
	cin >> l;
	
	for(int i = 0; i < l; i++){
		cin >> a[i];
	}
	
	for(int i = l - 1; i >= 0; i--){
		if(s.empty()){
			s.push(a[i]);
			b[i] = -1;
		}
		else{
			if(a[i] < s.top()){
				b[i] = s.top();
				s.push(a[i]);
			}
			else{
				while(1){
					if(s.empty()){
						b[i] = -1;
						s.push(a[i]);
						break;
					}
					if(a[i] < s.top()){
						b[i] = s.top();
						s.push(a[i]);
						break;	
					}
					s.pop();
				}
			}
		}
	}
	
	for(int i = 0; i < l; i++){
		printf("%d ", b[i]);
	}
	*/
	
	
	//3(14864
	
	
	
	
	
	
	
	
	return 0;
}
