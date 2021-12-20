#include<iostream>
using namespace std;



int main(){
    int n, tmp,ep=0,answer=0;
    int arr[100001]={0,};
    cin >>n;
    while(n){
        cin >>tmp;
        if(tmp != 0){
            arr[ep]=tmp;
            ep++;
        }
        else   
            ep--;

        n--;
    }
    for(int i=0; i<ep;i++)
        answer+=arr[i];

    cout<<answer;
}