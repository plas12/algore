#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	int n = 0, m = 0, x = 1, y = 0, len = 0;
	
	scanf("%d %d", &n, &m);
	
	while(n > 0){
		if(n % 2){
			x *= 10;
			x += n % m;
			n /= m;
		}
		
		else{
			x *= 10;
			x += n % m;
			n /= m;
		}
		len++;
	}
	
	int a = 1;
	for(int i = 0; i < len; i++){
		a *= 10;
	}
	
	while(x > 1){
		y *= 10;
		y = y + x % 10;
		x /= 10;
	}
	
	printf("\n%d", y);
	*/
	/*
	int a[5] = {0, 0, 0, 0, 0};
	int b = 0, c = 0;
	
	scanf("%d\n", &b);
	
	for(int i = 0; i < 5; i++){
		scanf("%1d", &a[i]);
	}
	
	for(int i = 0; i < 5; i++){
		if(a[i] == b){
			c++;
		}
	}
	
	printf("%d", c);
	*/
	/*
	int a[4] = {0, 0, 0, 0};
	int b[4] = {0, 0, 0, 0};
	int n = 0, m = 0;
	
	scanf("%d %d\n%d %d\n%d %d\n%d %d", &a[0], &b[0], &a[1], &b[1], &a[2], &b[2], &a[3], &b[3]);
	
	for(int i = 0; i < 4; i++){
		if(i == 0){
			n += b[0];
		}
		else if(i == 3){
			n -= a[3];
		}
		else{
			n -= a[i];
			n += b[i];
		}
		
		if(n > m){
			m = n;
		}
	}
	
	printf("\n%d", m);
	*/
	
	int a = 0, b = 0,c = 0;
	int n = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a == b && b == c){
		printf("%d", 10000 + a * 1000);
	}
	
	if(a == b && b != c){
		printf("%d", 1000 + a * 100);
	}
	if(a == c && a != b){
		printf("%d", 1000 + a * 100);
	}
	if(b == c && a != b){
		printf("%d", 1000 + b * 100);
	}
	
	if(b != c && a != b){
		if(n < a){
			n = a;
		}
		if(n < b){
			n = b;
		}
		if(n < c){
			n = c;
		}
		printf("%d", n * 100);
	}
	
	return 0;
}
