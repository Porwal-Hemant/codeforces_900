#include <bits/stdc++.h>
using namespace std;
// "|| "
#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{

    int a , b  ;   // possible moves of night 
    cin >> a  >> b  ; 

    int xk , yk  ; 
    cin >> xk >> yk  ; 

    int xq , yq  ; 
    cin >> xq >> yq  ;  
     
    if( abs( xk  - xq ) == 0   ) 
    {
        // case banao when in a single line 
        
        if( ( abs( yk  - yq ) / 2 ) % a == 0  || (abs( yk  - yq ) / 2 ) % b == 0  ) 
        {
            cout << "2" << endl  ; 
        }
        else 
        {
            cout << "0" << endl  ;  
        }

    }

    // when in diff diff positions ( not on a single line) have to make square
    // see if this sq side is equal to ( a + b ) or not 
    else if( abs( yk  - yq ) == 0    ) 
    {
        // case banao when in a single line 
        
        if( ( abs( xk  - xq ) / 2 ) % a == 0   || ( abs( xk  - xq ) / 2 ) % b == 0  ) 
        {
            cout << "2" << endl  ; 
        }
        else 
        {
            cout << "0" << endl  ;    
        }

    }

    else if( (abs( xk - xq ) == abs( yk - yq ) ) && ( abs( yk - yq )  == ( a + b ) ) ) 
    {
        // even and odd case banega idhar  
          
        if( abs( xk - xq ) % 2 != 0  ) 
        {
            // even vale case mai minus odd aayga  
            cout << "2" << endl ; 
        }

        else 
        {
            if( ( a == b ) && ( (abs( xk - xq ) / 2) == a ) ) 
            {
                cout << "1" << endl  ;  
            }
            else 
            {
                cout << "2" << endl ;  
            }
        }

    }
    else 
    {
        cout << "0" << endl   ;  
        // possible nahi hai kyoki square hee nahi bana rahe hai raja aur rani 
    }

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
    for (int i = 1; i <= t; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}


