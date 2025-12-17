#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

//1629, 13171, 32981, 15919


/*
//#1
long long power(long long base, long long exp){
	if(exp == 0){
		return 1;
	}
	
	long long half = power(base, exp / 2);
	long long result = half * half;
	
	if(exp % 2){
		result = result * base;
	}
	
	return result;
}

//#2
long long power(long long base, long long exp){
	long long result = 1;
	
	while(exp > 0){
		if(exp % 2){
			result = result * base;
		}
		
		base = base * base;
		exp = exp >> 1;
	}
	
	return result;
}
*/

/*
//1(1629
long long A, B, C;

long long power(long long base, long long exp, long long mod){
	if(exp == 0){
		return 1;
	}
	
	long long half = power(base, exp / 2, mod);
	long long result = half * half % mod;
	
	if(exp % 2){
		result = result * base % mod;
	}
	
	return result % mod;
}
*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(1629
	cin >> A >> B >> C;
	
	printf("%lld", power(A, B, C));
	*/
	
	
	
	return 0;
}
