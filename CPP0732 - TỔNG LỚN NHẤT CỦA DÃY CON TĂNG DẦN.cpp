#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define pii pair<int, int>
#define vb vector<bool>
#define pib pair<int, bool>
#define mii map<int, int>
#define mil map<int, ll>
#define mli map<ll, int>
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define yn yes else no
const int INF = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vi a(n + 1);
    for (int i=1; i<=n; i++) cin >> a[i];
    vi dp(n + 1, 0);
    for (int i=1; i<=n; i++)
        for (int j=0; j<i; j++)
            if (a[i] > a[j]) dp[i] = max(dp[i], dp[j] + a[i]);
    cout << *max_element(dp.begin(), dp.end()) << '\n';
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