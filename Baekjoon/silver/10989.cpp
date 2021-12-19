#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,tmp;
    cin >> n;
    int nums[10001] ={0,};
    for(int i=0;i<n;i++){
        cin >>tmp;
        nums[tmp]++;
    }

    for(int i=1;i<10001;i++){
        for(int j=0;j<nums[i];j++)
            cout<<i<<"\n";
    }
}