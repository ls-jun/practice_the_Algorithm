#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, temp, temp2;
    pair <int, int> pp;
    cin >> n;
    vector <int> result;

    vector<pair<int,int> > nums;
    
    for(int i=0;i<n;i++){
        cin >> temp;
        cin >> temp2;
        nums.push_back(make_pair(temp, temp2));
    }

    for(int i=0;i<n;i++){
        int count =1;
        for(int j=0;j<n;j++){
            if ((nums[i].first < nums[j].first) and (nums[i].second < nums[j].second)){
                count++;
            }
        }
        cout<<count<<" ";
    }
    

}

