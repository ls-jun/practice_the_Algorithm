#include<bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin >> a;
    while(a){
        int check = 0;
        string in;
        cin >> in;
        for(int i=0; i<in.size();i++){
            if(check <0) {
                break;
            }
            if(in[i]=='(') check++;
            else if(in[i]==')') check--;
        }
        if(check == 0) cout<<"YES\n";
        else cout<<"NO\n";

        a--;
    }
}