#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	/*
	//1
	//���ڿ��� �������� '\n'�̱⿡ �������� str[i]�� 0�� �ǰ� ������ �Ǽ� for �� �����. 
	char str[10] = {};
	scanf("%s", &str);
	for(int i = 0; str[i]; i++){
		int index = str[i] - 'A';
		cnt[index]++;
	}
	*/
	/*
	//2
	string str;//string(���ڿ�) 
	cin >> str;//scanf(�Է�, <�� �Է¹��� ������ ����)
	
	cout << str//printf(��� <�� cout�� ����)
	*/
	/*
	//3
	string str;
	getline(cin, str);//scnaf(�Է�, enter�� ������ �������� ��� ���� �Է¹���, ó���� cin�� ���� �� ������ �Է¹��� ����) 
	
	cout << str;
	*/
	/*
	//4
	//getline�� ����, �� ���ڿ��� ���⸦ �����ϰ� ����ϴ� �ڵ� 
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
	
	//23080 ���� 
	
	
	return 0;
}
