
#include <bits/stdc++.h>

using namespace std;
bool sCon(string a, string b){
    if (a.find(b) != string::npos) return true;
    return false;
}
bool especial(string a){
    bool exist = false;
    string pP = a.substr(0, a.size()/2);
    string sP = a.substr(a.size()/2, a.size());
    for(int i=0;i<a.size()/2;i++){
        if(sCon(sP,a.substr(i, 2))){
            exist = true;
        }
    }
    return exist;
    
}
int maiorEspecial(string a){
    if(a.size()<5) return -1;
    if(especial(a)) return a.size();
    
    int dir = maiorEspecial(a.substr(0,a.size()-1));
    int esq = maiorEspecial(a.substr(1,a.size()));
    if(dir>esq) return dir;
    return esq;
}

int main()
{
    string a;
    cin >> a;
    
    cout << maiorEspecial(a) << endl;
    return 0;
}
