#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
#include <stack>
#include <queue> 

using namespace std;





int main(){
	
	//정렬코드
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
	
	
	
	return 0;
}

