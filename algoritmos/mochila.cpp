
#include <bits/stdc++.h>
#define pi pair<int, int>
#define mk(a, b) make_pair(a, b)
#define peso first
#define valor second
#define vpi vector<pi>
#define vi vector<int>
#define Item pi
using namespace std;
int mochila_recursivo_aux(const vector<Item>& itens, int capacidade, int index, vector<vector<int>>& memo) {
    // Se atingimos o final dos itens ou a capacidade é 0, retornamos 0
    if (index == 0 || capacidade == 0) {
        return 0;
    }
    // Se o valor já estiver sido calculado, retornamos o valor armazenado na tabela de memoização
    if (memo[index][capacidade] != -1) {
        return memo[index][capacidade];
    }
    // Se o peso do item atual for maior que a capacidade, passamos para o próximo item
    if (itens[index - 1].peso > capacidade) {
        return memo[index][capacidade] = mochila_recursivo_aux(itens, capacidade, index - 1, memo);
    }
    // Caso contrário, calculamos o máximo entre incluir o item atual e não incluí-lo
    else {
        return memo[index][capacidade] = max(
            itens[index - 1].valor + mochila_recursivo_aux(itens, capacidade - itens[index - 1].peso, index - 1, memo),
            mochila_recursivo_aux(itens, capacidade, index - 1, memo)
        );
    }
}
int mochila_recursivo(const vector<Item>& itens, int capacidade) {
    int n = itens.size();
    vector<vector<int>> memo(n + 1, vector<int>(capacidade + 1, -1)); // Inicializamos a tabela de memoização com -1
    
    return mochila_recursivo_aux(itens, capacidade, n, memo);
}
int main()
{
    vi aux(23);
    int maxP;
    int n, p;//numero de pedidos e maximo de pizzas
    cin >> n >> p;
    maxP = p;
    int tp, qp;
    vpi pedidos(23);
    for(int i=0;i<n;i++){
        cin >> tp >> qp;
        pedidos[i] = mk(tp, qp);
        aux[i] = -1;
    }
    

    return 0;
}