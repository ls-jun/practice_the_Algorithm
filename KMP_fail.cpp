#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> fail;
int ans;

vector<int> get_fail(string pattern){
    int m = (int)pattern.size();
    int j = 0;
    vector<int> fail(m, 0);
    for(int i=1; i< m; i++){
        while(j > 0 && pattern[i] != pattern[j])
            j = fail[j-1];
        if(pattern[i] == pattern[j])
            fail[i] = ++j;
        else 
            fail[i] = j;
    }
    return fail;
}

void kmp(string text, string pattern) {
    fail = get_fail(pattern);
    int n = (int)text.size(), m = (int)pattern.size();
    int j = 0;

    for (int i = 0; i < n; i++) {
        while (j > 0 && text[i] != pattern[j]) 
			j = fail[j-1];
        if (text[i] == pattern[j]) {
            if (j == m-1) {
                ans++;
                j = fail[j];
            } else 
                j++;
        }
    }
}

int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        string pattern, text;
        cin >> pattern >> text;
        ans = 0;

        get_fail(pattern);
        kmp(text, pattern);

        for(int j=0; j<fail.size(); j++)
            cout<<fail[j]<<" ";
        cout<< "\n";
        cout<< ans<< "\n";
    }
}

// 입력
// 전체 테스트 횟수
// 패턴문자열 테스트문자열
// ex
// 3
// AAA AAAAAA
// ...
// 출력
// fail[0] ~ fail[n-1]
// 테스트안에 패턴문자열 개수