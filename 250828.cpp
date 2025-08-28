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

/*
//1(2631   1
int N;
vector <int> v;
int d[201];
int M = -1;
*/

/*
//2(2631   2
int N;
vector <int> v;
*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*z
	//1(2631
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int dummy = 0;
		cin >> dummy;
		
		v.push_back(dummy);
	}
	
	for(int i = 0; i < N; i++){
		d[i] = 1;
		
		for(int j = 0; j < i; j++){
			if(v[j] < v[i] && d[i] < d[j] + 1){
				d[i] = d[j] + 1;
			}
		}
		
		if(M < d[i]){
			M = d[i];
		}
	}
	
	printf("%d", M);
	*/
	
	/*
	//2(2631   2
	cin >> N;
	
	v.push_back(0);
	
	for(int i = 0; i < N; i++){
		int dummy;
		cin >> dummy;
		
		if(v.back() < dummy){
			v.push_back(dummy);
		}
		else{
			int index = lower_bound(v.begin(), v.end(), dummy) - v.begin();
			v[index] = dummy;
		}
	}
	
//	for(int i = 0; i < v.size(); i++){
//		printf("%d ", v[i]);
//	}
	printf("%d", v.size() - 1);
	*/
	
	
	//3(7570
	int n, x, result = 0;
	scanf("%d", &n);
	
	v.assign(n + 1, 0);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		v[x] = v[x - 1] + 1;
		result = max(result, v[x]);
	}
	
	printf("%d", result);
	
	return 0;
}
