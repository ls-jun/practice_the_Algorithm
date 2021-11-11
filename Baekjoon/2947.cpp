#include <bits/stdc++.h>

using namespace std;

void print(vector<int> a){
    for(int i = 0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}
bool check1(vector<int> a){
    for(int i = 0;i<a.size();i++){
            if(a[i] != i+1)
            return true;
        }
        return false;
}

int main(){
    int t, tmp;
    bool check=true;
    vector<int> num;
    for(int i = 0; i < 5; i++){
    cin >> t;
    num.push_back(t);
    }
    while(check){
        for(int i = 0; i < 4;i++){
            if(num[i]>num[i+1]){
                tmp = num[i];
                num[i] = num[i+1];
                num[i+1]=tmp;
                print(num);
            }
        }
        check = check1(num);
    }
}
