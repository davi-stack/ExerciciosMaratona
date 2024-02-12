
#include <bits/stdc++.h>
using namespace std;
string inver(string s){
    string r = "";
    for(int i = s.size()-1;i>=0;i--){
        r+=s[i];
    }
    return r;
}
int stringnum(string str){
    int soma=0;
    int tam = str.size();
    int n;
    string st = "";
    for(int i=0;i<str.size();i++){
        if(str[i]>'9'||str[i]<'0') break;
        st+=str[i];
    }
    string s = inver(st);
    for(int i=0;i<tam;i++){
        if(s[i]>'9'||s[i]<'0') return soma;
        n = s[i] - '0';
        soma+= n * pow(10, i);
    }
    return soma;
}
int nume(string s){
    int n;
    int soma =0;
    bool pegou = false;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0'&&s[i]<='9' ){
          if(!pegou) soma+= stringnum(s.substr(i, s.size()));
          pegou = true;
        }else{
            pegou = false;
        }
    }
    return soma;
}
int main()
{
    int n;
    cin >> n;
    string s;
    while(n--){
    cin >> s;
    cout << nume(s) << endl;
    }
    return 0;
}
