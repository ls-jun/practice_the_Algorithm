#include <vector>
#include <set>
#include <iostream>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int size = nums.size();
    set<int> tmp;
    
    for(int i =0;i<size;i++)
        tmp.insert(nums[i]);
    
    if(tmp.size() >= size/2)
        answer = size/2;
    else
        answer = tmp.size();
    return answer;
}