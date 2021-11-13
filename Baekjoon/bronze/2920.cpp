#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6,7,8};
    int b[] = {8,7,6,5,4,3,2,1};
    int c[] = {0,0,0,0,0,0,0,0};
    int d = 0;
    for(int i =0; i<8;i++)
        cin >> c[i];
    for(int i =0; i<8;i++){
        if(a[i] == c[i]) d++;
        else if(b[i]==c[i]) d--;
    }
    if(d==8) cout<<"ascending";
    else if(d==-8) cout<<"descending";
    else cout<<"mixed";
}