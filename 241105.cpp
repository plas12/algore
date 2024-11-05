#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;


int main(){
	/*
	//2495
	string str;
	
	for(int i = 0; i < 3 ; i++){
		
		cin >> str;
		int a = 0, b = 0, st = str[0], en = str[1];
		
		
		
		for(int j = 0; str[j]; j++){
			if(st == en){
				en = str[j + 2];
				a++;
				if(b < a){
					b = a;
				}
			}
			else if(a != 0 && st != en){
				a++;
				if(b < a){
					b = a;
				}
				st = str[j + 1];
				en = str[j + 2];
				a = 0;
			}
			else if(st != en){
				st = str[j + 1];
				en = str[j + 2];
				a = 0;
			}
		}
		if(b == 0){
			printf("1\n");
		}
		else{	
		printf("%d\n", b);
		}
	}
	*/
	
	/*
	//1259
	string str = "123";
	
	while(1){
		if(str == "0"){
			break;
		}
		cin >> str;
		int a = 0;
		
		for(int i = 0; i < str.size() / 2; i++){
			if(str[i] != str[str.size() - 1 - i]){
				a++;
			}
		}
		
		if(a && str != "0"){
			printf("no\n");
		}
		else if(a == 0 && str != "0"){
			printf("yes\n");
		}
		
	}
	*/
	
	/*
	//1439
	
	string str = "";
	int a = 0, b = 0;
	
	cin >> str;
	
	int O = 0;
	for(int i = 0; str[i]; i++){
		if(str[i] == '0' && str[i + 1] == '1'){
			O++;
		}
		if(str[i] == '0' && str[i + 1] == '\0'){
			O++;
		}
	} 
	
	int I = 0;
	for(int i = 0; str[i]; i++){
		if(str[i] == '1' && str[i + 1] == '0'){
			I++;
		}
		if(str[i] == '1' && str[i + 1] == '\0'){
			I++;
		}
	} 
	
	if(O < I){
		printf("%d", O);
	}
	else if( I < O){
		printf("%d", I);
	}
	else{
		printf("%d", I);
	}
	*/
	
	
	//20528
	int l = 0, n = 0;
	char wourds[100][100] = {};
	
	cin >> l;
	
	for(int i = 0; i < l; i++){
		string str;
		cin >> str;
		for(int j = 0; str[j]; j++){
			wourds[i][j] = str[j];
		}
	}
	
	char a = wourds[0][0];
	for(int i = 0; i < l; i++){
		if(a != wourds[i][0]){
			n++;
		}
	}
	
	if(n){
		printf("0");
	}
	else{
		printf("1");
	}
	
	return 0;
}	
