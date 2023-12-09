#include <iostream>

using namespace std;
int padrao [3][3];
padrao[0][0] = 1;
padrao[0][1] = 2;
padrao[0][2] = 3;
padrao[1][0] = 4;
padrao[1][1] = 5;
padrao[1][2] = 6;
padrao[2][0] = 7;
padrao[2][1] = 8;
padrao[2][2] = 0;
void mover(int *tabu){
int lin;
int col;
int *mov(int *t){
int vL;
int vC;
for(int i=0;i<3;i++){
for(int ii=0;ii<3;ii++){
if(mov[i][ii]==0){
vL = i;
vC = ii;
}
}
int tes1[3][3], tes2[3][3], tes3[3][3], tes4[3][3];

//copiar o orignal para um teste
for(int i=0;i<3;i++){
 for(int ii=0;ii<3;ii++){
tes1[i][ii] = t[i][ii];
tes2[i][ii] = t[i][ii];
tes3[i][ii] = t[i][ii];
tes4[i][ii] = t[i][ii];
}
}
int pos1, pos2, pos3, pos4;
//teste primeiro movimento
int l, c;
if(vL+l>=3){
pos1 = 100000;
}else{
tes1[vL][vC]= tes1[vL+l][vC];
}
abs



}

int main()
{
    int teste[3][3];
    for(int i=0;i<3;i++){
    for(int ii=0;ii<3;ii++){
    cin >> teste[i][ii];
}
}
    
    return 0;
}
