#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, sum=0;
    double max=0.0;
    cin >>a;
    vector<int> nums(a);
    for (int i =0; i<a;i++){
        int num;
        cin >> num;
        nums[i] = num;
        if (max<num) max=num;
        sum+=num;
    }
    cout <<sum/(a*max)*100;
}