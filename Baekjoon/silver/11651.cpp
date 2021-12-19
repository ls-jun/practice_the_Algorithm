#include<bits/stdc++.h>
using namespace std;
 

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main(){
    int a,tmpa, tmpb ;
    cin >>a;
    vector<pair<int, int>> nums;

    for(int i=0;i<a;i++){
        cin >> tmpa>> tmpb;
        nums.push_back(make_pair(tmpa,tmpb));
    }


    sort(nums.begin(), nums.end(),comp);

    for(int i=0;i<a;i++)
        cout<<nums[i].first<<" "<<nums[i].second<<"\n";

}