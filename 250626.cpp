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

//11659, 1806, 2559, 11441, 17425, 21758, 14925

/*
//3(17611******************************************************
vector <pair <int, int> > p;
int lx[1000001];
int ly[1000001];

int N;
*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(1002
	int n, sum, diff, result;
	int x1, y1, r1,x2, y2, r2;
	
	double dist;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		sum = r1 + r2;
		diff = abs(r1 - r2);
		dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
		
		if(dist == 0 && r1 == r2){
			result = -1;
		}
		else if(dist == sum || dist == diff){
			result = 1;
		}
		else if(diff < dist && dist < sum){
			result = 2;
		}
		else{
			result = 0;
		}
		
		printf("%d\n", result);
	}
	*/
	
	/*
	//2(1485
	int N, result;
	
	cin >> N;
	
	while(N--){
		vector <pair <int, int> > v;
		vector <int> l;
		
		for(int i = 0; i < 4; i++){
			int n, m;
			cin >> n >> m;
			
			v.push_back(make_pair(n, m));
		}
		
		for(int i = 0; i < 4; i++){
			for(int j = i + 1; j < 4; j++){
				int length = pow((v[j].first - v[i].first), 2) + pow((v[j].second - v[i].second), 2);
				l.push_back(length);
			}
		}
		
		sort(l.begin(), l.end());
		
		if(l[0] == l[1] && l[1] == l[2] && l[2] ==l[3] && l[4] == l[5]){
			printf("1\n");
		}
		else{
			printf("0\n");
		}
	}
	*/
	
	/*
	//3(17611**********************************************************
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int n, m;
		cin >> n >> m;
		
		n += 500000;
		m += 500000;
		
		p.push_back(make_pair(n, m));
	}
	printf("\n\n");
	
	for(int i = 0; i < N; i++){
		printf("%d %d\n", p[i].first, p[i].second);
	}
	printf("\n\n");
	
	for(int i = 0; i < N; i++){
		int j = i % N + 1;
		
		if(p[i].first == p[j].first){
			int y1 = p[i].second;
			int y2 = p[j].second;
			
			ly[min(y1, y2)]++;
			ly[max(y1, y2)]--;
		}
		else{
			int x1 = p[i].first;
			int x2 = p[j].first;
			
			lx[min(x1, x2)]++;
			lx[max(x1, x2)]--;
		}
	}
//	printf("\n\n");
//	
//	for(int i = 0; i < N; i++){
//		printf("lx : %d   ly : %d\n", lx[i], ly[i]);
//	}
	
	int ans;
	for(int i = 1; i <= 1000001; i++){
		lx[i] += lx[i - 1];
		ly[i] += ly[i - 1];
		
		ans = max(ans, max(lx[i], ly[i]));
	}
	
	printf("%d\n", ans);
	*/
	
	/*
	//4(11659
	int N, M;
	int dp[100001] = {0};
	
	cin >> N >> M;
	
	for(int i = 1; i <= N; i++){
		int n = 0;
		cin >> n;
		
		dp[i] = n + dp[i - 1];
	}
//	printf("\n\n");
	
//	for(int i = 1; i <= N; i++){
//		printf("%d\n", dp[i]);
//	}
//	printf("\n");
	
	for(int i = 0; i < M; i++){
		int n, m;
		cin >> n >> m;
		
		printf("%d\n", dp[m] - dp[n - 1]);
	}
	*/
	
	
	//5(2559
	int N, K;
	cin >> N >> K;
	
	for(int i = 0; i < N; i++){
		
	}
	
	return 0;
}
