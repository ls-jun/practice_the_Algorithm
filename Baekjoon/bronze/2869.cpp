#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int answer;
    double a, b, v,tmp,t ;
    cin >>a>>b>>v;
    t =v;
    v-=a;
    tmp = ceil(v/(a-b));
    
    a == t ? answer = 1 : tmp>1 ? answer = int(tmp+1) : answer = int(tmp+1); 
    cout<<answer;
}