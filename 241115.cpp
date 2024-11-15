#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;
/*
//1
pair <int, string> p  {3, 5};
*/

/*
//2
struct person{
	int id;
	string name;
	int c;
	int a;
};
*/


int main(){
	/*
	//1
	p = make_pair(5, 6)
	cin >> p.first >> p.second;
	cout << p.first << ' ' << p.second;
	//pair는 부등호와 등호로 구분 가능(first, second 순으로 비교) 
	*/
	
	/*
	//2
	person student[10000];
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		int id, c, a;
		char name[21];
		scanf("%d %s %d %d", &id, name, &c, &a);
		student[i].id = id;
		student[i].name = name;
		student[i].c = c;
		student[i].a = a;
		int m = 0;
	}
	
	int m;
	scanf("%d", &m);
	for(int i = 0; i < m; i++){
		string search;
		cin >> search;
		int check = 1;
		for(int j = 0; j < n; j++){
			if(student[j].name == search){
				printf("%d %d %d\n", student[j].id, student[j].c, student[j].a);
				check = 0;
			}
		}
		if(check){
			printf("-1\n");
		}
	}
	*/
	return 0;
}

