#include<iostream>
#include<string>

using namespace std;

int main(){
    int check = 665;
    int answer=0, n;
    cin >>n;
    string tmp;

    while(answer<n){
        check++;
        tmp = to_string(check);
        if(tmp.find("666")!=-1)
            answer++;
        
    }
    cout<<check;
}