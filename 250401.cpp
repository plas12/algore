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
//1(11305
int a[100001];
int b[100001];
*/

/*
//2(1049
vector <int> s;
vector <int> o;
*/


//3(14864
vector <int> v[100001];
vector <int> s[100001];





int main(){
	/*
	//1(11305
	int N, s = 1000000001, w = 0;
	long long l = 0;
	
	cin >> N;
	
	for(int i = 0; i < N - 1; i++){
		int n = 0;
		cin >> n;
		w += n;
		
		a[i] = n;
	}
//	printf("1\n");
	
	for(int i = 0; i < N; i++){
		int n = 0;
		cin >> n;
		if(i != N - 1){
			s = min(s, n);
		}
		
		b[i] = n;
	}
//	printf("2\n");
	
//	printf("%d %d %d\n\n", w, l, s);
//	
//	for(int i = 0; i < N - 1; i++){
//		if(b[i] == s){
//			l += w * b[i];
//			printf("1\n");
//			break;
//		}
//		else{
//			long long n = 0, j = i;
//			while(1){
//				printf("%d %d : %d %d\n", i, j, b[i], b[j]);
//				if(b[i] < b[j]){
//					break;
//				}
//				else{
//					n += a[i];
//					i++;
//					printf("2\n");
//				}
//			}
//			
//			l += n * b[j];
//			w -= n;
//		}
//	}
	
	
	int i = 0;
	while(1){
		if(N - 1<= i){
			break;
		}
		else{
			if(b[i] == s){
				l += w * b[i];
				break;
			}
			else{
				long long n = 0, j = i;
				while(1){
					if(b[i] < b[j]){
						break;
					}
					else{
						w -= a[i];
						l += b[j] * a[i];
						i++;
					}
				}
			}
		}
	}
	
	
	printf("%d\n", l);
	*/
	
	/*
	//2(1049
	int N, M, l1 = 0, l2 = 0;
	cin >> N >> M;
	
	for(int i = 0; i < M; i++){
		int n, m;
		cin >> n >> m;
		
		s.push_back(n);
		s.push_back(m * 6);
		
		o.push_back(m);  
	}
	
	sort(s.begin(), s.end());
	sort(o.begin(), o.end());
	
	int ss = s[0], so = o[0];
//	printf("%d %d\n", ss, so);
	
	l1 += (N / 6) * ss;
	l1 += (N % 6) * so;
	
	l2 += (N / 6 + 1) * ss;
	
//	printf("%d %d\n", l1, l2);
	
	if(l2 <= l1){
		printf("%d\n", l2);
	}
	else{
		printf("%d\n", l1);
	}	
	*/
	
	
	//3(14864
	int N, M;
	cin >> N >> M;
	
	for(int i = 0; i < M; i++){
		int n, m;
		cin >> n >> m;
		
		v[i].push_back(n);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}



