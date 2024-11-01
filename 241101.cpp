#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
/*
//3
//회문 찾기 재귀 함수 
char str[1001];
int f(int st, int en){
	if(st > en){
		return 0;
	}
	else if(str[st] == str[en]){
		return f(st + 1, en -1);
	}
	else{
		return 1;
	}
}
*/
int main(){
	/*
	//1
	strlen(A)//A의 길이
	
	strcmp(A, B)//A와 B를 사전순으로 비교해서 A가 B보다 사전적으로 빠르면 -1, 같으면 0, 느리면 1 반환 
	*/
	
	/*
	//2
	//회문 찾기 while문 
	char str[1001];
	int check = 1;
	int st = 0; en = strlen(str) - 1;
	
	while(1){
		if(st >= en){
			break;
		}
		if(str[st] != str[en]){
			check = 0;
			break;
		}
		st++;
		en--;
	} 
	*/
	
	/*
	//4
	//저장 
	string str = "123";
	string str("123"); 
	
	//문자열내 문자 참조
	str[0] = '0';
	
	//입력
	string str;
	cin >> str;
	
	//출력
	string str;
	cout << str; 
	*/
	
	/*
	//5
	//문자열의 결합이 가능함 
	string a = "123", b = "456";
	cout >> a + b;
	
	//문자열간의 비교 가능(사전 순)
	string a = "abc", b = "efg";
	printf("%d", a < b); 
	*/
	
	/*
	//6
	s.c_str()//string s 를 char[]로 변환
	
	s.size()//string s 의 길이 반환
	
	s.substr(시작, 개수)//s의 시작부터 해당 개수만큼 반환
	
	s.find(찾을 문자열)//s에서 찾을 문자열을 가장 처음나오는 index를 반환 없으면 음수 반환
	
	stoi(s)//string s를 int 형식으로 변환(정수를 반환)
	
	reverse(시작, 끝)//시작부터 끝까지의 값을 뒤집어서 넣는 값(시작과 끝에 는 str.begin, str.end 처럼 넣으면 str이 뒤집혀서 str에 넣어짐) 
	*/
	
	/*
	//7
	char c[101] = {0, }, r[101] = {0, };
	int n = 0;
	scanf("%s", c);//c의 주소 
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%s", r);
		if(strcmp(c, r) == 0){
			printf("Yes");
			return 0;
		}
	}
	
	printf("No");
	*/
	
	/*
	//8
	int l = 0;
	cin >> l;
	int ll = l;
	
	for(int i = 0; i < l; i++){
		string str;
		cin  >> str;
		
		for(int j = 0; j < (str.size() - 1) / 2 ; j++){
			if(str[j] != str[str.size() - 1 - j]){
				ll--;
				j += str.size() + 1;
			}
		}
	}
	
	printf("%d", ll);
	*/
	
	/*
	//9
	string str;
	int n, cnt = 0;
	cin >> n;
	
	while(n--){
		cin >> str;
		int st = 0; ed = str.length() - 1;
		bool check = true;
		
		while(st < ed){
			if(str[st] == str[ed]){
				st++;
				ed--;
			}
			else{
				ckeck = false;
				break;
			}
		}
		
		if(check){
			cnt++;
		}
	}
	
	printf("%d", cnt);
	*/
	
	/*
	//10
	string str1, str2;
	int n, cnt = 0;
	cin >> n;
	
	while(n--){
		cin >> str1;
		str2 = str1;
		reverse(str1.begin(), str1.end());
		cout << str1 << " " << str2 << "\n";
		if(str1 == str2){
			cnt++;
		}
	} 
	
	printf("%d", cnt);
	*/
	
	/*
	//11
	string str1;
	string str2;
	cin >> str1 >> str2;
	
	if(str1.size() > str2.size()){
		cout << str1;
	}
	else if(str1.size() < str2.size()){
		cout << str2;
	}
	else{
		if(str1 > str2){
			cout << str1;
		}
		else{
			cout << str2;
		}
	}
	*/
	
	/*
	//12
	string str;
	string Bomb;
	
	cin >> str >> Bomb;
	
	
	while(1){
		if(str.find(Bomb) == -1){
			if(str.size() == 0){
				printf("Art!");
			}
			else{
				cout << str;
			}
			break;
		}
		else{
			str = str.substr(0, str.find(Bomb)) + str.substr(str.find(Bomb) + Bomb.size(), str.size() - (str.find(bomb) + str.size()));
		}
	}
	*/
	
	/*
	//13
	string str, Bomb;
	
	cin >> str >. Bomb;
	
	while(1){
		int idx = str.find(bomb);
		int length = str.size();
		
		if(idx == 0){
			break;
		}
		
		str = str.substr(0, idx) + str.substr(idx + size, lengh - (idx + size));
	}
	
	if(str.size() == 0){
		printf("Art!");
	}
	else{
		cout << str;
	}
	*/

	return 0;
}
