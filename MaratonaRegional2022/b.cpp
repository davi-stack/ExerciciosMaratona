
#include <bits/stdc++.h>
using namespace std;
#define pr(a, b) pair<a, b>
#define vpi vector<pair<int, int>>
#define mk(a, b) make_pair(a, b)
#define vi vector<int>
int main()
{
    int n;
    string s = "";
    char c;
    cin >> n;
    vector<int> vet;
    int ct =0;
    bool bloco = false;
    for(int i=0;i<n;i++){
        cin >> c;
        if(c=='C'&& bloco==false) bloco = true;
        if(c=='C'&&bloco==true){vet.push_back(ct);
        ct =0;}
        if(c=='V'&&bloco==true) ct++;
        
    }
    int soma =0;
    for(int i=0;i<vet.size();i++){
        soma += vet[i];
    }
    cout << soma;
    cout << endl;
    return 0;
}