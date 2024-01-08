#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int findMinVertex(int keys[], bool mstSet[], int vertices) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < vertices; v++) {
        if (mstSet[v] == false && keys[v] < min)
            min = keys[v], min_index = v;
    }

    return min_index;
}

void primMST(int** graph, int vertices) {
    int parent[vertices]; // Array para armazenar a árvore geradora mínima
    int keys[vertices];   // Valores usados para escolher arestas de peso mínimo
    bool mstSet[vertices];  // Representa o conjunto de vértices incluídos na MST

    // Inicialize todas as chaves como infinito e mstSet[] como falso
    for (int i = 0; i < vertices; i++) {
        keys[i] = INT_MAX, mstSet[i] = false;
    }

    // Sempre inclua o primeiro vértice na MST.
    keys[0] = 0;     
    parent[0] = -1; // Primeiro nó é sempre a raiz da MST

    for (int count = 0; count < vertices - 1; count++) {
        // Encontre o vértice com a chave mínima dentre o conjunto de vértices ainda não incluído na MST
        int u = findMinVertex(keys, mstSet, vertices);

        // Adicione o vértice escolhido ao conjunto da MST
        mstSet[u] = true;

        // Atualize o valor da chave e o índice do pai dos vértices adjacentes do vértice escolhido.
        for (int v = 0; v < vertices; v++) {

            // graph[u][v] é diferente de zero apenas para os vértices adjacentes de m,
            // mstSet[v] é falso para vértices ainda não incluídos na MST,
            // Atualize a chave somente se graph[u][v] for menor que a chave[v]
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < keys[v])
                parent[v] = u, keys[v] = graph[u][v];
        }
    }

    // Imprima a árvore geradora mínima construída
    cout << "Edge \tWeight\n";
    for (int i = 1; i < vertices; i++)
        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << " \n";
}
int main() {
    /* Let's assume that the graph is:
        (0)--2--(1)--3--(2)
         |    /   \    |
        6| 8/     \5  |7
         | /       \  |
        (3)-------4--(4)
    */

    int vertices = 5;
    int** graph = new int*[vertices];
    for (int i = 0; i < vertices; i++) {
        graph[i] = new int[vertices];
        for (int j = 0; j < vertices; j++) {
            graph[i][j] = 0;
        }
    }

    // Adicionando as arestas e seus pesos
    graph[0][1] = 2;
    graph[1][0] = 2;
    graph[1][2] = 3;
    // ... Adicione todas as outras arestas conforme necessário

    // Chame a função primMST
    primMST(graph, vertices);

    return 0;
}

 


