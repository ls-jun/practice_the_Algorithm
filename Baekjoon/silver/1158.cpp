#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >>n>> k;
    int arr[n];
    vector<int> answer;

    for(int i=1;i<n;i++)
        arr[i] = i;
    arr[0] = n;

    int point=1;
    int check=0;
    
    while(answer.size()<n){
   
        if(arr[point%n] != 0)
            check++;
        
        if(check==k){
        answer.push_back(arr[point%n]);
        arr[point%n] = 0;
        check=0;
        }
        
        point++;
        
    }
    cout<<"<";
    for(int i=0;i<answer.size()-1;i++)
        cout<<answer[i]<<", ";
    cout<<answer.back()<<">";

    

    

}#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >>n>> k;
    int arr[n];
    vector<int> answer;

    for(int i=1;i<n;i++)
        arr[i] = i;
    arr[0] = n;

    int point=1;
    int check=0;
    
    while(answer.size()<n){
   
        if(arr[point%n] != 0)
            check++;
        
        if(check==k){
        answer.push_back(arr[point%n]);
        arr[point%n] = 0;
        check=0;
        }
        
        point++;
        
    }
    cout<<"<";
    for(int i=0;i<answer.size()-1;i++)
        cout<<answer[i]<<", ";
    cout<<answer.back()<<">";

    

    

}