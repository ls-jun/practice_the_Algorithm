#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, answer=0, tmp;
    cin >> n;
    if(n%5==0)
        answer=n/5;
    else{
        while(n>0){
            n-=3;
            answer++;
            if(n%5==0){
                answer+=n/5;
                n=0;
            }
        }
        if (n!=0)
            answer =-1;
    }
    cout<<answer;
}