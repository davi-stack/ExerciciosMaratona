#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int, int> pii;

vector<vector<pii>> adjList;
vector<int> minHoles;

void dijkstra(int start) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push(make_pair(0, start));
    minHoles[start] = 0;

    while (!pq.empty()) {
        int current = pq.top().second;
        int currentHoles = pq.top().first;
        pq.pop();

        if (currentHoles > minHoles[current])
            continue;

        for (auto& edge : adjList[current]) {
            int next = edge.first;
            int holesThroughEdge = edge.second;

            if (minHoles[next] > minHoles[current] + holesThroughEdge) {
                minHoles[next] = minHoles[current] + holesThroughEdge;
                pq.push(make_pair(minHoles[next], next));
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    adjList.resize(N + 2);
    minHoles.assign(N + 2, INT_MAX);

    for (int i = 0; i < M; i++) {
        int S, T, B;
        cin >> S >> T >> B;
        adjList[S].push_back(make_pair(T, B));
        adjList[T].push_back(make_pair(S, B));  // As pontes são bidirecionais
    }

    dijkstra(0);  // Começando do pilar 0

    cout << minHoles[N + 1] << endl;  // Imprimindo o mínimo de buracos até o acampamento

    return 0;
}
