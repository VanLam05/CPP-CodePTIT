// VanLam 
// https://www.facebook.com/van.lam.205/
// ITPTIT Club
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int, int>
#define vb vector<bool>
#define pib pair<int, bool>

const int INF = 1e9 + 7;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll res = 0;
    if (n < k) {
        cout << (ll) n * (n + 1) / 2;
    } else {
        cout << (ll) k * (k - 1) / 2 * (n / k) + (n % k) * (n % k + 1) / 2;
    }
    cout << '\n';
}
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
