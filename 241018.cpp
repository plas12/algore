#include <stdio.h>
#include <stdlib.h>
/*
1
int fac(int a){
	if(a <= 1){
		return 1;
	}
	return a * fac(a - 1);//5 * fac(5 - 1)(fac(5 - 1) == 4 * fac(4 - 1) ...)
}
*/
/*
2
int num[1001] = {};
2.2
int fun(int start, int turn){
	if(turn == 0){
		return start;
	}
	else{
		int next = map[start];
		turn--;
		return func(next, turn);
	}
}
2.2
*/
/*
3
int f(int a = 0){
	if(a == 0){
		return a;
	}
	return a % 10 + f(a / 10);
}
*/
/*
3.1
int c(int a, int i){
	if(a == 1){
		return i;
	}
	else if(a % 2 == 0){
		i++;
		c(a / 2, i);
	}
	else if(a % 2 == 1){
		i++;
		c(a * 3 + 1, i);
	}
}
*/


int ch(mus, a, i){
	int af = a + mus[i], be = a + mus[i+1];
	
	if(i == 10){
		return a;
	}
	
	else if(100 > af && 100 > be){
		i++;
		ch(mus, be, i);
	}
	else if(100 > af && 100 < be){
		if(100 - af > be - 100){
			i++;
			ch(mus, be, i);
		}
		else{
			return af;
		}
	}
	else if(100 < af && 100 < be){
		i++
		ch(mus, af, i);
	}

	
	
//	if(100 - (a + mus[i]) > 100 - (a + mus[i+1])){
//		a += mun[i]
//		i++;
//		ch(mun, a, i);
//	}
//	else if(100 - (a + mus[i]) < 100 - (a + mus[i+1])){
//		.
//	}
	
	return a
}

int main(){
	/*
	1
	int a = 0;
	scanf("%d", &a);
	printf("%d", fac(a));
	*/
	/*
	2
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	for(int i = 1; i <= a; i++){
		int rule = 0;
		scanf("%d", &rule);
		num[i] = rule;
	}
`	
	
	2.2
	int goal = b;
	fun(goal, c);
	2.2

	2.1
	int start, goal;
	start = b;
	
	while(c--){
		goal = num[start];
		start = goal;
	}
	2.1
	
	printf("%d", goal);
	*/
	/*
	3
	int a = 0;
	scanf("%d", &a);
	printf("%d", f(a));
	*/
	/*
	3
	int a = 0, i = 0;
	scanf("%d", &a);
	
	//printf("%d", c(a, i));3.1
	
	//3.2
	while(1){
		if(a == 1){
			printf("%d", i);
			break;
		}
		else if(a % 2 == 0){
			a /= 2;
			i++;
		}
		else if((a % 2) == 1){
			a = a * 3 + 1;
			i++;
		}
	}
	*/
	
	
	int mus[11] = {};
	for(int i = 0; i < 10;; i++){
		scnaf("%d", mun[i]);
	}
	printf("%d", ch(mus, 0, 0));
	
	return 0;
}
