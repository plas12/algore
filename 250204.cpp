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

//2(1939
bool cmp(int left, int right){
	return left > right;
}

int a[100001];
int dp[100001];

int main(){
	/*
	//1(1373
	string a[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};
	string str;
	int l = 0;
	cin >> str;
	
	for(int i = 0; i < 3; i++){
		if((str.length() + i) % 3 == 0){
			l = i;
			break;
		} 
	}
	
	for(int i = 0; i < l; i++){
		str = "0" + str;
	}
	
	for(int i = 0; i < str.length(); i += 3){
		string n = str.substr(i, 3);
		
		for(int j = 0; j < 8; j++){
			if(n == a[j]){
				printf("%d", j);
				break;
			}
		}
	}
	*/
	
	
	//2(1912
	int l = 0;
	cin >> l;
	
	for(int i = 0; i < l; i++){
		cin >> a[i];
	}
	
	dp[0] = a[0];
	dp[1] = max(a[0] + a[1], a[1]);
	dp[2] = max(dp[1] + a[2], a[2]);  
	
	
	for(int i = 0; i < l; i++){
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
