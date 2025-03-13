#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{
    int n ;  
    cin >> n  ; 
    
    vector<int>numbers( n ) ;  

    for( int i = 0 ;  i < n ; i++ ) 
    {
        cin >> numbers[i] ;  
    }
    
    int minValue = INT_MAX  ;  

    int firstElem  = numbers[0] ;  

    for( int i = 1 ;  i < n  ;  i++ ) 
    {
        firstElem = firstElem & numbers[i] ;  
    }

    cout << firstElem << endl  ;  


}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("D:/CodeForces/input", "r", stdin);
    freopen("D:/CodeForces/output", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

