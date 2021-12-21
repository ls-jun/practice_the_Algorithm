#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE  1001

int DFA[MAX_SIZE][MAX_SIZE];
int patLength;

void constructDFA(string pattern){
    patLength = pattern.length();
    DFA[pattern[0]][0] =1;
    int X, j;

    for(X=0, j=1; j<patLength; j++){
        for (int c =0; c < MAX_SIZE; c++)
            DFA[c][j] = DFA[c][X];
        
        DFA[pattern[j]][j] = j+1;
        X = DFA[pattern[j]][X];
    }

    for (int c = 0; c < MAX_SIZE; c++) 
        DFA[c][patLength] = DFA[c][X];
}

int DFAmatching(string text){
    int i, j, txtLength, ans =0;
    txtLength = text.length();

    for(i=0, j=0; i <= txtLength;i++){
        j = DFA[text[i]][j];
        if(j == patLength)
            ans++;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        string pattern, text;
        cin >> pattern >> text;
        int ans = 0;
        int result =0;
        patLength = pattern.length();
        for(int i=0;i<MAX_SIZE;i++){
            for(int j=0;j<MAX_SIZE;j++)
                DFA[i][j]=0;
        }

        constructDFA(pattern);
        ans = DFAmatching(text);

        for(int i=0;i<MAX_SIZE;i++){
            for(int j=0;j<MAX_SIZE;j++)
                DFA[i][j]!=0 ? result+=1 : result=result;
        }
        cout<<result<<" "<<ans<<"\n";
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
// 상태0으로전이하지않는에지의개수 테스트안에패턴문자열개수