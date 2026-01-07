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

//2457

/*
//1(1305
int dummy = 0;
string str;
vector <int> n;

vector <int> computeLPS(const string& pattern){
	int m = pattern.length();
	vector <int> lps(m, 0);
	int length = 0;
	int i = 1;
	
	while(i < m){
		if(pattern[i] == pattern[length]){
			length++;
			lps[i] = length;
			i++;
		}
		else{
			if(length != 0){
				length = lps[length - 1];
			}
			else{
				lps[i] = 0;
				i++;
			}
		}
	}
		
//	for(int i = 0; i < lps.size(); i++){
//		printf("%d ", lps[i]);
//	}
	
	return lps;
}
*/

/*
//2(3356
int dummy = 0;
string str;
vector <int> n;

vector <int> computeLPS(const string& pattern){
	int m = pattern.length();
	vector <int> lps(m, 0);
	int length = 0;
	int i = 1;
	
	while(i < m){
		if(pattern[i] == pattern[length]){
			length++;
			lps[i] = length;
			i++;
		}
		else{
			if(length != 0){
				length = lps[length - 1];
			}
			else{
				lps[i] = 0;
				i++;
			}
		}
	}
		
//	for(int i = 0; i < lps.size(); i++){
//		printf("%d ", lps[i]);
//	}
	
	return lps;
}
*/

/*
//3(12104
string A;
string B;
int asdf = 0;

int b = 0;
vector <int> dummy;

int result = 0;

vector <int> computeLPS(const string& pattern){
	int m = pattern.length();
	vector <int> lps(m, 0);
	int length = 0;
	int i = 1;
	
	while(i < m){
		if(pattern[i] == pattern[length]){
			length++;
			lps[i] = length;
			i++;
		}
		else{
			if(length != 0){
				length = lps[length - 1];
			}
			else{
				lps[i] = 0;
				i++;
			}
		}
	}
	
	return lps;
}

void KMP_search(const string& text, const string& pattern){
	int n = text.length();
	int m = pattern.length();
	vector <int> lps = computeLPS(pattern);
	
	int i = 0;
	int j = 0;
	
	while(i < n - 1){
		if(pattern[j] == text[i]){
			i++;
			j++;
		}
		
		if(j == m){
			result++;
			j = lps[j - 1];
		}
		else if(i < n && pattern[j] != text[i]){
			if(j != 0){
				j = lps[j - 1];
			}
			else{
				i++;
			}
		}
	}
}
*/


//4(2457



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(1305
	cin >> dummy;
	
	cin >> str;
	
	n = computeLPS(str);
	
	printf("%d", dummy - n[dummy - 1]);
	*/
	
	/*
	//2(3356
	cin >> dummy;
	
	cin >> str;
	
	n = computeLPS(str);
	
	printf("%d", dummy - n[dummy - 1]);
	*/
	
	/*
	//3(12104
	cin >> A;
	cin >> B;
	
	asdf = B.size();
	
	B = B + B;
	
	dummy = computeLPS(A);
	
	KMP_search(B, A);
	
	printf("%d", result);
//	cout << B;
	*/
	
	
	//2(2457
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
