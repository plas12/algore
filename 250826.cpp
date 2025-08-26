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
//1(11508
int N;
vector <long long> v;

int cmp(int left, int right){
	return left > right;
}
*/


//2(2930
int R;
vector <int> v;
int F;

int r[51];
int s[51];
int p[51];




int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(11508
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int dummy;
		cin >> dummy;
		
		v.push_back(dummy);
	}
	
	sort(v.begin(), v.end(), cmp);
	
	long long answer = 0;
	for(int i = 1; i <= v.size(); i++){
		if(i % 3 != 0){
			answer += v[i - 1];
		}
	}
	
	printf("%d", answer);
	*/
	
	
	//2(2930
	cin >> R;
	for(int i = 0; i < R; i++){
		char n = 0;
		scanf("%c", &n);
		
		if(n == 'R'){
			v.push_back(1);
		}
		if(n == 'S'){
			v.push_back(2);
		}
		if(n == 'P'){
			v.push_back(3);
		}
	}
	
	char dummy;
	scanf("%c", &dummy);
	
	
	cin >> F;
	for(int l = 0; l < F; l++){
		for(int i = 0; i < R; i++){
			char n;
			scanf("%c", &n);
			
			if(n == 'R'){
				r[i]++;
			}
			if(n == 'S'){
				s[i]++;
			}
			if(n == 'P'){
				p[i]++;
			}
		}
		
		if(l != F - 1){
			scanf("%c", &dummy);
		}
	}
	
//	printf("\ns   r s p\n");
//	for(int i = 0; i < R; i++){
//		printf("%d   %d %d %d\n", v[i], r[i], s[i], p[i]);
//	}
	
	int answer1 = 0;
	int answer2 = 0;
	for(int i = 0; i < R; i++){
		int cnt = 0;
		vector <int> dummy;
		
		if(r[i] != 0){
			cnt++;
			dummy.push_back(1);
		}
		if(s[i] != 0){
			cnt++;
			dummy.push_back(2);
		}
		if(p[i] != 0){
			cnt++;
			dummy.push_back(3);
		}
		
		if(cnt == 1){
			if(r[i] != 0){
				if(v[i] == 1){
					answer1 += 1;
				}
				if(v[i] == 2){
					answer1 += 0;
				}
				if(v[i] == 3){
					answer1 += 2;
				}
			}
			if(s[i] != 0){
				if(v[i] == 1){
					answer1 += 1;
				}
				if(v[i] == 2){
					answer1 += 1;
				}
				if(v[i] == 3){
					answer1 += 0;
				}
			}
			if(p[i] != 0){
				if(v[i] == 1){
					answer1 += 0;
				}
				if(v[i] == 2){
					answer1 += 1;
				}
				if(v[i] == 3){
					answer1 += 1;
				}
			}
			
			answer2 += 2;
		}
		else if(cnt == 2){
			int flag = 0;
			for(int j = 0; j < dummy.size(); j++){
				if(dummy[j] == v[i]){
					flag = 1;
				}
				
				if(v[i] == 1){
					if(dummy[j] == 2){
						answer1 += 2;
					}
				}
				if(v[i] == 2){
					if(dummy[j] == 3){
						answer1 += 2;
					}
				}
				if(v[i] == 3){
					if(dummy[j] == 1){
						answer1 += 2;
					}
				}
			}
			
			if(flag == 1){
				
			}
			else{
				answer1 += 1;
			}
		}
	}
	
	
	
	
	return 0;
}
