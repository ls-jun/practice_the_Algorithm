#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp, push=1;
    cin >> n;
    int pop = n;
    vector<char> answer;
    stack<int> st;

    for(int i=0;i<n;i++){
        cin >> tmp;
        while(push<=tmp){
            st.push(push++);
            answer.push_back('+');
        }
        if(st.top() == tmp){
            answer.push_back('-');
            st.pop();
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    for(int i=0; i<answer.size();i++){
        cout<<answer[i]<<"\n";
    }
}