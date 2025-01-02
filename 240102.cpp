#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
#include <stack>
#include <queue> 
#include <cmath>
#include <algorithm>

using namespace std;

/*
//1(25918
stack <char> s;
*/

/*
//2(2493
stack <pair <int, int>> s;
*/

/*
//5(1003
int zero = 0;
int one = 0;
int fibonacci(int n) {
    if (n == 0) {
        zero++;
        return 0;
    } else if (n == 1) {
        one++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
*/





int main(){
	/*
	//1(25918
	int n, result = 0;
	string str;
	
	scanf("%d", &n);
	cin >> str;
	
	for(int i = 0; i < n; i++){
		if(str[i] == '(' && !s.empty() && s.top() == ')'){
			s.pop();
		}
		else if(str[i] == '('){
			s.push(str[i]);
		}
		else if(str[i] == ')' && !s.empty() &&s.top() == '('){
			s.pop();
		}
		else if(str[i] == ')'){
			s.push(str[i]);
		}
		result = max( result, int(s.size()) );
	}
	
	if(s.empty()){
		printf("%d", result);
	}
	else{
		printf("-1");
	}
	*/
	
	/*
	//2(2493
	int n, x;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		
		while(!s.empty()){
			if(x < s.top().second){
				printf("%d ", s.top().first);
				break;
			}
			s.pop();
		}
		
		if(s.empty()){
			printf("0 ");
		}
		s.push(make_pair(i + 1, x));
	}
	*/
	
	/*
	//3(2839
	int n;
	int a[5001];
	
	cin >> n;
	
	for(int i = 0; i <= n; i++){
		a[i] = 10000000;
	}
	
	a[3] = 1;
	a[5] = 1;
	
	for(int i = 6; i <= n; i++){
		a[i] = min(a[i - 3], a[i - 5]) + 1;
	}
	
	if(a[n] >= 10000000){
		cout << "-1";
	}
	else {
		cout << a[n];
	}
	*/
	
	/*
	//4(11726
	int a[1000];
	int l = 0;
	cin >> l;
	
	a[1] = 1;
	a[2] = 2;
	
	for(int i = 3; i <= 1000; i++){
		a[i] = (a[i - 2] + a[i - 1]) % 10007;
	}
	printf("%d", a[l]);
	*/
	
	/*
	//5(1003
	int l = 0;
	cin >> l;
	
	int a[82];
	
	a[0] = 1;
	a[1] = 0;
	a[2] = 0;
	a[3] = 1;
	a[4] = 1;
	a[5] = 1;
	
	for(int i = 6; i <= 82; i += 2){
		a[i] = a[i - 1];
		a[i + 1] = a[i - 2] + a[i - 1];
	}
	
	for(int i = 0; i < l; i++){
		int n = 0;
		cin >> n;
		printf("%d %d\n", a[n * 2], a[n * 2 + 1]);
	}
	*/
	
	
	
	
	
	
	
	
	
	
	return 0;	
}
