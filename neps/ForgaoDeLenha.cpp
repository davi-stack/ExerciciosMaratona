#include <bits/stdc++.h> 
using namespace std;

 int algarismos[11];
 int main() {
 string numero;
 cin >> numero;
 int i = -1;
n = numero.size();
int ult;
while(n>0){
for(i=n;i>0;i--){
if(numero[i]>numero[i-1]){
char aux = numero[i];
numero[i] = numero [i-1];
numero[i-1] = aux;
ult = i;
i = 15;
n = 10;
}
}
n--;
}
}
return 0;
 } 
