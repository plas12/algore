#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
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
	s
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
	
	return 0;
}
