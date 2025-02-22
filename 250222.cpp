#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
#include <stack>
#include <queue> 
#include <cmath>
#include <algorithm>
#include <unordered_map>

using namespace std;
/*
//1(2532
pair<int, int> p[500001];
int dp[500001];
*/

/*
//2(2461
int n, m;
vector<vector<int>> students; // 각 반의 능력치를 저장하는 2D 벡터
unordered_map<int, int> count_per_class; // 각 반에 속한 학생 수
int result = 987654321;
*/


//3(2531
int a[30001];



int main(){
	/*
	//1(2532
	int l = 0;
	cin >> l;
	for(int i = 0; i < l; i++){
		cin >> p[i].first >> p[i].second;
	}
	
	for(int i = 0; i < l; i++){
		int n = 0;
		for(int j = i + 1; j < l; j++){
			if(p[i].first >= p[j].first && p[i].second	)
		}
	}
	*/
	
	/*
	//2(2461
	cin >> n >> m;

    students.resize(n + 1); // 각 반의 능력치를 저장할 벡터

    // 입력 처리: 각 반별로 학생의 능력치 저장
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            int ability;
            cin >> ability;
            students[i].push_back(ability);
        }
    }

    // 각 반의 능력치를 오름차순으로 정렬
    for (int i = 1; i <= n; i++) {
        sort(students[i].begin(), students[i].end());
    }

    // 능력치를 모두 하나의 벡터에 합치고 정렬
    vector<pair<int, int>> all_students;
    for (int i = 1; i <= n; i++) {
        for (int ability : students[i]) {
            all_students.push_back({ability, i});
        }
    }

    sort(all_students.begin(), all_students.end());

    int left = 0, right = 0;

    while (right < all_students.size()) {
        // 해당 반에 속한 학생 수 카운트
        count_per_class[all_students[right].second]++;

        // 각 반에 최소 1명의 학생이 있을 경우
        while (count_per_class.size() == n) {
            // 능력치 차이를 계산
            if (all_students[right].first - all_students[left].first < result) {
                result = all_students[right].first - all_students[left].first;
            }

            // left 포인터 이동
            count_per_class[all_students[left].second]--;
            if (count_per_class[all_students[left].second] == 0) {
                count_per_class.erase(all_students[left].second);
            }
            left++;
        }

        right++;
    }

    cout << result << endl;
	*/


	//3(2531
	int n, d, k, c;
	int size;
	cin >> n >> d >> k >> c;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++){
		vector <int> v;
		
		
	}
	
	
	
	
	https://cocoon1787.tistory.com/280
	
	
	
	
	



    return 0;
}
