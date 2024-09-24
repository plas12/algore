#include <stdio.h>
#include <stdlib.h>

/*
2501
int neln(int n, int len){
	int a = 0;
	
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			a++;
			if(a == len){
				return i;
			}
		}
	}
	return 0;
}
*/

int main(int argc, char** argv) {
	/*
	10801
	int win_a = 0, win_b = 0;
	int a[11] = {}, b[11] ={};
	
	for(int i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < 10; i++){
		scanf("%d", &b[i]);
	}
	
	for(int i = 0; i < 10; i++){
		if(a[i] > b[i]){
			win_a++;
		}
		else if(a[i] < b[i]){
			win_b++;
		}
	}
	
	if(win_a > win_b){
		printf("A");
	}
	else if(win_a < win_b){
		printf("B");
	}
	else{
		printf("D");
	}
	*/
	/*
	2501
	int n = 0, len = 0;
	
	scanf("%d %d", &n, &len);
	
	printf("%d", neln(n, len));
	*/
	/*
	10797
	int d = 0, j = 0, c[5] ={};
	
	scanf("%d\n%d %d %d %d %d", &d, &c[0], &c[1], &c[2], &c[3], &c[4]);
	
	for(int i = 0; i < 5; i++){
		if(c[i] == d){
			j++;
		}
	}
	printf("%d", j);
	*/
	/*
	2544
	int a[4] = {0, 0, 0, 0};
	int b[4] = {0, 0, 0, 0};
	int n = 0, m = 0;
	
	scanf("%d %d\n%d %d\n%d %d\n%d %d", &a[0], &b[0], &a[1], &b[1], &a[2], &b[2], &a[3], &b[3]);
	
	for(int i = 0; i < 4; i++){
		n -= a[i];
		n += b[i];
		if(n > m){
			m = n;
		}
	}
	
	printf("%d", m);
	*/
	/*
	3003
	int k, q, l, b, n, p;
	
	scanf("%d %d %d %d %d %d", &k, &q, &l, &b, &n, &p);
	
	printf("%d %d %d %d %d %d", 1 - k, 1 - q, 2 - l, 2 - b, 2 - n, 8 - p);
	*/

	int len = 0, a = 0, b = 0, 	sum = 0, n = 0;
	
	scanf("%d", &n);
	b = n % 10;
	a = n / 10 % 10;
	printf("%d %d", a, b);
	
	while(n != sum){
		sum = b*10 + (a + b) % 10;
		b = sum % 10;
		a = sum / 10 % 10;
		len++;
		printf("!!!  %d %d %d %d  !!!", sum, a, b, len);
	}
	
	printf("%d", len);
	
	return 0;
}
