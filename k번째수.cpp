#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (int m =0; m<commands.size(); m++){
        int i,j,k;
        vector<int> temp;  
        i=commands[m][0];
        j=commands[m][1];
        k=commands[m][2];
        
        for(int n = i-1;n<j;n++)
            temp.push_back(array[n]);
        sort(temp.begin(), temp.end());

        answer.push_back(temp[k-1]);
        
    }
    return answer;
}