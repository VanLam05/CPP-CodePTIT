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
    vector<vi> a(n, vi(n));
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];
    vi c(n, 0), r(n, 0);
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++) {
            r[i] += a[i][j];
            c[j] += a[i][j];
        }
    sort(r.rbegin(), r.rend());
    sort(c.rbegin(), c.rend());
    int sumr = 0, sumc = 0;
    for (int i=1; i<n; i++) {
        sumr += (r[0] - r[i]);
        sumc += (c[0] - c[i]);
    }
    cout << max(sumr, sumc) << '\n';
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