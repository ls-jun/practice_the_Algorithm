#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,h,w,n,tmp, answer;
    cin >>t;
    while(t--){
        tmp=1;
        cin >>h >> w>> n;
        answer = n%h;
        if(!answer) {
            answer = h;
            tmp = 0;
        }
        answer*=100;
        answer+=n/h+tmp;
        cout<<answer<<"\n";
    }
}