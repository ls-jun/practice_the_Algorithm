#include<iostream>
using namespace std;
int main(){
    int t, k, n;
    cin>> t;
    while(t--){
        cin >>k>>n;
        int people[k+1][n+1]={0,};
        for(int i=0;i<=n;i++)
            people[0][i]=i;
            
        for(int i=1;i<=k;i++){
            for(int j=1;j<=n;j++)
                people[i][j] = people[i-1][j]+people[i][j-1];
        }
        cout<<people[k][n]<<"\n";
    }
}