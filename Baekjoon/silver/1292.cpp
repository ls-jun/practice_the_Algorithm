#include<iostream>

using namespace std;

int main(){
    int nums[1002];
    int a, b,tmp=1,sum=0;
    cin >>a>>b;
    for(int i=0;i<1001;){
        for(int j=0;j<tmp;j++){
            nums[i++]=tmp;
            if (a<=i && i<=b)
                sum+=nums[i-1];
            if(b<i)
                break;
        }
        tmp++;
    }
    cout<<sum;
}