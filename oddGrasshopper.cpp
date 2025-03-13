#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long 
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{     

     int xo ;  
     int n ;  
     cin >> xo  >> n  ;   

     int desiredSteps =  n % 4  ;
     int factor = n / 4   ;    // n = 11  
     int newFactor = factor * 4  ;  
     int steps = newFactor + 1  ;   
     
     int currPos = xo ; 

     while( desiredSteps >  0  ) 
     {
         if( currPos % 2 == 0 ) 
         { 
              currPos = currPos - steps  ; 
         }
         else 
         {
            currPos = currPos + steps  ;              
         }
        
        desiredSteps-- ; 
        steps++ ;  
     }

     cout << currPos << endl ; 
     
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

