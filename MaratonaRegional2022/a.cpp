
#include <bits/stdc++.h>
using namespace std;
#define pr(a, b) pair<a, b>
#define vpi vector<pair<int, int>>
#define mk(a, b) make_pair(a, b)
int main()
{
    int n;
    cin >> n;
    vpi nums(n);
    int a,  b;
    double z = -100000;
    int x, y;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        nums[i].first = a;
        nums[i].second = b;
    }
     for(int i=0;i<n;i++){
         
         if((double) nums[i].first/nums[i].second >z){
             x = nums[i].first;
             y = nums[i].second;
             z = (double) nums[i].first/nums[i].second;
         }
     }
    
    
    
    cout << x << " " << y << endl;
    
    
    
    
    
    
    
    
    
    
    return 0;
}