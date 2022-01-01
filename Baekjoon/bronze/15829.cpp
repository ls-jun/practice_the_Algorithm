#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    long long l, answer=0;
    string alpha;
    int m = 1234567891;
    int r = 31;
    long long tmp=1;

    cin >>l>>alpha;
    
    for(int i =0; i<alpha.length(); i++){
        answer = (answer + (alpha[i] -'a' +1)*tmp)%m;
        tmp=(tmp*r)%m;
    }
    cout<< answer;
}