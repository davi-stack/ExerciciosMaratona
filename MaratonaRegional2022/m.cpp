
#include <bits/stdc++.h>
using namespace std;
#define pr(a, b) pair<a, b>
#define vpi vector<pair<int, int>>
#define mk(a, b) make_pair(a, b)
#define vi vector<int>
int main()
{
    int n, v, x;
    cin >> n >> v;
    vi nums(n);
    for(int i=0;i<n;i++){
        cin >> x;
        nums[i] = x;
    }
    sort(nums.begin(), nums.end(),[](int a, int b){
        return b<a;
    });
    //cout << "Nums: " << nums[0] << " " << nums[1]<< endl;
    double tes = (double) v /(nums[0]+nums[1]);
    int k =  v /(nums[0]+nums[1]);
    if( tes > (double) k) k++; 
    //cout << k << endl;
    if(k*nums[0] + (k-1)*nums[1]>=v)cout << 2*k -1 << endl;
    else cout << 2*k << endl;
    
    return 0;
}