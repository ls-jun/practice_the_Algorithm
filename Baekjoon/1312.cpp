#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int a, b, n;
    cin >> a >> b>> n;
    for(int i =0; i<n; i++){
        a=a%b*10;
    }
    cout<<a/b;
    
}