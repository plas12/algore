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
//1(gcd, lcm
int gcd(int a, int b){
	if(b == 0){
		return a;
	}
	else{
		//printf("%d %d\n", b, a % b);
		return gcd(b, a%b);
	}
}

int lcm(int a, int b){
	int A = a;
	int B = b;
	int g = gcd(a, b);
	
	return a * b / g;
	
}
*/

/*
//2(prime
bool prime(int n){
	if(n < 2){
		return false;
	}
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true
}




*/

int main(){
	/*
	//1(gcd, lcm
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("gcd = %d, lcm = %d", gcd(a, b), lcm(a, b));
	*/
	
	/*
	//2(prime
	int a;
	scanf("%d", &a);
	
	printf("%d", prime(a));
	*/
	
	/*
	//3(1212
	string b[8] = {"0", "1", "10", "11", "100", "101", "110", "111"};
	string a[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};
	string str;
	cin >> str;
	
	for(int i = 0; str[i]; i++){
		if(i == 0){
			cout << b[str[i] - '0'];
		}
		else{
			cout << a[str[i] - '0'];
		}
	}
	*/
	
	
	//1373
	char a[8] = 
	string str;
	cin >> str;
	
	
	
	
	return 0;
	
}
