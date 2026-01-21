#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

//14427, 14428, 14438, 10868, 2357

/*
//1(2042
long long N, M, K;

long long arr[4000001];
long long tree[4000001];

long long init(long long start, long long end, long long node){
	if(start == end){
		return tree[node] = arr[start];
	}
	
	long long mid = (start + end) / 2;
	
	return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

long long query(long long start, long long end, long long node, long long left, long long right){
	if(left > end || right < start){
		return 0;
	}
	
	if(left <= start && end <= right){
		return tree[node];
	}
	
	long long mid = (start + end) / 2;
	
	return query(start, mid, node * 2, left, right) + query(mid + 1, end, node * 2 + 1, left, right);
}

void update(long long start, long long end, long long node, long long index, long long num){
	if(index < start || index > end){
		return;
	}
	
	tree[node] += num;
	
	if(start == end){
		return;
	}
	
	long long mid = (start + end) / 2;
	
	update(start, mid, node * 2, index, num);
	update(mid + 1, end, node * 2 + 1, index, num);
}
*/

/*
//2(2268
long long N, M;

long long arr[1000001];
long long tree[4000001];

long long init(long long start, long long end, long long node){
	if(start == end){
		return tree[node] = arr[start];
	}
	
	long long mid = (start + end) / 2;
	
	return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

long long query(long long start, long long end, long long node, long long left, long long right){
	if(left > end || right < start){
		return 0;
	}
	
	if(left <= start && end <= right){
		return tree[node];
	}
	
	long long mid = (start + end) / 2;
	
	return query(start, mid, node * 2, left, right) + query(mid + 1, end, node * 2 + 1, left, right);
}

void update(long long start, long long end, long long node, long long index, long long num){
	if(index < start || index > end){
		return;
	}
	
	tree[node] += num;
	
	if(start == end){
		return;
	}
	
	long long mid = (start + end) / 2;
	
	update(start, mid, node * 2, index, num);
	update(mid + 1, end, node * 2 + 1, index, num);
}
*/


//3(11505
long long tree[1000001*4];
long long arr[1000001];

int n, m, k;

long long init(int start, int end, int node) {
   if (start == end) 
      return tree[node] = arr[start];
      
   int mid = (start+end) / 2;
   return tree[node] = (init(start, mid, node * 2) * init(mid + 1, end, node * 2 + 1)) % 1000000007;
}

long long query(int start, int end, int node, int left, int right) {
   if (left > end || right < start) 
      return 1;
      
   if (left <= start && end <= right) 
      return tree[node];
      

   int mid = (start+end) / 2;
   
   return (query(start, mid, node*2, left, right) * query(mid+1, end, node*2+1, left, right)) % 1000000007;
}

long long update(int start, int end, int node, int index, long long num) {
   if (index < start || index > end) 
      return tree[node];
 
   if (start == end) 
      return tree[node]=num;
         
   int mid = (start+end) / 2;
   
   return tree[node] = update(start, mid, node*2, index, num) * update(mid+1, end, node*2+1, index, num) % 1000000007; 
}






int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(2042
	cin >> N >> M >> K;
	
	for(int i = 0; i < N; i++){
		long long dummy = 0;
		cin >> dummy;
		
		arr[i] = dummy;
	}
	init(0, N - 1, 1);
	
	for(int i = 0; i < M + K; i++){
		long long a, b, c;
		cin >> a >> b >> c;
		
		if(a == 1){
			update(0, N - 1, 1, b - 1, c - arr[b - 1]);
			arr[b - 1] = c;
		}
		else if(a == 2){
			printf("%lld\n", query(0, N - 1, 1, b - 1, c - 1));
		}
	}
	*/
	
	/*
	//2(2268
	cin >> N >> M;
	for(int i = 0; i < N; i++){
		arr[i] = 0;
	}
	init(0, N - 1, 1);
	
	for(int i = 0; i < M; i++){
		long long a, b, c;
		cin >> a >> b >> c;
		
		if(a == 0){
			if(c < b){
				long long t = b;
				b = c;
				c = t;
			}
			printf("%lld\n", query(0, N - 1, 1, b - 1, c - 1));
		}
		else if(a == 1){
			update(0, N - 1, 1, b - 1, c - arr[b - 1]);
			arr[b - 1] = c;
		}
	}
	*/
	
	
	//3(11505
	scanf("%d %d %d", &n, &m, &k);
   
   for(int i=0; i<n; i++) 
      scanf("%lld", &arr[i]);
   
   init(0, n-1, 1);
   
   for(int i=0; i<m+k; i++) {
      long long a, b, c;
      scanf("%lld %lld %lld", &a, &b, &c);
      if(a==1) {
         update(0, n-1, 1, b-1, c);
         arr[b-1] = c;
      }
      
      else 
         printf("%lld\n", query(0, n-1, 1, b-1, c-1));
   }

	
	
	
	
	
	
	
	return 0;
}
