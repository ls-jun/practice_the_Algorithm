#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n, tmp;
    vector<int> nums;
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        nums.push_back(tmp);
    }
    sort(nums.begin(),nums.end());
    if(nums.size()==1)
        cout<<nums[0]*nums[0];
    else
        cout<<nums[0]*nums[n-1];
    
}