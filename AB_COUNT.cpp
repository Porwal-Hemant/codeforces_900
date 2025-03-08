#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

string solve()
{    

    string s ; 
    cin >> s  ; 

    string ans  ;  

    int lastIndex =  s.length() - 1   ; 
    
    // if( s[0] == s[lastIndex] ) 
    // {
    //     return s;  
    // }

    if( s[0] != s[lastIndex] ) 
    {
        s[0] =  s[lastIndex] ; 
    }

    return s ;  

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("D:/CodeForces/input", "r", stdin);
    freopen("D:/CodeForces/output", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        // cout << "Case #" << i << ": ";
        string ans  = solve();
        cout << ans << endl ;  
    }

    return 0;
}


