#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;

//1(2467
int N = 0, num = 1000000001;
pair <int, int> p;
vector <int> v;
vector <int> a; 

int main(){
	
	//1(2467
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		v.push_back(n);
		a.push_back(n);  
	}
	
	for(int k = 0; k < N; k++){
		if(v[k] < 0){
			a.push_back(v[k] * -1);
			sort(a.begin(), a.end());
			
			int l = 0;
			int L = 0;
			int R = N;
		
			while(L <= R){
				int mid = (L + R) / 2;
				
				if(a[mid] == v[k] * 1){
					l = mid;
					break;
				}
				else if(num < a[mid]){
					R = mid - 1;
				}
				else{
					L = mid + 1;
				}
			}
			
			if(abs(v[k] + a[l + 1]) < num){
				num = abs(v[k] + a[l + 1]);
				p.first = v[k];
				p.second = a[l + 1];
			}
			if(abs(v[k] + a[l - 1]) < num){
				num = abs(v[k] + a[l - 1]);
				p.first = a[l - 1];
				p.second = v[k];
			}
			
			a.erase(a.begin() + l);
		}
		
		else if(v[k] == 0){
			if(v[k + 1] < num){
				num = v[k + 1];
				p.first = v[k];
				p.second = v[k + 1];
			}
			if(v[k - 1] * -1 < num){
				num = v[k - 1] * -1;
				p.first = v[k - 1];
				p.second = v[k];
			}
		}
		
		else if(0 < v[k]){
			a.push_back(v[k] * -1);
			sort(a.begin(), a.end());
			
			int l = 0;
			int L = 0;
			int R = N;
		
			while(L <= R){
				int mid = (L + R) / 2;
				
				if(a[mid] == v[k] * 1){
					l = mid;
					break;
				}
				else if(num < a[mid]){
					R = mid - 1;
				}
				else{
					L = mid + 1;
				}
			}
			
			if(abs(v[k] + a[l + 1]) < num){
				num = abs(v[k] + a[l + 1]);
				p.first = a[l + 1];
				p.second = v[k];
			}
			if(abs(v[k] + a[l - 1]) < num){
				num = abs(v[k] + a[l - 1]);
				p.first = a[l - 1];
				p.second = v[k];
			}
			
			a.erase(a.begin() + l);
		}
	}
	
	printf("%d %d\n", p.first, p.second);
	
	return 0;
}
