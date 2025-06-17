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
//1(32371
char a[4][10];
int check[4][10] = {0};
*/


//2(32171
int N;
int map[21][21];





int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(32371
//	printf("1\n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 10; j++){
			char n;
			scanf("%c", &n);
			
			a[i][j] = n;
		}
		char dummy;
		scanf("%c", &dummy);
	}
//	printf("\n\n");
	
//	for(int i = 0; i < 4; i++){
//		for(int j = 0; j < 10; j++){
//			printf("%c ", a[i][j]);
//		}
//		printf("\n");
//	}
	
//	printf("2\n");
	for(int l = 0; l < 9; l++){
		char n;
		scanf("%c", &n);
		
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < 10; j++){
				if(a[i][j] == n){
					check[i][j] = 1;
//					printf("%d %d  %d\n", i, j, check[i][j]);
				}
			}
		}
	}
	
//	for(int i = 0; i < 4; i++){
//		for(int j = 0; j < 10; j++){
//			printf("%d ", check[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");
	
//	printf("3\n");
	int cnt = 0;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 10; j++){
			if(check[i][j] == 1){
//				printf("%c ", a[i][j]);
				cnt++;
			}
			if(cnt == 5){
				printf("%c\n", a[i][j]);
				return 0;
			}
		}
	}
	*/
	
	
	//2(32171
	cin >> N;
	
	int a = 21, b = 21, c = -1, d = -1;
	for(int i = 0; i < N; i++){
		int a2, b2, c2, d2;
		cin >> a2 >> b2 >> c2 >> d2;
		
		a = min(a, a2 + 10);
		b = min(b, b2 + 10);
		c = max(c, c2 + 10);
		d = max(d, d2 + 10);
		
		for(int i = a; i < c; i++){
			for(int j = b; j < d; j++){
				map[i][j] = 1;
			}
		}
		
		int cnt = 0;
		for(int i = 0; i < 21; i++){
			for(int j = 0; j < 21; j++){
				if(map[i][j] == 1){
					if(map[i + 1][j] == 0 || map[i - 1][j] == 0 || map[i][j + 1] == 0 || map[i][j - 1] == 0){
						cnt++;
					}	
				}
			}
		}
		
		printf("%d\n", cnt + 4);
	}
	
	
	
	return 0;
}
