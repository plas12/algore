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

/*
//KMP_algorithm

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
	
	while(i < n){
		if(pattern[j] == text[i]){
			i++;
			j++;
		}
		
		if(j == m){
			cout << "Pattern found at index " << i - j << endl;
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

//1786, 1305, 3356, 12104

/*
//1(1786
vector <int> asdf;
int a = 0;

string t;
string p;

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
	
	while(i < n){
		if(pattern[j] == text[i]){
			i++;
			j++;
		}
		
		if(j == m){
			asdf.push_back(i - j + 1);
			a++;
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


//2(1305
int L;
string pattern;

int result = 0;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	//1(1786
	getline(cin, t);
	getline(cin, p);
	
	KMP_search(t, p);
	
	printf("%d\n", a);
	for(int i = 0; i < asdf.size(); i++){
		printf("%d ", asdf[i]);
	}
	*/
	
	
	//2(1305
	cin >> L;
	cin >> pattern;
	
	pattern.append(pattern);
	
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
	
	for(int i = 0; i < lps.size(); i++){
		printf("%d ", lps[i]);
	}
	
	
	
	return 0;
}
