#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve()
{
    int n;
    cin >> n;

    vector<int> numbers;

    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;
        numbers.push_back(x);
    }

    if (n % 2 == 0)
    {
        cout << "2" << endl; // number of operations

        for (int i = 0; i < 2; i++)
        {
            cout << 1 << " " << n << endl;
        }
    }

    else if (n % 2 != 0 )
    {
        cout << 4 << endl;

        for (int i = 0; i < 2; i++)
        {
            cout << 1 << " " << n - 1 << endl;
        }

        for (int i = 0; i < 2 ; i++)
        {
            cout << n - 1 << " " << n << endl;
        }
    }
}
// void solve()
// {
//     int n;
//     cin >> n;

//     vector<int> numbers(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> numbers[i];
//     }

//     if (n == 1)
//     {
//         cout << 1 << " " << 1 << endl;
//         return;
//     }

//     if (n % 2 == 0)
//     {
//         cout << "2" << endl;
//         cout << 1 << " " << n << endl;
//         cout << 1 << " " << n << endl;
//     }
//     else
//     {
//         cout << "4" << endl;
//         cout << 1 << " " << n - 1 << endl;
//         cout << 1 << " " << n - 1 << endl;
//         cout << n - 1 << " " << n << endl;
//         cout << n - 1 << " " << n << endl;
//     }
// }
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
        solve();
    }

    return 0;
}

