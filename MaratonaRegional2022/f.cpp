
#include <bits/stdc++.h>
using namespace std;
#define vvc vector<vector<char>>
#define vvi vector<vector<int>>
int ml, mc;
bool fora(int i, int j){
    if(i>=ml || i<0) return true;
    if(j>=mc|| j<0) return true;
    return false;
}
bool lado(int i, int j){
    if(i==0||i==ml-1||j==mc-1||j==0) return true;
    return false;
}
bool permite(vvi *mat, int i, int j){
    if(fora(i, j)) {
        return false;
    }
    if(lado(i, j) && (*mat)[i][j]==1 ) return true;
    
    if((*mat)[i][j]!=1){ 
        return false;
    }
    (*mat)[i][j] = 0;
    if(!fora(i-1, j)){
        if(permite(mat, i-1, j)){
            (*mat)[i][j] = 1;
            return true;
        }
    }
    if(!fora(i+1, j)){
        
        if(permite(mat, i+1, j)){
            (*mat)[i][j] = 1;
            return true;
        }
    }
    if(!fora(i, j-1)){
        
        if(permite(mat, i, j-1)){
            (*mat)[i][j] = 1;
            return true;
        }
    }
    if(!fora(i, j+1)){
        
        if(permite(mat, i, j+1)){
            (*mat)[i][j] = 1;
            return true;
        }
    }
    
    
    (*mat)[i][j] = 0;
    return false;
}


int main()
{
    int n, m;
    cin >> n >> m;
    ml = n;
    mc = m;
    vvi mat(n, vector<int>(m, 1));
    vvi aux(n, vector<int>(m, -1));
    char x;
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        for(int j=0;j<m;j++){
            mat[i][j] = s[j] - '0';
        }
    }
    
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            if(mat[i][j]==1) permite(&mat, i, j);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << mat[i][j];
        }
        cout << endl;
    }
    
    return 0;
}