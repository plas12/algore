#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
/*
//3
//ȸ�� ã�� ��� �Լ� 
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
	strlen(A)//A�� ����
	
	strcmp(A, B)//A�� B�� ���������� ���ؼ� A�� B���� ���������� ������ -1, ������ 0, ������ 1 ��ȯ 
	*/
	
	/*
	//2
	//ȸ�� ã�� while�� 
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
	//���� 
	string str = "123";
	string str("123"); 
	
	//���ڿ��� ���� ����
	str[0] = '0';
	
	//�Է�
	string str;
	cin >> str;
	
	//���
	string str;
	cout << str; 
	*/
	
	/*
	//5
	//���ڿ��� ������ ������ 
	string a = "123", b = "456";
	cout >> a + b;
	
	//���ڿ����� �� ����(���� ��)
	string a = "abc", b = "efg";
	printf("%d", a < b); 
	*/
	
	/*
	//6
	s.c_str()//string s �� char[]�� ��ȯ
	
	s.size()//string s �� ���� ��ȯ
	
	s.substr(����, ����)//s�� ���ۺ��� �ش� ������ŭ ��ȯ
	
	s.find(ã�� ���ڿ�)//s���� ã�� ���ڿ��� ���� ó�������� index�� ��ȯ ������ ���� ��ȯ
	
	stoi(s)//string s�� int �������� ��ȯ(������ ��ȯ)
	
	reverse(����, ��)//���ۺ��� �������� ���� ����� �ִ� ��(���۰� ���� �� str.begin, str.end ó�� ������ str�� �������� str�� �־���) 
	*/
	
	/*
	//7
	char c[101] = {0, }, r[101] = {0, };
	int n = 0;
	scanf("%s", c);//c�� �ּ� 
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
