#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

vector <string> v;
int N, L;
string S;

int l = 0;
int cnt = 0;

void enter(){
	if(cnt % L == 0 && l != 0){
		printf("\n");
	}
}

void case_a(int n){
	string text = "";
	n += 1;
	
	while(S[n] != ':'){
		text += S[n];
		n++;
	}
	
	int triger = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i] == text){
			triger = 1;
			break;
		}
	}
	
	if(triger == 0){
		printf("! ");
		for(int i = 0; i < text.size() + 1; i++){
			enter();
			printf("%c %d", S[i + l], l);
			cnt++;
			l++;
		}	
	}
	
	if(triger == 1){
		enter();
		printf("@ ");
		cout << "[" << text << "]";
		printf(" %d", l);
		cnt++;
		l += text.size() + 2;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> L;

    for(int i = 0; i < N; i++){
        string dummy;
        cin >> dummy;

        v.push_back(dummy);
    }

    cin >> S;
	
//    int cnt = 0;
//    for(int i = 0; i < S.size(); i++){
//        if(S[i] == ':'){
//            string text = "";
//            
//            int j = i + 1;
//            while(1){
//                if(S[j] == ':'){
//                    break;
//                }
//                else{
//                    text += S[j];
//                }
//                j++;
//            }
//            
//            int triger = 0;
//            for(int k = 0; k < v.size(); k++){
//                if(v[k] == text){
//                    triger = 1;
//                    break;
//                }
//            }
//
//            if(triger == 0){
//                for(int k = 0; k < text.size() + 2; k++){
//                    asdf(cnt, i);
//                    printf("%c", S[i]);
//                    cnt++;
//                    i++;
//                }
//            }
//            else{
//                asdf(cnt, i);
//                cout << '[' << text << ']';
//                cnt += 1;
//            }
//        }
//        else{
//            asdf(cnt, i);
//            printf("%c", S[i]);
//            cnt++;
//        }
//    }
	
	while(l < S.size()){
		if(S[l] == ':'){
			case_a(l);
		}
		else{
			enter();
			printf("# %c %d", S[l], l);
			cnt++;
			l++;
		} 
		printf("   ");
	}
	
    return 0;
}
