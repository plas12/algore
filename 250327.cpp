#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;
/*
//1(1167
int V;
vector <pair<int, int> > v[100001];
bool check[100001] = {false};

void dfs(int x, int y){
	check[x] = true;
	
	
	
	return 0;
}
*/

/*
//2(11047
vector <int> v;
*/

/*
//3(1026
vector <int> a;
vector <int> b;

bool cmp(int left, int right){
	return left > right;
}
*/


//6(13305
vector <int> a;
vector <int> b;






int main(){
	/*
	//1(1167
	cin >> V;
	
	for(int i = 1; i <= V; i++){
		int k;
		cin >> k;
		while(1){
			int n, m;
			cin >> n;
			if(n == -1){
				break;
			}
			else{
				cin >> m;
				v[k].push_back({n, m});
			}
		}
	}
	
//	for(int i = 1; i <= V; i++){
//		for(int j = 0; j < v[i].size(); j++){
//			printf("%d %d\n", v[i][j].first, v[i][j].second);
//		}
//		printf("\n");
//	}
	
	for(int i = 1; i <= V; i++){
		dfs(i, 0);
		memset(check, false, sizeof(check));
	}
	*/
	
	/*
	//2(11047
	int N, K, l = 0;
	cin >> N >> K;
	
	for(int i = 0; i < N; i++){
		int n = 0;
		cin >> n;
		v.push_back(n);
	}
	
	for(int i = v.size() - 1; i >= 0; i--){
		if(v[i] <= K){
			l += K / v[i];
			K = K % v[i];
		}
	}
	
	printf("%d\n", l);
	*/
	
	/*
	//3(1026
	int N = 0, l = 0;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int n = 0;
		cin >> n;
		a.push_back(n);
	}
	sort(a.begin(), a.end(), cmp);
	
	for(int i = 0; i < N; i++){
		int n = 0;
		cin >> n;
		b.push_back(n);
	}
	sort(b.begin(), b.end());
	
	for(int i = 0; i < N; i++){
		l += a[i] * b[i];
	}
	printf("%d\n", l);
	*/
	
	/*
	//4(5585
	int n = 0, a = 1000, l = 0;
	int m[6] = {500, 100, 50, 10, 5, 1};
	cin >> n;
	
	a -= n;
	
	for(int i = 0; i < 6; i++){
		if(m[i] <= a){
			l += a / m[i];
			a = a % m[i];
		}
	}
	printf("%d\n", l);
	*/
	
	/*
	//5(1789
	long long S = 0, N = 0, n = 1;
	cin >> S;
	
	while(n < S - n){
		S -= n;
		n++;
	}
	printf("%d\n", n);
	*/
	
	
	//6(13305
	long long N = 0, n = 0, l = 0, s = 10000000000;
	cin >> N;

	for(int i = 0; i < N - 1; i++){
		long long m = 0;
		cin >> m;
		n += m;
		a.push_back(m);
	}
	
	for(int i = 0; i < N; i++){
		long long m = 0;
		cin >> m;
		if(i != N - 1){
			b.push_back(m);
			if(m < s){
				s = m;
			}
		}
	}
	
//	for(int i = 0; i < N; i++){
//		printf("%d %d\n", a[i], b[i]);
//	}
//	printf("%d %d", l, n);

	for(long long i = 0; i < N - 1; i++){
		if(b[i] == s){
			l += b[i] * n;
			break;
		}
		else{
			long long x = i + 1, y = 1;
			while(1){
				if(b[x] < b[i]){
					break;
				}
				else{
					printf("1 %d %d\n", x, y);
					x++;
					y++;
				}
			}
			printf("\n");
			
			long long z = 0;
			for(long long j = i; j < i + y; j++){
				z += a[j];
				printf("2 %d %d\n", z, a[i]);
			}
			l += b[i] * z;
			n -= z;
			i += (y - 1);
			printf("%d %d\n\n\n", l, n);
		}
	}
	printf("%d\n", l);
	
	return 0;
}
