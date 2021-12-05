#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int answer = 0;
vector<vector<pair<int, int>>> edge(10001);
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
bool visited[10001];

void Prim(int v)
{
    visited[v] = true;
    for (auto a : edge[v])
    {
        if (!visited[a.second])
        {
            pq.push({a.first, a.second});
        }
    }
    while (!pq.empty())
    {
        pair<int, int> w = pq.top();
        pq.pop();
        if (!visited[w.second])
        {
            answer += w.first;
            Prim(w.second);
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int k, m;
            cin >> k >> m;
            for (int q = 0; q < m; q++)
            {
                int vtx, distance;
                cin >> vtx >> distance;
                edge[k].push_back(make_pair(distance, vtx));
                edge[vtx].push_back(make_pair(distance, k));
            }
        }
        Prim(1);
        cout << answer << "\n";
        for (int w = 0; w <= n; w++)
        {
            visited[w] = 0;
        }
        edge.erase(edge.begin(), edge.begin() + n + 1);
        answer = 0;
    }
    return 0;
}