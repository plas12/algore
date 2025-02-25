#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <cmath>
#include <algorithm>

using namespace std;
/*
//1(32141
int d[1000001];
*/


//2(15501



int main(){
	/*
	//1(32141
	int N, H, l = 0, f = 0;
	cin >> N >> H;
	
	for(int i = 0; i < N; i++){
		cin >> d[i];
	}
	
	for(int i = 0; i < N; i++){
		l += d[i];
		f++;
		if(H <= l){
			printf("%d\n", f);
			return 0;
		}
	}
	
	printf("-1\n");
	*/
	
	
	//2(15501
	string str1;
	string str2;
	int l = 0;
	cin >> l;
	
	for(int i = 0; i < l; i++){
		char n = 0;
		cin >> n;
		str1 = str1 + n;
	}	
	
	for(int i = 0; i < l; i++){
		char n = 0;
		cin >> n;
		str2 = str2 + n;
	}
	
	int j = str2.find(str1[0]);
	printf("%d\n", j);
	
	for(int i = 0; i < l; i++){
		printf("%d %d\n", j, i);
		if(j < 0){
			j = l - 1;
			printf("!! ");
		}
		else if(l - 1 < j){
			j = 0;
			printf("@@ ");
		}
		if(str2[j - 1] == str1[i + 1]){
			j--;
		}
		else if(str2[j + 1] == str1[i + 1]){
			j++;
		}
		else{
			printf("bad puzzle\n");
			return 0;
		}
		
	}
	printf("good puzzle\n");
	
	
	
	
	
	
	
	
	
	
	return 0;
}
