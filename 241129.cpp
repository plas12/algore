#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
#include <stack>
#include <queue> 
#include <cmath>
#include <algorithm>

using namespace std;
/*
//3
bool cmp(int left, int right){
	return left > right;
}
*/

int main(){
	/*
	//1
	int a[5];
	
	for(int i = 0; i < 5; i++){
		scanf("%d", a[i]);
	}
	
	for(int i = 0; i < 5; i++){
		printf("%d ", a[i]);
	}
	
	sort(a, a + 5);//sort(정렬 시작 값의 주소, 정렬 끝 값의 주소) - 배열만 가능
	printf("\n"); 
	
	for(int i = 0; i < 5; i++){
		printf("%d ", a[i]);
	}
	*/
	
	/*
	//2
	vector <int> v;
	
	for(int i = 0; i < 5; i++){
		int n = 0;
		scanf("%d", &n);
		v.push_back(n);
	}
	
	for(int i = ; i < 5; i++){
		printf("%d ", v[i]);
	}
	
	sort(v.begin(), v.end());//vector의 함수중 .begin은 vector의 첫째값의 주소 출력, .end는 마지막 값 
	printf("\n");
	
	for(int i = 0; i < 5; i++){
		printf("%d ", v[i]);
	}
	*/
	
	/*
	//3
	vector <int> v;
	
	for(int i = 0; i < 5; i++){
		int n = 0;
		scanf("%d", &n);
		v.push_back(n);
	}
	
	for(int i = 0; i < 5; i++){
		printf("%d ", v[i]);
	}
	
	sort(v.begin(), v.end(), cmp);//sort함수의 기본은 오름차순, 3번의 활동과 같이 제작한다면 함수의 부등호 방향대로 정렬 
	printf("\n");
	
	for(int i = 0; i < 5; i++){
		printf("%d ", v[i]);
	}
	*/
	
	/*
	//4
	vector <int> v1;
	vector <int> v2;
	
	int a = 0;
	scanf("%d", &a);
	
	for(int i = 0; i < a; i++){
		int n = 0;
		scanf("%d", &n);
		v1.push_back(n);
		v2.push_back(n);
	}
	
	sort(v2.begin(), v2.end());
	
	int b = 0;
	for(int i = 0; i < v1.size(); i++){
		if(v1[i] != v2[i]){
			b++;
		}
	}
	
	printf("%d", b);
	*/
	
	
	//5
	
	
	
		
	return 0;
}
