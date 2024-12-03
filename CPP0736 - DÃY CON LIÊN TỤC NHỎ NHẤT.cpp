#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int, int>
#define pib pair<int, bool>
#define pdd pair<double, double>
#define mii map<int, int>
#define mib map<int, bool>
#define mil map<int, ll>
#define mli map<ll, int>
#define si set<int>
#define vii vector<vi>
#define vpi vector<pii>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define yn yes else no
#define ny no else yes
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int maxN = 1e6 + 5;
void solve()
{
    int n;
    ll x;
    cin >> n >> x;
    vi a(n);
    for (int &x : a)
        cin >> x;
    int l = 0, r = 0;
    ll sum = 0;
    int res = INF;
    while (r < n)
    {
        while (r < n && sum <= x)
        {
            sum += (ll)a[r++];
        }
        while (l < r && (ll)sum - a[l] > x)
        {
            sum -= (ll)a[l++];
        }
        if (sum >= x)
        {
            res = min(res, r - l);
            sum -= (ll)a[l++];
        }
        sum -=(ll) a[l++];
    }
    cout << (res == INF ? -1 : res) << '\n';
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