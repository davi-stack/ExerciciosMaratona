#include <bits/stdc++.h>
using namespace std;
int main(){
//matriz nxm 
int n, m;
cin >> n;
cin >> m;
char matriz[n][m];
int i;
for(i=0;i<n;i++){
for(int ii=0;ii<m-1;ii++){
scanf("%c", &matriz[i][ii]);
}}
int ii = 0;

for(int i= n-1;i>=0;i--){ 
ii=0;
while((i+ii<=n-1)&&(i<=m-1)){
    printf("%c", matriz[i-ii][ii]);
    ii++;
}
}
for(int i=1;i<=m-1;i++){
ii=0;
while((i+ii<=m-1)&&(ii<=n-1)){
printf("%c", matriz[ii][i+ii]);
ii++;
}

}

}
