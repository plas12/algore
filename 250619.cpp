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
//1(17610
int N;
int check[200001];
int a[14];
int sum = 0, cnt = 0;

void dfs(int x, int s){
	if(x == n){
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
//2(14697
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
//3(14864
int a[100001];
bool check[100001];
*/


//4(2477
int N;
pair <int, int> a[8];
int b[4] = {0, 0, 0, 0};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(17610
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int n = 0;
		cin >> n;
		
		a[i] = n;
	}
	
	dfs(0, 0);
	
	for(int i = 0; i < N; i++){
		
	}
	*/
	
	/*
	//2(14697
	cin >> a >> b >> c >> n;
	
	printf("%d", check(a, b, c, n));
	*/
	
	/*
	//3(14864
	int n, m;
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
	
	for(int i = 1; i <= m; i++){
		int A, B;
		cin >> A >> B;
		
		a[A]++;
		a[B]--;
	}
	
	for(int i = 1; i <= n; i++){
		if(check[a[i]]){
			printf("-1");
			
			return 0;
		}
		
		check[a[i]] = true;
	}
	
	for(int i = 1; i <= n; i++){
		printf("%d ", a[i]);
	}
	*/
	
	
	//4(2477
	cin >> N;
	
	for(int i = 0; i < 6; i++){
		int n, m;
		cin >> n >> m;
		
		a[i].first = n;
		a[i].second = m;
		
		b[n - 1]++;
	}
	a[6].first = a[0].first;
	a[6].second = a[0].second;
	a[7].first = a[1].first;
	a[7].second = a[1].second;
//	printf("\n");
	
	for(int i = 0; i < 6; i++){
		printf("%d %d\n", a[i].first, a[i].second);
	}
//	printf("\n");
	
	
//	for(int i = 0; i < 4; i++){
//		printf("%d %d\n", i + 1, b[i]);
//	}
//	printf("\n");
	
	int x1, y1;
	int tri1 = 0, tri2 = 0;
	for(int i = 0; i < 6; i++){
		if(b[a[i].first - 1] == 1){
//			printf("%d", a[i].first);
			
			if(x1 == 0){
				x1 = a[i].second;
//				printf(" : %d   x1\n", x1);
			}
			else{
				y1 = a[i].second;
//				printf(" : %d   y1\n", y1);
			}
		}
		else{
			if(tri1 == 0){
				tri1 = a[i].first;
			}
			else{
				tri2 = a[i].first;
			}
		}
	}
//	printf("%d %d\n\n", tri1, tri2);
	
//	for(int i = 0; i < 8; i++){
//		printf("%d %d\n", a[i].first, a[i].second);
//	}
//	printf("\n");
	
	int cnt = 0;
	int x2 = 0, y2 = 0;
	for(int i = 0; i < 8; i++){
		if(a[i].first == tri1 || a[i].first == tri2){
			if(cnt == 1){
//				printf("%d %d\n", a[i].first, a[i].second);
				
				x2 = a[i].second;
				y2 = a[i + 1].second;
				break;
			}
			
			cnt = 1;
		}
	}
//	printf("%d %d\n\n", x2, y2);
	
	printf("%d\n", (x1 * y1 - x2 * y2) * N);
	
//	int x1, y1;
//	for(int i = 0; i < 6; i++){
//		if(b[a[i].first - 1] == 1){
//			if(x1 == 0){
//				x1 = a[i].second;
//			}
//			else{
//				y1 = a[i].second;
//			}
//		}
//	}
//	
//	printf("%d %d", x1, y1);
	
	/*
	//5(15973
	int ax1, ay1, ax2, ay2;
	int bx1, by1, bx2, by2;
	
	cin >> ax1 >> ay1 >> ax2 >> ay2;
	cin >> bx1 >> by1 >> bx2 >> by2;
	
	if(ax1 > bx2 || bx1 > ax2 || ay1 > by2 || by1 > ay2){
		printf("NULL\n");
	}
	else if((ax1 == bx2 || ax2 == bx1) && (ay1 == by2 || ay2 == by1)){
		printf("POINT\n");
	}
	else if((ax1 == bx2 || ax2 == bx1) || (ay1 == by2 || ay2 == by1)){
		printf("LINE\n");
	}
	else{
		printf("FACE");
	}
	*/
	
	
	return 0;
}
