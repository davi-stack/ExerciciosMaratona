
#include <bits/stdc++.h>

using namespace std;
bool contem(string a, char b){
    for(int i=0;i<a.size();i++){
        if(a[i]==b) return true;
    }
    return false;
}
int qualNum(vector<string> mapa, char aux){
    for(int i=0;i<mapa.size();i++){
       if(contem(mapa[i], aux)) return i+2;
    }
    return -1;
}

int main()
{
    int aux = 'a'-'z';
    vector<string> tam(8, "");
    int ct = 0;
    for(int i=0;i<8;i++){
        if(i==5||i==7){
        tam[i]+= 'A'+ ct;
        ct++;
         tam[i]+= 'A'+ ct;
        ct++;
         tam[i]+= 'A'+ ct;
        ct++;
         tam[i]+= 'A'+ ct;
        ct++;
        } else{
        tam[i]+= 'A'+ ct;
        ct++;
         tam[i]+= 'A'+ ct;
        ct++;
         tam[i]+= 'A'+ ct;
        ct++;
    }
    }
    // for(int i=0;i<8;i++){
    //     cout << tam[i] << endl;
    // }
    // if(contem(tam[1], "F")) cout << "Sim";
    //cout << qualNum(tam, 'A');
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i] == '-') cout << '-';
        else cout << qualNum(tam, s[i]);
    }
    cout << endl;
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
