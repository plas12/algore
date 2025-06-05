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

//17608, 14696, 17609, 17610, 14696, 14697, 14864, 17411

/*
//1(17608
int N, M = 0, x = 0;
stack <int> s;
*/

/*
//2(14696
int N;
*/

/*
//3(17609
int N = 0, M = 31;
string str;

void asdf(int point_1, int point_2, int cnt){
	if(1 < cnt){
		M = min(M, cnt);
		return;
	}
	else if(point_2 <= point_1){
//		printf("%d %d\n", M, cnt);
		M = min(M, cnt);
		return;
	}
	else{
		if(str[point_1] != str[point_2]){
			asdf(point_1 + 1, point_2, cnt + 1);
			asdf(point_1, point_2 - 1, cnt + 1);
		}
		else{
			asdf(point_1 + 1, point_2 - 1, cnt);
		}
	}
}
*/


//4(17610
int N, S = 0;
vector <int> v;
vector <int> a;

void asdf(int i){
	if(i == N){
		return;
	}
	else if(a.empty()){
		a.push_back(v[i]);
		asdf(i + 1);
	}
	else{
		vector <int> n;
		
		for(int j = 0; j < a.size(); j++){
			n.push_back(v[i] - a[j]);
			n.push_back(v[i] + a[j]);
			n.push_back(v[i]);
		}
		
		for(int j = 0; j < n.size(); j++){
			a.push_back(n[j]);
		}
		
		asdf(i + 1);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(17608
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int n = 0;
		cin >> n;
		
		s.push(n);
	}
	
	int size = s.size();
	for(int i = 0; i < size; i++){
		if(M == 0){
			M = s.top();
			s.pop();
			
			x++;
		}
		else{
			if(s.top() <= M){
				s.pop();
			}
			else{
				M = s.top();
				s.pop();
				
				x++;
			}
		}
	}
	
	cout << x;
	*/
	
	/*
	//2(14696
	cin >> N;
	
	for(int l = 0; l < N; l++){
		int a, b;
		cin >> a;
		int a1[4] = {0, 0, 0, 0};
		int b1[4] = {0, 0, 0, 0};
		
		for(int i = 0; i < a; i++){
			int n = 0;
			cin >> n;
			
			a1[n - 1]++;
		}
		
		
		cin >> b;
		
		for(int i = 0; i < b; i++){
			int n = 0;
			cin >> n;
			
			b1[n - 1]++;
		}
		
		int d = 0;
		for(int i = 3; i >= 0; i--){
			if(a1[i] > b1[i]){
				printf("A\n");
				break;
			}
			else if(a1[i] < b1[i]){
				printf("B\n");
				break;
			}
			else{
				d++;
			}
		}
		
		if(d == 4){
			printf("D\n");
		}
	}
	*/
	
	/*
	//3(17609
	cin >> N;
	
	for(int l = 0; l < N; l++){
		cin >> str;
		M = 31;
		
		asdf(0, str.size() - 1, 0);
		
//		printf("%d  ", M);
		if(M == 0){
			printf("0\n");
		}
		else if(M == 1){
			printf("1\n");
		}
		else{
			printf("2\n");
		}
	}
	*/
	
	
	//4(17610
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int n = 0;
		cin >> n;
		
		S += n;
		v.push_back(n);
	}
	
	sort(v.begin(), v.end());
	
	asdf(0);
	
	for(int i = 0; i < a.size(); i++){
		printf("%d\n", a[i]);
	}
	
	return 0;
}

