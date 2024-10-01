#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main(){
	/*
	1475
	int a = 0, max = 0, l = 0;
	int num[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	scanf("%d", &a);
	
	while(1){
		if(a < 1){
			break;
		}

		if(a % 10 == 6 || a % 10 == 9){
			num[6]++;
		}
		else{
			num[a % 10] += 2;	
		}
		a /= 10;
	}
	
	for(int i = 0; i < 10; i++){
		if( max < num[i]){
			max = num[i];
			l = i;
		}
	}
	
	if(l == 6){
		printf("%d", (max / 2) + (max % 2));
	}
	else{
		printf("%d", max / 2);
	}
	*/
	/*
	2511
	int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int score_a = 0, score_b = 0, last = 0, draw = 0; 
	
	scanf("%d %d %d %d %d %d %d %d %d %d\n%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9], &b[0], &b[1], &b[2], &b[3], &b[4], &b[5], &b[6], &b[7], &b[8], &b[9]);
	for(int i = 0; i < 10; i++){
		if(a[i] > b[i]){
			score_a += 3;
			last = 1;
		}
		if(a[i] < b[i]){
			score_b += 3;
			last = 2;
		}
		if(a[i] == b[i]){
			score_a += 1;
			score_b += 1;
			draw++;
		}
	}
	
	if(score_a > score_b){
		printf("%d %d\nA", score_a, score_b);
	}
	if(score_a < score_b){
		printf("%d %d\nB", score_a, score_b);
	}
	if(score_a == score_b){
		if(draw == 10){	
			printf("%d %d\nD", score_a, score_b);
		}
		else{
			if(last == 1){
				printf("%d %d\nA", score_a, score_b);
			}
			if(last == 2){
				printf("%d %d\nB", score_a, score_b);
			}
		}
	}
	*/
	/*
	
	vector <int> a;	
	vector <int> b;
	vector <int> c;
	
	while(1){
		int temp1 = 0;
		int temp2 = 0;
		int temp3 = 0;
		
		scanf("%d %d %d", &temp1, &temp2, &temp3);
		if(temp1 == 0 && temp2 == 0 && temp3 == 0){
			break;
		}
		a.push_back(temp1);
		b.push_back(temp2);
		c.push_back(temp3);
	}
	
	for(int i = 0; i < a.size(); i++){
		if(a[i] * a[i] + b[i] * b[i] == c[i] * c[i]){
			printf("right\n");
		}
		else{
			printf("wrong\n");
		}
	}
	*/
	
	/*
	1475
	int a = 0, max = 0, l = 0;
	int num[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	scanf("%d", &a);
	
	while(1){
		if(a < 1){
			break;
		}

		if(a % 10 == 6 || a % 10 == 9){
			num[6]++;
		}
		else{
			num[a % 10] += 2;	
		}
		a /= 10;
	}
	
	for(int i = 0; i < 10; i++){
		if( max < num[i]){
			max = num[i];
			l = i;
		}
	}
	
	if(l == 6){
		printf("%d", (max / 2) + (max % 2));
	}
	else{
		printf("%d", max / 2);
	}
	*/
	/*
	2511
	int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int score_a = 0, score_b = 0, last = 0, draw = 0; 
	
	scanf("%d %d %d %d %d %d %d %d %d %d\n%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9], &b[0], &b[1], &b[2], &b[3], &b[4], &b[5], &b[6], &b[7], &b[8], &b[9]);
	for(int i = 0; i < 10; i++){
		if(a[i] > b[i]){
			score_a += 3;
			last = 1;
		}
		if(a[i] < b[i]){
			score_b += 3;
			last = 2;
		}
		if(a[i] == b[i]){
			score_a += 1;
			score_b += 1;
			draw++;
		}
	}
	
	if(score_a > score_b){
		printf("%d %d\nA", score_a, score_b);
	}
	if(score_a < score_b){
		printf("%d %d\nB", score_a, score_b);
	}
	if(score_a == score_b){
		if(draw == 10){	
			printf("%d %d\nD", score_a, score_b);
		}
		else{
			if(last == 1){
				printf("%d %d\nA", score_a, score_b);
			}
			if(last == 2){
				printf("%d %d\nB", score_a, score_b);
			}
		}
	}
	*/
	
	
	while(1){
		int temp1[3] = {0, 0, 0};
		int temp2[3] = {0, 0, 0};
		int temp3[3] = {0, 0, 0};
		int big[3] = {0, 0, 0};
		
		scanf("%d %d ", &temp1[1], %temp1[2]);
		if(temp1[1] > temp[2]){
			temp2[1] = temp1[2];
			temp2[2] = temp1[1];
		}
		else{
			temp2[1] = temp1[1];
			temp2[2] = temp1[2];
		}
		scanf("%d", &temp2[0])
		if()
		
		
		if(temp1 == 0 && temp2 == 0 && temp3 == 0){
			break;
		}
		
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				if(temp[i] < temp[j]){
					big[i]++;
				}
			}
		}
		
		else{
			if(temp1 * temp1 + temp2 * temp2 == big * big){
				printf("right\n");
			}
			else{
				printf("wrong\n");
			}
		}
		
	}
	

	

	
}
