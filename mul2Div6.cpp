#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

// int solveDiv6( int n ) 
// {   

//     int num =  n  ; 
//     while( num % 6 == 0 ) 
//     {
//         num = num / 6  ;  
//     }
    
//     return num  ;  

// }

void solve() 
{   

    int n  ;  
    cin >>  n  ;    

    int count = 0 ;  

    int num = n  ; 
    while( num % 6 == 0 ) 
    {
        count++ ;  
        num = num / 6   ;  
    }

    // num reduced hokar jab aaya tab 

    while( num % 3 == 0 ) 
    {
        count++ ;    // multiply by 2 
        count++ ;    // divide by 6  
        num = num / 3  ; 
    }

    if( num  ==  1 ) 
    {
        cout << count << endl ;  
    }
    else 
    {
        cout << "-1" << endl ;  
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

