
#include <bits/stdc++.h>
using namespace std;

    int main()
{
    int n, r;
    cin >> n >> r;
    int x, y;
    vector<int> pessoas(n, 0);
    for(int i=0;i<r;i++){
        cin >> x >> y;
        pessoas[x-1]++;
        pessoas[y-1]++;
    }
    int count =0;
    for(int i=0;i<n;i++){
        count += n-pessoas[i] -1;
    }
    
    
    cout<< count/2 << endl;

    return 0;
}
