#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    vector<string> mat(n, "");

    // Lendo a matriz da entrada
    for (int i = 0; i < n; i++) {
        cin >> mat[i];
    }

    // Percorrendo a diagonal principal e imprimindo os elementos
    for (int i = n - 1; i >= 0; i--) {
        int v = n - i;
        for (int j = 0; j < v; j++) {
            cout << mat[i + j][j];
        }
    }

    // Percorrendo a diagonal secundária e imprimindo os elementos
    for (int i = 1; i < m; i++) {
        int v = m - i;
        for (int j = 0; j < v; j++) {
            cout << mat[j][i + j];
        }
    } 

    cout << endl;
    return 0;
}
