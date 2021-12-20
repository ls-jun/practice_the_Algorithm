#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    while(1){
        int a, b, c,tmp;
        cin >> a >> b>> c;
        if(a>c){
            swap(a,c);
        }
        if(b>c){
            swap(b,c);
        }
        if(a == b & b == c & c== 0)
            break;
        else if(c*c==a*a+b*b)
            cout<<"right\n";
        else    cout<<"wrong\n";

    }
}