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
    for(int i=0;i<n;i++)
        cout<<nums[i]<<"\n";
    
}