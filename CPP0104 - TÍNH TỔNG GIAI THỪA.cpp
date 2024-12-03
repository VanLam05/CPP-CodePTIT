#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int, int>
#define vb vector<bool>
#define pib pair<int, bool>
const int INF = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    ll sum = 0;
    ll gt = 1;
    for (int i=1; i<=n; i++) {
        gt *= (ll) i;
        sum += (ll) gt;
    }
    cout << sum;
}
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}