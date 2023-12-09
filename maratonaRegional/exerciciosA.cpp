#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
string s;
cin >>n;
cin >> s;
int cMin= -1;
int aux=0;
int acum=0;
for(int i=0;i<n;i++){
   if(cMin==-1&&s[i]=='c'){
   cMin = i;
}

 if(cMin!=-1){

if(s[i]=='v'){
acum++;
}else{
aux+= acum;
acum =0;
}


}

}
cout << aux<< "\n";

}
