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
//1(7570
int n, x, result = 0;
vector <int> v;
*/


//3(2532

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(7570
	cin >> n;
	
	v.assign(n + 1, 0);
	
	for(int i = 0; i < n; i++){
		cin >> x;
		v[x] = v[x - 1] + 1;
		result = max(result, v[x]);
	}
	
	printf("%d", n - result);
	*/
	
	/*
	//2(3745
	int N;
	
	while(cin >> N){
		vector <int> v;
		
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
		
		printf("%d\n", v.size() - 1);
	}
	*/
	
	
	//3(2532
	
	return 0;
}
