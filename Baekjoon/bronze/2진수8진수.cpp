#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;

int main(){
    string a;
    cin >> a;
    vector <int> queue;
    int i = a.size();
    int temp = 0;
    int mul = 1,idx=0,checkidx=0;
    vector<int> answer;
    while(i--){
        queue.push_back(a[i]-'0');
        checkidx++;
        if(queue.size()%3==0){
            while(checkidx--){
                temp += queue[idx]*mul;
                mul*=2;
                
                // cout<<"temp " << queue[idx]<<"\n";
                idx++;
            }
            mul =1;
            answer.push_back(temp);
            temp = 0;
            checkidx=0;
        }
    }
    if(checkidx !=0){
    while(checkidx--){
        temp += queue[idx]*mul;
        mul*=2;
        
        // cout<<"temp " << queue[idx]<<"\n";
        idx++;
    }
    answer.push_back(temp);
    }
    string result="";
    for(int i =answer.size()-1; i>=0;i--)
        result+=to_string(answer[i]);
    cout<<result;
}