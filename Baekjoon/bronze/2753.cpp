#include<bits/stdc++.h>
using namespace std;
int main(){
    int year, a;
    cin >>year;
    a = year%4==0 && (year%400==0 || year%100!=0) ? 1 : 0;
    cout<<a;
}