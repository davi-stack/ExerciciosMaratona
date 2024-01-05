
#include <bits/stdc++.h>

using namespace std;

class familia{
    public:
    int vis;
    vector<familia*> parentes;
    familia(){
        vis =0;
    }
    void DFS(){
        this->vis =1;
        for(int i=0;i<parentes.size();i++){
            if(parentes[i]->vis==0)parentes[i]->DFS();
        }
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    vector<familia> reino(n);
    int a, b;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        reino[a-1].parentes.push_back(&(reino[b-1]));
        reino[b-1].parentes.push_back(&(reino[a-1]));
    }
    int num =0;
    for(int i=0;i<n;i++){
        if(reino[i].vis ==0){
            num++;
            reino[i].DFS();
        }
    }
    cout << num << endl;
    
    
    
    
    
    
    
    
    
    return 0;
    
}
