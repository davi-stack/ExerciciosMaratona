
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char mat[5][8];
    vector<bool> sl(4, false);
    vector<bool> sc(7, false);
    for(int i=0;i<5;i++){
        for(int j=0;j<8;j++){
            cin >> mat[i][j];
           
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<7;j++){
             if(mat[i][j]=='1'){
                 sl[i]= !sl[i];
                 sc[j]= !sc[j];
             }
        }
    }
    int x, y;
    for(int i=0;i<4;i++){
        //linha errada
        if(mat[i][7]=='1'&&!sl[i]){
            //troco
            x = i;
        }
        if(mat[i][7]=='0'&& sl[i]){
            //troco
            x = i;
        }
    }
    for(int i=0;i<7;i++){
        if(mat[4][i]=='1'&& !sc[i]){
            y = i;
        }
        if(mat[4][i]=='0'&& sc[i]){
            y = i;
        }
    }
    //trocar
    if(mat[x][y]=='0') mat[x][y] = '1';
    else mat[x][y] = '0';
    for(int i=0;i<5;i++){
        for(int j=0;j<8;j++){
            
          cout << mat[i][j]; 
            
        }
        cout << endl;
    }
     
     cout << endl;   
    
        
            
            
    return 0;
}