#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int, int>
#define vb vector<bool>
#define pib pair<int, bool>
const int INF = 1e9 + 7;
const int maxN = 1e6 + 5;
ll lcm(ll a, ll b)
{
    ll _gcd = __gcd(a, b);
    return (ll)a / _gcd * b;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    vector<ll> f(maxN);
    f[1] = 1;
    for (int i = 2; i < maxN; i++)
    {
        f[i] = lcm(f[i - 1], (ll)i);
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << f[n] << '\n';
    }
    return 0;
}