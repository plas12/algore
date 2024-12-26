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
//2(2693 && 6(10610
bool cmp(int left, int right){
	return left > right;
}
*/

int main(){
	/*
	//1(2217
	int l = 0;
	
	cin >> l;
	
	vector <int> v;
	
	for(int i = 0; i < l; i++){
		int a = 0;
		cin >> a;
		
		v.push_back(a);
	}
	
	sort(v.begin(), v.end());
	
	int n = l;
	int bi = 0;
	
	for(int i = 0; i < l; i++){
		if(bi < v[i] * n){
			bi = v[i] * n;
		}
		n--;
	}
	
	printf("%d", bi);
	*/
	
	/*
	//2(2693
	
	int l = 0;
	
	cin >> l;
	
	for(int i = 0; i < l; i++){
		int a[10] = {};
		
		for(int i = 0; i < 10; i++){
			cin >> a[i];
		}
		
		sort(a, a + 10, cmp);
		
		printf("%d\n", a[2]);
	}
	*/
	
	/*
	//3(2751
	int l = 0;
	vector <int> v;
	
	cin >> l;
	
	for(int i = 0; i < l; i++){
		int a = 0;
		cin >> a;
		
		v.push_back(a);
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < l; i++){
		printf("%d\n", v[i]);
	}
	*/
	
	/*
	//4(11399
	int l = 0, n = 0;
	vector <int> v;
	
	cin >> l;

	for(int i = 0; i < l; i++){
		int a = 0;
		cin >> a;
		
		v.push_back(a);
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j <= i; j++){
			n += v[j];
		}
	}
	
	printf("%d\n", n);
	*/
	
	/*
	//5(11656
	string str;
	vector <string> v;
	
	cin >> str;
	
	for(int i = 0; i < str.length(); i++){
		v.push_back(str.substr(i));
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << '\n';
	}
	*/
	
	/*
	//6(10610
	string str;
	
	cin >> str;
	
	int triger = 0, a = 0;
	for(int i = 0; i < str.size(); i++){
		if(str[i] == '0'){
			triger++;
		}
		a += str[i] - '0';
	}
	
	if(a % 3 == 0 && triger!= 0){
		sort(str.begin(), str.end(), cmp);
		cout << str;
	}
	else{
		printf("-1");
	}
	*/
	
	
	//7(2493
	int l = 0;
	vector <int> v;
	
	cin >> l;
	
	for(int i = 0; i < l; i++){
		int a = 0;
		cin >> a;
		
		v.push_back(a);
	}
	
	for(int i = l - 1; i >= 0; i--){
		stack <int> s;
		
		for(int )
		
	}
	
	for(int i = 0; i < l; i++){
		printf("%d ", v[i]);
	}
	
	
	
	return 0;
}
