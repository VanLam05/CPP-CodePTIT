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
#define vvi vector<vi>
#define vvl vector<vl>
#define vvb vector<vb>
#define vpi vector<pii>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sub(x, l, r) (x).begin() + l, (x).begin() + r
#define FOR(i, a, b) for (int i = a, _b = b; i <= _b; i++)
#define FORD(i, a, b) for (int i = a, _b = b; i >= _b; i--)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define yn yes else no
#define ny no else yes
// #define int ll
#ifdef VanLam
#include <debug.h>
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 1205
#endif
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int maxN = 1e6 + 5;
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    FOR(i, 0, n - 1)
    {
        cin >> a[i];
    }
    vi dp(n, 1);
    dp[0] = 1;
    FOR(i, 1, n - 1)
    {
        FOR(j, 0, i - 1)
        {
            if (a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    cout << *max_element(all(dp)) << '\n';
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("input.txt", "r"))
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    int t = 1;
    cin >> t;
    int testcase = 1;
    while (t--)
    {
        cerr << "------ CASE: " << testcase++ << " ------\n";
        solve();
        cerr << "-------- END --------\n";
    }
    return 0;
}