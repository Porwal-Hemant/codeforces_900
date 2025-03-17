#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() {
    int a, b;
    cin >> a >> b;

    int xk, yk;
    cin >> xk >> yk;

    int xq, yq;
    cin >> xq >> yq;

    vector<pair<int, int>> directions = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };

    // Attacking positions for king and queen
    set<pair<int, int>> st1, st2;
    for (auto d : directions) {
        st1.insert({xk + d.first, yk + d.second});
        st2.insert({xq + d.first, yq + d.second});
    }

    int ans = 0;
    for (auto pos : st1) {
        if (st2.find(pos) != st2.end())
            ans++;
    }

    cout << ans << endl;
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

