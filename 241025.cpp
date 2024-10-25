#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	/*
	//1
	//문자열의 마지막은 '\n'이기에 마지막엔 str[i]가 0이 되고 부정이 되서 for 가 멈춘다. 
	char str[10] = {};
	scanf("%s", &str);
	for(int i = 0; str[i]; i++){
		int index = str[i] - 'A';
		cnt[index]++;
	}
	*/
	/*
	//2
	string str;//string(문자열) 
	cin >> str;//scanf(입력, <는 입력받을 변수를 향해)
	
	cout << str//printf(출력 <는 cout를 향해)
	*/
	/*
	//3
	string str;
	getline(cin, str);//scnaf(입력, enter를 누르기 전까지의 모든 것을 입력받음, 처음에 cin을 쓰고 그 다음에 입력받을 변수) 
	
	cout << str;
	*/
	/*
	//4
	//getline을 쓰고, 그 문자열의 띄어쓰기를 생략하고 출력하는 코딩 
	string str;
	getline(cin, str);
	
	for(int i = 0; str[i]; i++){
		if(str[i] == ' '){
			continue;
		}
		else{
			printf("%c", str[i]);
		}
	}
	*/
	/*
	//5
	string str;
	getline(cin, str);
	
	for(int i = 0; str[i]; i++){
		if('A' <= str[i] && str[i] <= 'Z'){
			printf("%c", str[i] + 32);
		}
		else{
			printf("%c", str[i]);
		}
	}
	*/
	/*
	//6
	int a[26] = {0};
	string str;
	getline(cin, str);
	
	for(int i = 0; str[i]; i++){
		if('A' <= str[i] && str[i] <= 'Z'){
			a[str[i] - 'A']++;
		}
		else if('a' <= str[i] && str[i] <= 'z'){
			a[str[i] - 'a']++;
		}
	}
	for(int i = 0; i < 26; i++){
		printf("%d ", a[i]);
	}
	*/
	/*
	//10809
	int a[26] = {-1};
	string str;
	getline(cin, str);
	
	for(int i = 0; i < 26; i++){
		a[i] = -1;
	}
	
	for(int i = 0; str[i]; i++){
		if(a[str[i] - 97] == -1){
			a[str[i] - 97] = i;
		}	
	}
	
	for(int i = 0; i < 26; i++){
		printf("%d ", a[i]);
	}
	*/
	/*
	//11720
	int a = 0, b = 0;
	string str;
	cin >> a >> str;
	
	for(int i = 0; str[i]; i++){
		b += str[i] - '0';
	}
	printf("%d", b);
	*/
	/*
	//1157
	int a[26] = {}, b[2] ={0, 0}, t = 0;
	char c;
	string str;
	getline(cin, str);
	
	for(int i = 0; str[i]; i++){
		if('A' <= str[i] && str[i] <= 'Z'){
			a[str[i] - 'A']++;
		}
		else if('a' <= str[i] && str[i] <= 'z'){
			a[str[i] - 'a']++;
		}
	}	
	
	for(int i = 0; i < 26; i++){
		if(b[0] < a[i]){
			b[0] = a[i];
			b[1] = i;
			c = i + 'A';
		}
	}
	
	for(int i = 0; i < 26; i++){
		if(b[0] == a[i] && b[1] != i){
			printf("?");
			t = 1;
			break;
		}
	}
	if(t == 0){
		printf("%c", c);
	}
	*/
	
	//23080 숙제 
	
	
	return 0;
}
