#include<bits/stdc++.h>

using namespace std;

double f2(double a){
    a= (round(a*100))/100;
    return a;
}
int main(){
    int n,k;
    double sum1=0.0,sum2=0.0, answer1, answer2;
    cin >>n>>k;
    double nums[n]={0.0,};

    for(int i=0; i<n;i++)
        cin>>nums[i];

    sort(nums, nums+n);

    answer1 = accumulate(nums+k, nums+n-k, (double)0) / (n-2*k);
    
    fill(nums, nums+k, nums[k]);
    fill(nums+n-k, nums+n, nums[n-k-1]);

    answer2 = accumulate(nums, nums+n, (double)0) / n;

    //cout<<answer1<<"\n"<<answer2;

    printf("%.2f\n%.2f", round(answer1*100)/100,round(answer2*100)/100);

}