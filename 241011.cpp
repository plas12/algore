#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

/*
10163
int back[1000][1000] = {}, area[101] = {};
int l, x, y, width, length;
*/

int main(){
	/*
	2563
	int back[101][101] = {};
	int l, size = 0;
	
	scanf("%d", &l);
	
	for(int i = 0; i < l; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		
		for(int n = x; n < x + 10; n++){
			for(int m = y; m < y + 10; m++){
				back[n][m] = 1;
			}

		}
		
	}
	
	for(int j = 0; j < 100; j++){
			for(int k = 0; k < 100; k++){
				if(back[j][k] == 1){
					size++;
				}
			}
		}
	
	
	printf("%d", size);
	*/
	/*
	10163
	scanf("%d", &l);
	
	for(int i = 1; i <= l; i++){
		scanf("%d %d %d %d", &x, &y, &width, &length);
		for(int n = x; n < x + width; n++){
			for(int m = y; m < y + length; m++){
				back[n][m] = i;
			}
		}
	}
	
	for(int i = 0; i < 1000; i++){
		for(int j = 0; j < 1000; j++){
			area[back[i][j]]++;
		}
	}
	
	for(int k = 1; k <= l; k++){
		printf("\n%d", area[k]);
	}
	*/
	/*2577
	int a, b, c;
	int answer = 0;
	int num[10] = {};
	
	scanf("%d %d %d", &a, &b, &c);
	answer = a * b * c;
	
	while(1){
		num[answer % 10]++;
		answer = answer / 10;
		if(answer <= 0){
			break;
		}
	}
	
	for(int i = 0; i < 10; i++){
		printf("%d", num[i]);
	}
	*/
	
	return 0;
}
