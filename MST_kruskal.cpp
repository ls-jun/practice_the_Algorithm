#include<bits/stdc++.h>

using namespace std;

int getSet(int set[], int x) {

	if (set[x] == x) return x;

	return set[x] = getSet(set, set[x]);
}

void unionSet(int set[], int a, int b) {

	a = getSet(set, a);
	b = getSet(set, b);

	if (a < b)
		set[b] = a;
	else
		set[a] = b;

}

bool find(int set[], int a, int b) {
	a = getSet(set, a);
	b = getSet(set, b);
	if (a == b) return true;
	return false;
}

class Edge{
    public:
        int vertex[2];
        int distance;
        Edge(int a, int b, int distance){
            this->vertex[0] = a;
            this->vertex[1] = b;
            this->distance = distance;
        }
        bool operator <(Edge& edge){
            return this->distance < edge.distance;
        }
};

int main(){
    int t, n;
    cin >> t;
    for(int start=0; start<t; start++){
        cin >> n;
        vector <Edge> graph;
        for(int i=0; i<n; i++){
            int k,m;
            cin >>k>> m;
            for(int j=0;j<m; j++){
                int vtx, dis;
                cin >> vtx>> dis;

                if(k < vtx){
                    graph.push_back(Edge(k,vtx,dis));
                }
            }
        }
        sort(graph.begin(), graph.end());

        int set[n];
        for(int i=1; i<= n; i++){
            set[i] = i;
        }
        int answer = 0;
        for (int i = 0; i < graph.size(); i++) {
		    if (!find(set, graph[i].vertex[0], graph[i].vertex[1])) {
			    answer += graph[i].distance;
			    unionSet(set, graph[i].vertex[0], graph[i].vertex[1]);
		    }
	    }
	    cout << answer<<"\n";
    }

}

// 입력
// 테스트 횟수
// 노드 개수
// n번 노드, 노드 연결 노드 수, 연결노드명, edge
// ex
// 3 //3회 테스트
// 5 //5개의 노드로 구성된 그래프
// 1 3 2 1 4 8 5 5 // 1번노드엔 3개가 연결되있다 2랑은 1, 4랑은 8, 5랑은 5
// ...
// 출력 
// MST 엣지 합