#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
//1 : n
//2 : 2,n
//3 : 33,11,22,44,55
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> playerA {1, 2, 3, 4, 5};                //5
    vector<int> playerB {2, 1, 2, 3, 2, 4, 2, 5};       //8
    vector<int> playerC {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}; //10
    int keya=0,keyb=0,keyc=0;
    for(int i=0; i<answers.size();i++){
        if (answers[i] == playerA[i%5])
            keya++;
        if(answers[i] == playerB[i%8])
            keyb++;
        if(answers[i] == playerC[i%10])
            keyc++;
    }

    if(keya==temp) answer.push_back(1);
    if(keyb==temp) answer.push_back(2);
    if(keyc==temp) answer.push_back(3);

    
    return answer;
}