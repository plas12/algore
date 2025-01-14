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






int main(){
	
	//1(1912
	short l = 0; 
	long long n = -5000;
	vector <short> a;
//	vector <long long> v;
	cin >> l;
	
	for(int i = 1; i <= l; i++){
		short w;
		cin >> w;
		a.push_back(w); 
	}
	for(int i = 0; i < l; i++){
		long long x = 0;	

		for(int j = i; j < l; j++){
			x += a[j];	
			n = max(n, x);
			printf("%d\n", x);
			//printf("%d\n", x);
		}
//		for(int i = 0; i < v.size(); i++){
//			n = max(n, v[i]);
//		}
//		v.clear();
		printf("\n");
	}
	
	printf("%lld", n);	
	
	
	
	
	return 0;
}
