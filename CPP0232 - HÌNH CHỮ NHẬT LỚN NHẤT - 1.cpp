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
    int n, m;
    cin >> n >> m;
    vector<vi> a(n + 1, vi(m + 1));
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            cin >> a[i][j];
    vector<vi> cnt(n + 1, vi(m + 1, 0));
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            cnt[i][j] = (a[i][j] ? cnt[i-1][j] + 1 : 0);
    int res = 0;
    for (int i=1; i<=n; i++) {
        vi tmp(m + 1);
        for (int j=1; j<=m; j++)
            tmp[j] = cnt[i][j];
        sort(tmp.begin() + 1, tmp.end(), greater<int>());
        for (int j=1; j<=m; j++)
            res = max(res, tmp[j] * j);
    }
    cout << res << '\n';
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