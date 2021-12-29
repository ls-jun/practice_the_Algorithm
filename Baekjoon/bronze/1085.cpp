#include<iostream>
#include<queue>
using namespace std;

int main(){
    int x,y,w,h;
    priority_queue<int,vector<int>, greater<int>> nums;
    cin>>x>>y>>w>>h;
    nums.push(w-x);
    nums.push(h-y);
    nums.push(x);
    nums.push(y);
    cout<<nums.top();
}