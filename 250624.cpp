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
//1(32171
int N;
*/

/*
//2(2477
int N;
pair <int, int> p[12];
int news[4] = {0, 0, 0, 0};
int bw = 0, bl = 0, sw = 0, sl = 0;
int a = 0, b = 0, c = 0, d = 0;
*/

/*
//3(14697
int a, b, c, n;
bool check(int a, int b, int c, int n){
	for(int i = 0; i <= n / a; i++){
		for(int j = 0; j <= n / b; j++){
			for(int k = 0; k <= n / c; k++){
				if((i * a) + (j * b) + (k * c) == n){
					return true;
				}
			}
		}
	}
	
	return false;
}
*/

/*
//4(17610
int N;
int check[2600001];
int a[14];
int sum = 0, cnt = 0;

void dfs(int x, int s){
	if(x == N){
		if(1 <= s){
			check[s] = 1;
		}
	}	
	else{
		dfs(x + 1, s);
		dfs(x + 1, s + a[x]);
		dfs(x + 1, s - a[x]);
	}
}
*/

/*
//5(32754
int N, R, cnt = 0;
*/



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(32171
	cin >> N;
	
	int a = 11, b = 11, c = -11, d = -11;
	
	for(int i = 0; i < N; i++){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		
		a = min(a, x1);
		b = min(b, y1);
		c = max(c, x2);
		d = max(d, y2);
		
		printf("%d\n", 2 * (c - a) + 2 * (d - b)); 
	}
	*/
	
	/*
	//2(2477
	cin >> N;
	
	for(int i = 0; i < 6; i++){
		int n, l;
		cin >> n >> l;
		
		p[i].first = n;
		p[i].second = l;
		p[i + 6].first = n;
		p[i + 6].second = l;
		
		news[n - 1]++;
		
		if(n == 1 || n == 2){
			if(bw < l){
				bw = l;
				a = n;
			}
		}
		else{
			if(bl < l){
				bl = l;
				b = n;
			}
		}
	}
//	printf("\n\n");
	
//	for(int i = 0; i < 12; i++){
//		printf("%d %d\n", p[i].first, p[i].second);
//	}
//	printf("\n\n");
	
	int tri = 0;
	for(int i = 0; i < 12; i++){
		if(news[p[i].first - 1] == 1){
			tri = 1;
		}
		else if(tri == 1){
			sw = p[i + 1].second;
			sl = p[i + 2].second;		
			c = p[i + 1].first;
			d = p[i + 2].first;
			break;
		}
	}
	
//	int tri = 0;
//	for(int i = 0; i < 12; i++){
//		if(news[p[i].first - 1] == 1){
//			if(bw == 0){
//				bw = p[i].second;
//				a = p[i].first;
//			}
//			else if(bl == 0){
//				bl = p[i].second;
//				b = p[i].first;
//			}
//			tri = 1;
//		}
//		else{
//			if(tri == 1){
//				sw = p[i + 1].second;
//				sl = p[i + 2].second;
//				
//				c = p[i + 1].first;
//				d = p[i + 2].first;
//				break;
//			}
//		}
//	}
	
	//printf("%d %d   %d %d      %d %d   %d %d\n", a, bw, b, bl, c, sw, d, sl);
	
	printf("%d\n", (bw * bl - sw * sl) * N);
	*/
	
	/*
	//3(14697
	cin >> a >> b >> c >> n;
	
	printf("%d", check(a, b, c, n));
	*/
	
	/*
	//4(17610
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int n = 0;
		cin >> n;
	
		a[i] = n;
		sum += n;
	}
	
	dfs(0, 0);
	
	for(int i = 1; i <= sum; i++){
		if(check[i] == 0){
			cnt++;
		}
	}
	printf("%d", cnt);
	*/
	
	/*
	//5(32754
	cin >> N >> R;
	
	for(int i = 0; i < N; i++){
		double x1, y1, x2, y2, x3, y3, x4, y4;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		
		double xa = min(x1, min(x2, min(x3, x4))), ya = min(y1, min(y2, min(y3, y4)));
		double xb = max(x1, max(x2, max(x3, x4))), yb = max(y1, max(y2, max(y3, y4)));
		
		double x = (xb + xa) / 2;
		double y = (yb + ya) / 2;
		
		double r1 = sqrt(pow(abs(x), 2) + pow(abs(y), 2));
		
		double a = sqrt(pow(abs(x - x1), 2) + pow(abs(y - y1), 2)), b = sqrt(pow(abs(x - x2), 2) + pow(abs(y - y2), 2));
		double c = sqrt(pow(abs(x - x3), 2) + pow(abs(y - y3), 2)), d = sqrt(pow(abs(x - x4), 2) + pow(abs(y - y4), 2));
		
		double r2 = max(a, max(b, max(c, d)));
		
		if(r1 - r2 <= R){
			cnt++;
		}
	}
	
	printf("%d", cnt);
	*/
	
	
	//6(
	
	return 0;
}
