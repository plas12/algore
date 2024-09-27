#include <cstdio>
#include <iostream>
#include <vector> // 백터 사용시에만
using namespace std;

int main(){
	/*
	1
	vecor <int> v;
	
	v.push_back(1);//v[0] = 1
	v.puch_backZ(2);//v[1] = 2
	printf("%d", v.size());//2
	*/
	/*
	2
	vector <int> v;
	for(int i = 0; i < 10; i++){
		int temp;
		scanf("%d", &temp);
		v.push_back(temp);
	}
	for(int i = v.size() - 1; i >= 0; i--){
		printf("%d\n", v[i]);
	}
	*/
	/*
	3
	int a = 0, up = 0, down = 1000;
	vector <int> v;
	
	scanf("%d", &a);
	
	for(int i = 0; i < a; i++){
		int score;
		scanf("%d", &score);
		v.push_back(score);
	} 
	int score = 0;
	for(int i = 0; i < a; i++){
		if(up < v[i]){
			up = v[i];
		}
		if(v[i] < down){
			down = v[i];
		}
		score += v[i];
	}
	
	printf("%d", (score - up - down) / (a - 2));
	*/
	/*
	4
	int a = 0, b = 0, bigger = 0;
	int len[10001] = {};
	
	scanf("%d", &a);
	
	for(int i = 0; i < a; i++){
		scanf("%d", &len[i]);
	}
	for(int i = 0; i < a - 1; i++){
		if((len[i] - len[i + 1]) < 0){
			if(b < (len[i+1] - len[i])){
				b = (len[i+1] - len[i]);
				bigger = i + 1;
			}
		}
	}
	
	if(bigger + 1 == 0){
		printf("0");
	}
	else{
		printf("%d %d", bigger, bigger + 1);	
	}
	*/
	/*
	5
	int a = 0;
	int len[10001] = {}, asdf[10001] = {};
	
	scanf("%d", &a);
	
	for(int i = 0; i < a; i++){
		scanf("%d", &len[i]);
	}
	
	for(int i = 0; i < a; i++){
		asdf[i] = 1;
		for(int j = 0; j < a; j++){
			if(len[i] < len[j]){
				asdf[i]++;
			}
		}
	}
	for(int i = 0; i < a; i++){
		printf("%d ", asdf[i]);
	}
	*/
	
	1475
	int a = 0, len = 0, ii;
	int num[10] = {};
	
	scanf("%d", &a);
	
	while(1){
		if(a < 1){
			break;	
		}
		num[a % 10]++;
		a /= 10;
	}
	for(int i = 0; i < 10; i++){
		if(len < num[i]){
			len = num[i];
			ii = i;
			printf("%d  %d\n", ii, len);
		}
	}
	
	if(ii == 6 || ii == 9){
		printf("%d", len / 2 + len % 2);
	}
	else{
		printf("%d", len);
	}
} 
