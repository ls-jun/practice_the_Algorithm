#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, tmp, check, answer=0;
    cin >> n;
    while(n--){
        cin >> tmp;
        check=0;
        if(tmp<2)
            continue;
        else{
            for(int i=2;i<=sqrt(tmp);i++){
                if(tmp%i == 0)
                    check++;
            }
            if(!check) answer++;
        }
    }
    cout<<answer;
}