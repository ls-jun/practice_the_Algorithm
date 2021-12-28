#include<iostream>
using namespace std;

int calc(int n){
    int a=0;
    while(n>0){
        a+=n%10;
        n/=10;
    }
    return a;

}
int main(){
    int n, tmp=0,check=0,answer;
    cin >>n;
    for(int i=1;i<n;i++){
        tmp=i+calc(i);
        if (tmp == n){
            check=1;
            answer = i;
            break;
        }
    }
    check ? cout<<answer : cout<<"0";

}