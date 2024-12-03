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
    int n;
    cin >> n;
    vi aa(n + 1);
    aa[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        aa[i] = aa[i - 1] + a;
    }
    vi bb(n + 1);
    bb[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int b;
        cin >> b;
        bb[i] = bb[i - 1] + b;
    }
    for (int len = n; len > 0; len--)
    {
        for (int i = 1; i <= n - len + 1; i++)
        {
            if (aa[i + len - 1] - aa[i - 1] == bb[i + len - 1] - bb[i - 1])
            {
                cout << len << '\n';
                return;
            }
        }
    }
    cout << 0 << '\n';
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