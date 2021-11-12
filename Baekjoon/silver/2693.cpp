#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, tmp;
    cin >> n;
    vector<int> answer;
    for (int j = 0; j < n; j++)
    {
        vector<int> nums;
        for (int i = 0; i < 10; i++)
        {
            cin >> tmp;
            nums.push_back(tmp);
        }
        sort(nums.begin(), nums.end());
        answer.push_back(nums[7]);
    }
    for(int j=0;j<n;j++)
        cout<<answer[j]<<"\n";
}