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
//1(4307
int loc_s[1000001];
int loc_b[1000001];

bool cmp(int left, int right){
	return left > right;
}
*/





int main(){
	/*
	//1(4307
	int number = 0;
	cin >> number;
	
	for(int re = 0; re < number; re++){
		int length, noa;
		cin >> length >> noa;
		
		for(int i = 0; i < noa; i++){
			int n = 0;
			cin >> n;
			if(n <= length / 2){
				loc_s[i] = n;
				loc_b[i] = length - n;
			}
			else{
				loc_s[i] = length - n;
				loc_b[i] = n;
			}
		}
		
		sort(loc_s, loc_s + noa, cmp);
		sort(loc_b, loc_b + noa, cmp);
		
		printf("%d %d\n", loc_s[0], loc_b[0]);
		
	}
	*/
	
	
	//2(10158
	int w, h, p, q, t;
	int pt, qt;
	cin >> w >> h >> p >> q >> t;
	
	pt = (p + t) % (w * 2);
	qt = (q + t) % (h * 2);
	
	if(w < pt){
		pt = w * 2 - pt;
	}
	
	if(h < qt){
		qt = h * 2 - qt;
	}
	
	cout << pt << " " << qt;
	
	return 0;
}
