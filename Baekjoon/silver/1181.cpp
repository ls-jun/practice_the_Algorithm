#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

bool comp(string a, string b){
    if (a.size() == b.size())
        return a<b;
    return a.size()<b.size();
}

int main(){
    int n;
    cin >> n;
    string tmp;
    vector<string> st;
    while(n--){
        cin >> tmp;
        st.push_back(tmp);
    }
    sort(st.begin(), st.end(), comp);
    cout<<st[0]<<"\n";
    for(int i=1; i<st.size();i++){
        if(st[i] == st[i-1])
            continue;
        cout<<st[i]<<"\n";
    }
    
}