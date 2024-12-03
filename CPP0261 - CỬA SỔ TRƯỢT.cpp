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
    int m;
    cin >> m;
    vector<vi> b(m, vi(m));
    for (int i=0; i<m; i++)
        for (int j=0; j<m; j++)
            cin >> b[i][j];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            cout << a[i][j] * b[i % m][j % m] << ' ';
        cout << '\n';
    }
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