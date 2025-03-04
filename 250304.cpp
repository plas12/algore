#include <cstdio>
#include <iostream>
#include <utility>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

//1(15501
int x[1000001];
vector <int> a;
vector <int> b;
int c[1000001];



int main(){
	
	//1(15501
	int l = 0;
	cin >> l;
	
	for(int i = 0; i < l; i++){
		int n = 0;
		cin >> n;
		x[i] = n;
		x[i + l] = n;
	}
	
	for(int i = 0; i < l * 2; i++){
		a.push_back(x[i]);
		b.push_back(x[l * 2 - (i + 1)]);
	}
	
	for(int i = 0; i < l; i++){
		cin >> c[i];
	}
	
	for(int i = 0; i < l; i++){
		int n = 0, m = 0;
		for(int j = 0; j < l; j++){
			if(a[i + j] == c[j]){
				n++;
			}
			if(b[i + j] == c[j]){
				m++;
			}
		}
		if(n == l || m == l){
			printf("good puzzle");
			return 0;
		}
	}
	
	printf("bad puzzle");
	
	return 0;
}
