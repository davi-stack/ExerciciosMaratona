#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int main() {
    int n, c, p;
    cin >> n >> c >> p;

    vector<vector<int>> connections(n);  // Conexões
    vector<vector<int>> followers(n);    // Seguidores
    for (int i = 0; i < c; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1) {
            // b se conecta com c
            connections[b].push_back(c);
        } else {
            // b segue c
            followers[b].push_back(c);
        }
    }

    queue<int> q;
    set<int> visited;
    q.push(p);
    visited.insert(p);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        // Adiciona seguidores
        for (int follower : followers[current]) {
            if (visited.find(follower) == visited.end()) {
                visited.insert(follower);
                q.push(follower);
            }
        }

        // Adiciona conexões
        for (int connection : connections[current]) {
            if (visited.find(connection) == visited.end()) {
                visited.insert(connection);
                q.push(connection);
            }
        }
    }

    visited.erase(p);  // Removendo 'p' da contagem final
    cout << visited.size() << endl;

    return 0;
}
