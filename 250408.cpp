#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

//1
vector <pair<int, int> > v[100001];

int main(){
	
	//1(1167
	int l = 0;
	cin >> l;
	
	for(int i = 1; i <= V; i++){
		int k;
		cin >> k;
		while(1){
			int n, m;
			cin >> n;
			if(n == -1){
				break;
			}
			else{
				cin >> m;
				v[k].push_back({n, m});
			}
		}
	}
	
	for(int i = 1; i <= l; i++){
		printf("%d----\nf", i);
		for(int j = 0; j < v[i].size(); i++){
			printf("%d %d\n", v[i][j].first, v[i][j].second);
		}
	}
	
	return 0;
}
