#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;



int main(int argc, char *argv[]) {
	/*
	1
	int x, y, s[2] = {};
	int xy[100][100] = {};
	
	scanf("%d %d", &x, &y);
	
	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			scanf("%d", &xy[j][i]);
			if( xy[j][i] == 2 ){
				s[0] = j;
				s[1] = i;
				
			}
		}
	}
	printf("\n\n");
	while(1){
		
		if(xy[s[0]][s[1] + 1] == 0){
			s[1]++;
		}
		else if(xy[s[0] + 1][s[1]] == 0){
			s[0]++;
		}
		else{
			printf("%d %d", s[0], s[1]);
			break;
		}
		
	}
	*/
	/*
	2
	int a = 0, b = 0;
	int xy[101][101] = {};
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	for(int i = 0; i < b; i++){
		int x, y, num;
		scanf("%d %d %d", &x, &y, &num);
		
		if(xy[x][y] <= num){
			xy[x][y] = num;
		}
	}
	
	printf("\n\n"); 
	
	for(int i = 1; i < a; i++){
		for(int j = 1; j < a; j++){
			printf("%d ", xy[i][j]);
		}
		printf("\n");
	}
	*/
	
	
	
	
	return 0;
}
