#include <iostream>
#include <cstdlib>

using namespace std;

class ponto {
public:
    int x, y;
    int visitado;
    char  **mapa;
    int maxL, maxC;

    ponto(char **c, int l, int col) {
        this->mapa = c;
        maxL = l;
        maxC = col;
        x = 0;
        y = 0;
    }
//     void busca(int l, int col) {
    
//     mapa[l][col] = 'x';
//     visitado = 1; // Marcando como visitado
//     if(col+1<maxC && mapa[l][col+1] == 'H') busca(l, col + 1); // Direita
//     if(col-1>=0 &&mapa[l][col-1] == 'H') busca(l, col - 1); // Esquerda
//     if(l+1<maxL && mapa[l+1][col] == 'H')busca(l + 1, col); // Baixo
//     if(l-1>=0 && mapa[l-1][col] == 'H')busca(l - 1, col); // Cima

//     this->x = l;
//     this->y = col;
// }

    void busca(int l, int col) {
        mapa[l][col] = 'x';
        if (col + 1 < maxC && mapa[l][col + 1] == 'H') 
          return busca(l, col + 1);
        
        if (col - 1 >= 0 && mapa[l][col - 1] == 'H') 
            return busca(l, col - 1);
        
        if (l + 1 < maxL && mapa[l + 1][col] == 'H') 
            return busca(l + 1, col);
        
        if (l - 1 >= 0 && mapa[l - 1][col] == 'H') 
            return busca(l - 1, col);
        

        this->x = l;  // Correção: atribuir após a chamada recursiva
        this->y = col; // Correção: atribuir após a chamada recursiva
    }
};

int main() {
    int n, m; // Correção: trocar a variável l para m
    cin >> n >> m;
    
    char **mapa = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        mapa[i] = (char*)malloc(m * sizeof(char));
    }

    int pHer, pYher;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mapa[i][j];
            if (mapa[i][j] == 'o') {
                pHer = i;
                pYher = j;
            }
        }
    }

    ponto p(mapa, n, m);
    p.busca(pHer, pYher);
    cout << p.x +1<< " " << p.y +1 << endl;
    



    // Liberar a memória alocada
    for (int i = 0; i < n; i++) {
        free(mapa[i]);
    }
    free(mapa);

    return 0;
}


