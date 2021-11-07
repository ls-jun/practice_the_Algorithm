#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    for(int p = 0; p < participant.size(); p++){
            if(participant[p] != completion[p]){
                answer = participant[p];
                return answer;
            }
    }

}