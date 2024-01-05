
#include <bits/stdc++.h>

using namespace std;

class seq{
    public:
    int n;
    int quant;
    seq(){
        int num =0;
        int quant =0;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<seq> nums(n);
    int aux;
    cin >> aux;
    nums[0].n = aux;
    nums[0].quant ++;
    int at =0;
    for(int i=1;i<n;i++){
        cin >> aux;
        if(aux == nums[at].n){
            nums[at].quant++;
        }else{
            at++;
            nums[at].n = aux;
            nums[at].quant ++;
        }
    }
    int max =0;
    for(int i=0;i<n;i++){
        if(nums[i].quant>max){
            max = nums[i].quant;
        }
    }
    cout << max << endl;
    return 0;
}
