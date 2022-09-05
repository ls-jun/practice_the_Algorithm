// #include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    long long answer=0, tmp =0, m=1;
    cin >> n;
    
    while(tmp<=n){
        tmp+=m;
        m++;
        answer++;
    }
    cout<< answer-1;
    return 0;
}