
#include <bits/stdc++.h>

using namespace std;
class Ponto{
    public:
    int num;
    vector<Ponto*> linhas;
    int busca(int j){
        int min = 100000;
        int aux =0;
        this->num = -1;
        for(int i=0;i<linhas.size();i++){
            if(linhas[i]->num==j) return 1;
        }
        
        for(int i=0;i<linhas.size();i++){
            if(linhas[i]->num!=-1){
            aux = linhas[i] ->busca(j);
            if( aux<min){
                min=aux;
            }
            }
        }
        return 1+min;
        
    }
//     int buscaAux(int j, vector<num> visitados){
//         int min;
//         int aux;
//         visitados.push_back(this->num);
//         for(int i=0;i<linhas.size();i++){
//             if(linhas[i]->num==j) return 1;
//         }
//         for(int i=o;i<linhas.size();i++){
//         aux = linhas[i] ->busca(j);
        
//             if( aux<min){
//                 min=aux;
//             }
//         }
//         return min;
//     }
};

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<Ponto> cidade(n);
    for(int i=0;i<n;i++){
        cidade[i].num = i;
    }
    int j, d;
    for(int i=1;i<n;i++){
        cin >> j >> d;
        cidade[j-1].linhas.push_back(&(cidade[d-1]));
        cidade[d-1].linhas.push_back(&(cidade[j-1]));
    }
    cout << cidade[a-1].busca(b-1) << endl;
    
    
    

    return 0;
}
