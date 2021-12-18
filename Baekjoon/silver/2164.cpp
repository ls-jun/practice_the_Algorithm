#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,tmp, count =1;
    cin >> a;
    queue<int> n;
    for(int i=1;i<=a;i++)
        n.push(i);
    while(n.size()>1){
        if(count%2)
            n.pop();
        else{
            tmp=n.front();
            n.pop();
            n.push(tmp);
        }
        count++;

        
    }
    cout<<n.front();
}