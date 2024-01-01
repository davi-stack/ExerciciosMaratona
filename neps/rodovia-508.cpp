
#include <bits/stdc++.h>

using namespace std;
class cidade{
    public:
    int num;
    vector<cidade*> destinos; 
    vector<cidade*> invertido;
    int visF;
    int visI;
    cidade(){
        visF = -1;
        visI = -1;
    }
    void DFSVisita(){
        this->visF = 1;
    for(int i=0;i<this->destinos.size();i++){
        if(destinos[i]->visF==-1) destinos[i]->DFSVisita();
    }
}
void DFSVisitaI(){
        this->visI = 1;
    for(int i=0;i<this->invertido.size();i++){
        if(invertido[i]->visI==-1) invertido[i]->DFSVisitaI();
    }
}

};

int main()
{
    int n;
    cin >> n;
    int s, d;
    vector<cidade> reino(n);
    for(int i=0;i<n;i++){
        reino[i].num = i;
    }
    for(int i=0;i<n;i++){
        cin >> s >> d;
        reino[s-1].destinos.push_back(&(reino[d-1]));
        reino[d-1].invertido.push_back(&(reino[s-1]));
    }
    bool vist = true;
    reino[0].DFSVisita();
    reino[0].DFSVisitaI();
    
    //reino[0].DFSVisitaI(aux2);
    for(int i=0;i<n;i++){
        if(reino[i].visF==-1||reino[i].visI==-1) vist = false;
    }
    
    if(vist) cout << "S" << endl;
    else cout << "N" << endl;
    
    
    
    
    
    return 0;
}


