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
void solve()
{
    int m, n, a, b;
    cin >> m >> n >> a >> b;
    if (m > n)
        swap(m, n);
    int cnt = 0;
    for (int i = m; i <= n; i++)
        if (i % a == 0 || i % b == 0)
            cnt++;
    cout << cnt << '\n';
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