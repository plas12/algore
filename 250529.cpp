#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;

/*
//��
 
//��õ �ڵ�(���ο� ����) 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

//ȸ���� ��ͷ�

//string ��õ �Լ�
str.substr;
str.find();//�ð��� �ɶ���
str.pop_back();
reverse(str.begin(), str.end());

//���ڿ� ũ���(����)
bool cmp(string s1, string s2){
	return (s1 + s2 > s2 + s1);
} 

//�Է¹����� ����غ���
*/

//���ڿ� Ȱ�� ���� : 11656, 5525, 1213, 12904, 9935, 33516, 16496, 33983;
//dfs / bfs Ȱ�� ���� : 1987, 10819, 13023, 2023, 9663, 15971, 19581, 2661, 17616; 

/*
//1(5525
int N, M, cnt = 0;
string str = "I";
string S;
*/

/*
//2(1213
string str;
string n;
int alp[26];
*/

/*
//3(12904
string S;
string T;
queue <string> q;
*/


//4(33983
string S;
int N, a = 0, b = 0, cnt = 0, M = 0;

int main(){
	/*
	//1(5525
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//1(5525
	cin >> N;
	cin >> M;
	cin >> S;
	
	//printf("!!!\n");
	
	for(int i = 0; i < N; i++){
		str += "OI";
	}
	
	//printf("@@@\n");
	
	for(int i = 0; i < S.size() - 2 * N + 1; i++){
		string n = "";
		
		for(int j = 0; j < 2 * N + 1; j++){
			n = n + S[i + j];
		}
		
		if(n == str){
			cnt++;
		}
	}
	
	//printf("###\n");
	
	cout << cnt;
	---------------------------------------
	
	int n, m, result = 0;
	
	scanf("%d %d", &n, &m);
	
	string str;
	cin >> str;
	
	int i = 0;
	while(i < m){
		if(str[i] == 'I'){
			int j = i + 1;
			int cnt = 0;
			
			while(j < m - 1 && str[j] == 'O' && str[j + 1] == 'I'){
				cnt++;
				j = j + 2;
			}
			
			if(n <= cnt){
				cnt = cnt - n + 1;
				result = result + cnt;
			}
			i = j;
		}
		else{
			i++;
		}
	}
	
	cout << result;
	*/
	
	/*
	//2(1213
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> str;
	
	for(int i = 0; i < str.size(); i++){
		alp[str[i] - 'A']++;
	}
	
	int a = 0;
	for(int i = 0; i < 26; i++){
		if(alp[i] % 2){
			a++;
		}
	}
	
	if(2 <= a){
		printf("I'm Sorry Hansoo");
	}
	else{
		string b;
		for(int i = 0; i < 26; i++){
			if(alp[i] != 0){
				for(int j = 0; j < alp[i] / 2; j++){
					b += 'A' + i;
				}
			}
		}
		n += b;
		for(int i = 0; i < 26; i++){
			if(alp[i] % 2){
				n += 'A' + i;
			}
		} 
		reverse(b.begin(), b.end());
		n += b;
		
		cout << n;
	}
	*/
	
	/*
	//3(12904
	cin >> S;
	cin >> T;
	
	while(S.size() <= T.size()){
		if(T[T.size() - 1] == 'A'){
			T.pop_back();
		}
		else{
			T.pop_back();
			reverse(T.begin(), T.end());
		}
		
		if(T == S){
			printf("1");
			return 0;
		}
	}
	
	printf("0");
	*/
	
	/*
	//4(33983
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;
	cin >> S;
	
	for(int i = 0; i < S.size(); i++){
		if(S[i] == 'H'){
			a++;
		}
		if(S[i] == 'O'){
			b++;
		}
		
		if(a < b){
			printf("mix");
			return 0;
		}
	}
	
	if(a != b * 2){
		printf("mix");
	}
	else{
		for(int i = N - 1; i >= 0; i--){
			if(S[i] == 'H'){
				a++;
			}
			if(S[i] == 'O'){
				b++;
			}
			
			if(a < b){
				printf("mix");
				return 0;
			}
		}
		
		printf("pure");
	}
	*/
	
	
	
	
	
	
	
	return 0;
}







