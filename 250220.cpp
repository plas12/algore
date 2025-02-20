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
/*
//2(1915
int arr[1001][1001];
int n, m;
int result;
*/

int main(){
	/*
	//1(15927
	string str;
	cin >> str;
	
	string n = str;
	reverse(n.begin(), n.end());
	
	if(str == n){
		char a = str[0];
		for(int i = 0; str[i]; i++){
			if(a != str[i]){
				printf("%d\n", str.length() - 1);
				return 0;
			}
		}
		printf("-1\n");
	}
	else{
		printf("%d\n", str.length());
	}
	*/
	
	/*
	//2(1915
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%1d", &arr[i][j]);
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(arr[i][j] == 1 && i > 0 && j > 0){
				arr[i][j] = min(arr[i - 1][j - 1], min(arr[i - 1][j], arr[i][j - 1])) + 1;
			}
			if(result < arr[i][j]){
				result = arr[i][j];
			} 
		}
	}
	
	printf("%d\n", result * result);
	*/
	
	
	
	
	
	
	
	return 0;
}
