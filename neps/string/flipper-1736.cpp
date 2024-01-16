#include <iostream>

using namespace std;
void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}
void trH(int *a){
    //2x2
    trocar(&(a[0]), &(a[2]));
    trocar(&(a[1]), &(a[3]));

}
void trV(int *a){
    //2x2
    trocar(&(a[0]), &(a[1]));
    trocar(&(a[2]), &(a[3]));
}
int main()
{
    string s;
    cin >> s;
    int *matrix = (int *) malloc(4*sizeof(int));
    matrix[0] = 1;
    matrix[1] = 2;
    matrix[2] = 3;
    matrix[3] = 4;
    long int ctV =0;
    long int ctH =0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='H') ctH++;
        if(s[i]=='V') ctV++;
    }
    for(int i=0;i<ctV%4;i++){
        trV(matrix);
    }
    for(int i=0;i<ctH%4;i++){
        trH(matrix);
    }
    cout << matrix[0] << " " << matrix[1] << endl;
    cout << matrix[2] << " " << matrix[3] << endl;
    
    
    
    return 0;
}
