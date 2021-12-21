#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}
int main(){
    int n, old;
    string name;
    cin >>n;
    vector<pair<int, string>> list;
    while(n){
        cin >>old >>name;
        list.push_back(make_pair(old,name));
        n--;
    }
    stable_sort(list.begin(),list.end(), comp);
    for(int i=0;i<list.size();i++)
        cout<<list[i].first<<" "<<list[i].second<<"\n";
}