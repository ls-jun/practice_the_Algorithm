#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, N, M, temp;

    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> N >> M;
        unsigned long long  answer=1, tmp=1;
        vector<int> num;
        vector<int> mum;
        if(M/2 > N)     
            N = M-N;

        for(int j=N+1; j<=M;j++){
            num.push_back(j);//M...N+1;
        }

        for(int j=1; j<=M-N;j++){
            mum.push_back(j);
        }

        for(int j=0; j<mum.size();j++){
            for(int k=0; k<num.size();k++){
                if(num[k]%mum[j] == 0){
                    num[k]/=mum[j];
                    mum[j]/=mum[j];
                    continue;
                }
            }
        }


        for(int j=0; j<num.size();j++)
            answer*=num[j];
        for(int j=0; j<mum.size();j++)
            tmp*=mum[j];
        cout<<answer/tmp<<"\n";

    }
    return 0;
}
