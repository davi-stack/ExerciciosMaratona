
#include <bits/stdc++.h>
using namespace std;
#define pr(a, b) pair<a, b>
#define vpi vector<pair<int, int>>
#define mk(a, b) make_pair(a, b)
int main()
{
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        cout << s[s.size()-i-1];
    }
    cout << endl;
    
    return 0;
}