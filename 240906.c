#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	/*
	int			%d
	longlong	$lld
	float		%f
	double		%lf   ¡Ú 
	char		%c
	char[]		%s
	*/
	/*
	int h1, m1, s1, n;
	int h2, m2, s2;
	
	scanf("%d %d %d\n%d", &h1, &m1, &s1, &n);
	
	s2 = s1 - n % 60;
	
	n /= 60;
	
	if(s2 < 0){
		m1--;
		s2 = s2 + 60;
	}
	
	m2 = m1 - n % 60;
	
	n /= 60;
	
	if(m2 < 0){
		h1--;
		m2 = m2 + 60;
	}
	
	h2 = h1 - n;
	
	printf("%d %d %d", h2, m2, s2);
	*/
	/*
	int n, a = 0;
	int ab[5] = {0, 0, 0, 0, 0};
	scanf("%d", &n);
	
	printf("%d", sizeof(ab));
	
	for(int i = 0; i < 4; i++){
		a += n % 10;
		n /= 10;
	}
	
	printf("\n%d", a);
	*/
	/*
	int n;
	scanf("%1d", &n);   ¡Ú 
	printf("%d", n);
	*/
	/*
	char ch[5] = {'D', 'C', 'B', 'A', 'E'};
	int n;
	
	scanf("%d", &n);
	
	for(int i = 0; i < 5; i++){
		int a, b, c, d, sum = 0; 
		scanf("%d %d %d %d", &a, &b, &c, &d);
		sum = a + b + c + d;
		printf("%c\n", ch[sum]);
	}
	*/
	/*
	int h = 0, m = 0, n = 0;
	
	scanf("%d %d\n%d", &h, &m, &n);
	
	m += n;
	
	if(m > 59){
		h += m / 60;
		m = m % 60;
	}
	
	if(h > 23){
		h = h % 24;
	}
	
	printf("%d %d", h, m);
	*/
	
	int n = 0, m = 0, x = 0;
	
	scanf("%d %d", &n, &m);
	
	while(n > 0){
		if(n % 2 == 0){
			x *= 10;
			x += 0;
			n /= 2;

		}
		else{
			x *= 10;
			x += 1;
			n /=2;
		}
	}
	
	for(int i = 1; i < x; i *= 10){
		printf("%d  ", i);
	}

	printf("\n%d", x);
	
	return 0;
}
