
#include <bits/stdc++.h>

using namespace std;
class matrix{
    public:
    int tam;
    matrix(int n){
        this->tam =n;
        nums = (int **) malloc(n*sizeof(int*));
        for(int i=0;i<n;i++){
            nums[i] = (int*) malloc(n*sizeof(int));
        }
    }
    int ** nums;
    bool igLinha(){
        bool ig = true;
        for(int i=1;i<tam;i++){
            if(somaL(i)!=somaL(i-1)){
                ig = false;
                return ig;
            }
        }
        return ig;
    }
    bool igCol(){
        bool ig = true;
        for(int i=1;i<tam;i++){
            if(somaC(i)!=somaC(i-1)){
                ig = false;
                return ig;
            }
        }
        return ig;
    }
    
    bool magicMatrix(){
        if(!igCol()||!igLinha()||!isEqDi()) return false;
        return (somaC(0)==somaL(0)&& somaL(0)==somaD1());
    }
    bool isEqDi(){
        return somaD1()==somaD2();
    }
    int somaD1(){
        /*
        x u u 
        u x u
        u u x
        */
    int som = 0;
    for(int i=0;i<tam;i++){
        som += nums[i][i];
    }
    return som;
    }
    int somaD2(){
        /*
        u u x
        u x u
        x u u
        */
    int som = 0;
    for(int i=0;i<tam;i++){
        som += nums[tam -1- i][i];
    }
    return som;
    }
    int somaC(int n){
        int som =0;
        for(int i=0;i<tam;i++){
            som += nums[i][n];
        }
        return som;
    }
    int somaL(int n){
        int som =0;
        for(int i=0;i<tam;i++){
            som += nums[n][i];
        }
        return som;
    }
        
};
int main()
{
    int n; 
    cin >> n;
    int aux;
    matrix j(n);
    for(int i=0;i<n;i++){
        for(int ii=0;ii<n;ii++){
            cin >> aux;
            j.nums[i][ii] = aux;
        }
    }
    //cout << j.somaC(2) << endl;
    if(j.magicMatrix()) cout << j.somaD1() << endl;
    else cout << -1 << endl;

    return 0;
}














