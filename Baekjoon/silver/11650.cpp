#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,tmpa, tmpb ;
    cin >>a;
    vector<pair<int, int>> nums;

    for(int i=0;i<a;i++){
        cin >> tmpa>> tmpb;
        nums.push_back(make_pair(tmpa,tmpb));
    }


    sort(nums.begin(), nums.end());

    for(int i=0;i<a;i++)
        cout<<nums[i].first<<" "<<nums[i].second<<"\n";

}