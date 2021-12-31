#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n;
    cin >> m >> n;

    int prime[1000001]={0,};
    prime[1]=1;
    for(int i=2;i<=sqrt(10000000);i++){
        for(int j=i+i;j<=1000000;j+=i)
            prime[j]=1;
    }
    for(int i=m;i<=n;i++){
        if (prime[i]==0) cout<<i<<"\n";
    }
}