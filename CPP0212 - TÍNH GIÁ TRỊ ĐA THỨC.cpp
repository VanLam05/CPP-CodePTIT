#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int, int>
#define vb vector<bool>
#define pib pair<int, bool>
const ll INF = 1e9 + 7;
void solve()
{
    ll n, x;
    cin >> n >> x;
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        res = (ll)(a + res * x) % INF;
    }
    cout << res << '\n';
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}