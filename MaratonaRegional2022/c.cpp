
#include <bits/stdc++.h>
using namespace std;
#define pr(a, b) pair<a, b>
#define vpi vector<pair<int, int>>
#define mk(a, b) make_pair(a, b)
#define vi vector<int>
int main()
{
    int n, k, x;
    cin >> n >> k;
    int som1 = 0, som2= 0;
    for(int i=0;i<n;i++){
        cin >> x;
        som1+=x;
    }
    for(int i=0;i<n;i++){
        cin >> x;
        som2+=x;
    }
    cout << floor(k/(som2+som1)) << endl;
    
    return 0;
}