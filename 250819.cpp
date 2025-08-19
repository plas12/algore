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

/*
//4714
int N;
vector <int> v;
int a[100001];
long long result = 0;
*/


int N;
vector <int> v;
long long result = 0;

int asdf(int l, int n, int m){
	long long dummy = 0;
	
	m += n;
	
	for(int i = l; i < N; i++){
		if(v[i] == m){
			printf(" %d", v[i]);
			dummy++;
			m += n;
		}
	}
	
	return dummy;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//4714
	cin >> N;
	
	for(long long i = 0; i < N; i++){
		int dummy = 0;
		cin >> dummy;
		
		a[i] = 0;
		
		v.push_back(dummy);
	}
	
	for(int i = N; i >= 1; i--){
		if(N < v[i - 1]){
			result += i;
		}
		else{
			if(a[v[i - 1]] == 1){
				result += i;
			}
			else{
				a[v[i - 1]] = 1;
			}
		}
	}
	
	printf("%lld", result);
	*/
	
	
	//4715
	cin >> N;
	for(int i = 0; i < N; i++){
		int dummy = 0;
		cin >> dummy;
		
		v.push_back(dummy);
	}
	
	for(int i = 0; i < N - 1; i++){
		for(int j = i + 1; j < N; j++){
			printf("%d %d", v[i], v[j]);
			result += asdf(j + 1, v[j] - v[i], v[j]) + 1;		
			printf("\n");	

			if(1000000007 <= result){
				result -= 1000000007;
			}
		}
	}
	
	printf("%lld", result);
	
	
	return 0;
}
