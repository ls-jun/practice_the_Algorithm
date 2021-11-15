#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a>>b>>c;
    a = a*b*c;
    int num[11] ={0,};
    while(a>0){
        num[a%10]++;
        a/=10;
    }
    for(int i =0; i<10;i++){
        cout<<num[i]<<"\n";
    }
}