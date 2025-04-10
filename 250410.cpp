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
//binary_search
int n, m;
int a[5000000];

int binary_search(int num){
	int L = 0;
	int R = n - 1;
	
	while(L <= R){
		int mid = (L + R) / 2;
		
		if(a[mid] == num){
			return 1;
		}
		else if(num < a[mid]){
			R = mid - 1;
		}
		else{
			L = mid + 1;
		}
	}

	return 0;
}
*/

/*
//1(1920
int N, M;
int a[100001];

int binary_search(int num){
	int L = 0;
	int R = N - 1;
	
	while(L <= R){
		int mid = (L + R) / 2;
		
		if(a[mid] == num){
			return 1;
		}
		else if(num < a[mid]){
			R = mid - 1;
		}
		else{
			L = mid + 1;
		}
	}
	
	return 0;
}
*/

/*
//2(10815
int N, M;
int a[500001];

int binary_search(int num){
	int L = 0;
	int R = N - 1;
	
	while(L <= R){
		int mid = (L + R) / 2;
		
		if(a[mid] == num){
			return 1;
		}
		else if(a[mid] < num){
			L = mid + 1;
		}
		else{
			R = mid - 1;
		}
	}
	
	return 0;
}
*/


//3(2512
int N, M;
int a[10001];

int binary_search(int num){
	int L = 0;
	int R = N - 1;
	
	while(L <= R){
		int mid = (L + R) / 2;
		
		if(a[mid] == num){
			return 1;
		}
		else if(num < a[mid]){
			R = mid - 1;
		}
		else{
			L = mid + 1;
		}
	}
}





int main(){
	/*
	//binary_search
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sort(a, a + l);
	
	printf("%d\n", binary_search(m));
	*/
	
	/*
	//1(1920
	cin >> N;	
	
	for(int i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}
	sort(a, a + N);	
	
	cin >> M;
	
	for(int i = 0; i < M; i++){
		int n = 0;
		scanf("%d", &n);
		
		printf("%d\n", binary_search(n));
	}
	*/
	
	/*
	//2(10815
	cin >> N;
	
	for(int i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}
	sort(a, a + N);
	
	cin >> M;
	
	for(int i = 0; i < M; i++){
		int n = 0;
		scanf("%d", &n);
		
		printf("%d ", binary_search(n));
	}
	*/
	
	
	//3(2512
	int x = 0;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int n = 0;
		scanf("%d", &n);
		
		a[i] = n;
		x += n;
	}
	sort(a, a + N);
	
	cin >> M;
	
	if(x <= M){
		printf("%d\n", a[(N - 1)]);
	}
	else{
		
	}
	
	
	return 0;
}
