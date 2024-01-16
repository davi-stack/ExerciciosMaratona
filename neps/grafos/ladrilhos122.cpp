#include <iostream>
#include <cstdlib>

using namespace std;

class moldura {
public:
    int **ladrilhos;
    int menor;
    int maxL;
    int maxH;
    int tam(int x, int y) {
        return tamAux(x, y, ladrilhos[x][y]);
    }
    int tamAux(int x, int y, int proc) {
        if (x < 0 || y < 0 || x >= maxL || y >= maxH) return 0;
        if (ladrilhos[x][y] != proc) return 0;
        ladrilhos[x][y] = -1;
        return 1 + tamAux(x - 1, y, proc) + tamAux(x + 1, y, proc) + tamAux(x, y + 1, proc) + tamAux(x, y - 1, proc);
    }
    moldura(int **l, int x, int y) {
        this->ladrilhos = l; this->maxL = x; this->maxH = y;
    }
};

int main() {
    int h, l;
    cin >> h >> l;
    int **mosaico;
    mosaico = (int**)malloc(h * sizeof(int*));
    for (int i = 0; i < h; i++) {
        mosaico[i] = (int*)malloc(l * sizeof(int));
    }

    for (int i = 0; i < h; i++) {
        for (int ii = 0; ii < l; ii++) cin >> mosaico[i][ii];
    }
    int min = 100000;
    int num;
    moldura mol(mosaico, h, l);
    for (int i = 0; i < h; i++) {
        for (int ii = 0; ii < l; ii++) {
            if (mosaico[i][ii] != -1) {
                num = mol.tam(i, ii);
                if (num < min) min = num;
            }
        }
    }
    cout << min << endl;
    return 0;
}

