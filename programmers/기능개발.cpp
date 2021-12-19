#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    if(speeds.size()==1){
        answer.push_back(1);
        return answer;
    }
    
    vector<int> temp;
    int tmp;
    for (int i =0; i<progresses.size();i++){
        if ((100-progresses[i]) % speeds[i] >0)
            temp.push_back((100-progresses[i]) / speeds[i]+1);
        
        else
            temp.push_back((100-progresses[i]) / speeds[i]);
    }
    
    int idx = 1;
    
    tmp = temp[0];
    for (int i =1; i<temp.size();i++){
        if(temp[i] <= tmp)
            idx++;
        else{
            answer.push_back(idx);
            idx=1;
            tmp=temp[i];
        }
    }
    answer.push_back(idx);
    
    return answer;
}