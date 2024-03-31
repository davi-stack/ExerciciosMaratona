
#include <bits/stdc++.h>
using namespace std;
#define pr(a, b) pair<a, b>
#define vpi vector<pair<int, int>>
#define mk(a, b) make_pair(a, b)
int main()
{
    int n;
    cin >> n;
    int rash = 1;
    for(int i=0;i<n;i++){
        int j = rash;
        int esp = n - (i+1) ;
        for(int k=0;k<esp;k++){
            cout << " ";
        }
        for(int l =0;l<j;l++) cout << "#";
        cout << endl;
        rash+=2;
    }
    
    
    
    
    return 0;
}