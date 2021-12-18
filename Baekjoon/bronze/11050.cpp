#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, tmp;
    unsigned int t=1;
    cin >> n>> k;

    if(n/2>=k)
        k = n-k;
    
    for(int i=k+1;i<=n;i++)
        t*=i;

    for(int i=1;i<=n-k;i++)
        t/=i;

    cout<<t;

}