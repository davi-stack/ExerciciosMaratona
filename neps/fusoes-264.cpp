#include <iostream>
#include <vector>

class UnionFind {
public:
    UnionFind(int n) : parent(n), rank(n, 0) {
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else {
                parent[rootX] = rootY;
                if (rank[rootX] == rank[rootY]) {
                    rank[rootY]++;
                }
            }
        }
    }

private:
    std::vector<int> parent;
    std::vector<int> rank;
};
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;

    UnionFind uf(n + 1); 

    char op;
    int b1, b2;

    for (int i = 0; i < k; i++) {
        cin >> op >> b1 >> b2;

        if (op == 'F') {
            uf.unionSets(b1, b2);
        } else {  // op == 'C'
            if (uf.find(b1) == uf.find(b2)) {
                cout << 'S' << endl;
            } else {
                cout << 'N' << endl;
            }
        }
    }

    return 0;
}

