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
const int maxN = 1e6 + 5;
void solve()
{
    int n, m;
    cin >> n >> m;
    vb f1(n, 0), f2(m, 0);
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++) {
            bool a; cin >> a;
            if (a) {
                f1[i] = 1;
                f2[j] = 1;
            }
        }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << (f1[i] || f2[j]) << ' ';
        }
        cout << '\n';
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