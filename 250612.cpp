#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

using namespace std;


//1(32171
pair <int, int> Ma = {0, 0};
pair <int, int> Mb = {0, 0};
int N = 0;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
   //1(32171
   cin >> N;
   
   for(int i = 0; i < N; i++){
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if(i == 0){
			Ma.first = a;
			Ma.second = b;
			Mb.first = c;
			Mb.second = d;
			
			printf("%d\n", (Mb.first - Ma.first) * (Mb.second - Ma.second));
		}
		else{
			Ma.first = min(Ma.first, a);
			Ma.second = min(Ma.second, b);
			Mb.first = max(Mb.first, c);
			Mb.second = max(Mb.second, d);
			
			printf("%d\n", (Mb.first - Ma.first) * (Mb.second - Ma.second));
		}
   }
   
   
    return 0;
}
