#include <stdio.h>
#include <stdlib.h>
/*
5 6
int prime(int n){
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}	
*/
/*
***
int prime(int n){
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}	
***
*/

/*
5
int asdf(int a){
	
	int cnt = 0;
	for(int i = 1; i < a; i++){
		if(a % i == 0){
			cnt++;
		}
	}
	if(cnt == 1){
		return 1;
	}
	return 0;
}
*/
/*
4
int asdf(int a){
	
	int cnt = 0;
	for(int i = 1; i < a; i++){
		if(a % i == 0){
			cnt++;
		}
	}
	if(cnt == 1){
		return 1;
	}
	return 0;
}
*/

/*
2
int ans[1000001] = {}, a[1000001] ={};
*/

int main(int argc, char *argv[]) {
	/*
	while(n){
		n % 10;
		n /= 10;
	}
	*/
	/*
	1
	int len = 0, n = 0, size = 0;
	
	scanf("%d", &len);
	
	for(int i = 0; i < len; i++){
		scanf("%d", &n);
		size += n;
	}
	size = size / len;
	
	if(size >= 80){
		printf("easy");
	}
	else if(size >= 60){
		printf("normal");
	}
	else{
		printf("hard");
	}
	*/
	/*
	2
	int len = 0, sum = 0;
	
	scanf("%d", &len);
	
	for(int i = 0; i < len; i++){
		scanf("%d", &ans[i]);
	}
	for(int i = 0; i < len; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < len; i++){
		if(ans[i] == a[i]){
			sum++;
		}
	}
	
	printf("%d", sum);
	*/
	/*
	3
	int time = 0, sum = 0, len = 0;
	
	scanf("%d", &time);
	
	while(1){
		
		for(int i = 1; i < time; i *= 10){
			sum += time % i;
			time /= 10;
			printf("1  %d\n", i);
		}
		time = sum;
		len++;
		if(10 > time){
			printf("%d", len);
			break;
		}
	}
	////
	int cnt = 0, sum = 0;
	long long n;
	scanf("lld", &n);
	
	while(1){
		if(n < 10){
			break;
		}
		
		while(1){
			if( n == 0){
				break;
			}
			sum += n % 10;
			n = n / 10;
		}
		
		cnt ++;
		n = sum;
		sum = 0;
	}
	
	printf("%d", cnt);
	*/
	/*
	4
	int a = 0;
	
	scanf("%d", &a);
	
	printf("%d", asdf(a));
	*/
	/*
	5
	int len = 0, cnt = 0;
	int ind[101] = {};
	
	scanf("%d", &len);
	for(int i = 0; i < len; i++){
		scanf("%d", &ind[i]);
		if(asdf(ind[i]) == 1){
			cnt++;
		}
	}
	
	printf("%d", cnt);
	*/
	/*
	6
	int a = 0, b = 0, cnt = 0, m = 1000000;
	scanf("%d %d", &a, &b);
	
	for(int i = a; i <= b; i++){
		if(i == 1){
			continue;
		}
		
		if(prime(i) == 1){
			cnt += i;
			if(m > cnt){
				m = cnt;
//				printf("@@@%d@@@", m);
			}
//			printf("!!!%d  %d!!!\n", cnt, i);
		}
	}
	
	if(cnt == 0){
		printf("-1");
	}
	else{
		printf("%d\n%d", cnt, m);
	}
	*/
	return 0;
}


