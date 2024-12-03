#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int, int>
#define vb vector<bool>
#define pib pair<int, bool>
const int INF = 1e9 + 7;
ll lcm(ll a, ll b)
{
    return (ll)a / __gcd(a, b) * b;
}
ll bPow(int k)
{
    if (k == 0)
        return 1;
    ll tmp = bPow(k / 2);
    tmp *= tmp;
    if (k & 1)
        return (ll)tmp * 10;
    return tmp;
}
void solve()
{
    ll x, y, z, n;
    cin >> x >> y >> z >> n;
    if (n == 0)
    {
        cout << -1 << '\n';
        return;
    }
    ll num = lcm(lcm(x, y), z);
    ll base = bPow(n - 1);
    if (num >= base)
    {
        if (num / base < 10)
        {
            cout << num << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
        return;
    }
    ll k = (base - 1) / num + 1;
    num *= k;
    if (num / base < 10)
    {
        cout << num << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
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