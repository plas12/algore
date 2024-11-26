#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
#include <stack>
#include <queue> 
#include <cmath>

using namespace std;





int main(){
	/*
	//순서대로 int형정렬 코드
	int a = 0;
	vector <int> v;
	cin >> a;
	
	for(int i = 0; i < a; i++){
		int n = 0;
		cin >> n;
		v.push_back(n);
	}
	
	int i = 1, x = 0, y = 0;
	
	while(1){
		if(i == v.size()){
			for(int f = 0; f < v.size(); f++){
				printf("%d ", v[f]);
			}
			break;
		}
		
		x = v[i - 1];
		y = v[i];
		

		if(x > y){
			int n = x;
			for(int j = i; j < v.size(); j++){
				v[j - 1] = v[j];
			}
			v[v.size() - 1] = x;
			i = 1;
		}
		else{
			i++;
		}
		
	}
	*/
	
	
	//2108
	int a = 0, b = -100000000, s = 10000000;
	double p = 0;
	vector <int> v;
	cin >> a;
	
	for(int i = 0; i < a; i++){
		int n = 0;
		cin >> n;
		v.push_back(n);
		if(b < n){
			b = n;
		}
		if(n < s){
			s = n;
		}
		p += n;
	}
	
	p = p / a;
	
	if(p == 0){
		printf("0\n");
	}
	else if(p > 0){
		printf("%.0lf\n",floor(p + 0.5));
	}
	else{
		cout << floor(p + 0.5);
	}
	
	
	
	int i = 1, x = 0, y = 0;
	
	while(1){
		if(i == v.size()){
			printf("%d\n", v[v.size() / 2]);
			break;
		}
		
		x = v[i - 1];
		y = v[i];
		

		if(x > y){
			int n = x;
			for(int j = i; j < v.size(); j++){
				v[j - 1] = v[j];
			}
			v[v.size() - 1] = x;
			i = 1;
		}
		else{
			i++;
		}
		
	}
	
	
	
	
	
	
	
	return 0;
}

