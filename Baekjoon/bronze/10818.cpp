#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin >>a;
    int tmp, tmin, tmax;
    cin >>tmin;
    tmax=tmin;

    for(int i =0; i<a-1;i++){
        cin >> tmp;
        if(tmp>tmax) tmax=tmp;
        else if(tmp<tmin) tmin = tmp;
    }
    cout<<tmin<<" "<<tmax;
}