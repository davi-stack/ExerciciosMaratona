
#include <bits/stdc++.h>

using namespace std;

class quadrado{
    public:
    int cor;//-1 sem cor e 0 cor
    int disDis;
    int disEsq;
    int dis(){
        if(disEsq== -1) return disDis;
        if(disDis== -1) return disEsq;
        if(disEsq>disDis) return disDis;
        return disEsq;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<quadrado> nums(n);
    cin >> nums[0].cor;
    //dis == -10 não existe a esq
    
    if(nums[0].cor==-1){
        //não tem co
        nums[0].disEsq = -1;
        }else{
          nums[0].disEsq = 0;
        }
    for(int i=1;i<n;i++){
        cin >> nums[i].cor;
        if(nums[i].cor==-1&&nums[i-1].disEsq>=0){
            nums[i].disEsq = nums[i-1].disEsq +1;
        }
        if(nums[i].cor==-1&&(nums[i-1].disEsq<0)){
            nums[i].disEsq = nums[i-1].disEsq;
        }
        if(nums[i].cor==0){
            nums[i].disEsq=0;
        }
    }
    if(nums[n-1].cor==-1){
        //não tem co
        nums[n-1].disDis = -1;
        }else{
          nums[n-1].disDis = 0;
        }
    for(int i=n-2;i>=0;i--){
       if(nums[i].cor==-1&&nums[i+1].disDis>=0){
            nums[i].disDis = nums[i+1].disDis +1;
        }
        if(nums[i].cor==-1&&(nums[i+1].disDis<0)){
            nums[i].disDis = nums[i+1].disDis;
        }
        if(nums[i].cor==0){
            nums[i].disDis=0;
        } 
    }
    int aux;
    for(int i=0;i<n;i++){
        aux = nums[i].dis();
        if(aux>=9) nums[i].cor = 9;
        else nums[i].cor = aux;
    }
    
    for(int i=0;i<n;i++){
        cout << nums[i].cor << " ";
    }
    cout << endl;
    

    return 0;
}
