#include<iostream>

using namespace std;
int main(){
    int n,x1,y1,r1,x2,y2,r2, answer,dist,mi,ad;
    cin>>n;
    while(n--){
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        dist = (x1-x2)*(x1-x2) + (y1 - y2)*(y1 - y2);
        mi = (r1-r2)*(r1-r2);
        ad = (r1+r2)*(r1+r2);

        if(dist==0){
            if(mi ==0)  cout <<"-1\n";
            else        cout <<"0\n";
        }
        else if(dist==mi || dist==ad) cout<<"1\n";
        else if(mi<dist && dist<ad)  cout<<"2\n";
        else                    cout<<"0\n";



    }
}