#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
const int maxN = 1e3 + 5;
bool check(int a, int b)
{
    if (a == b)
        return false;
    if (a == 0) return false;
    if (a == 1)
        return b == 0;
    if (b == 0 || b == 1) return true;
    if (a == 2 && (b == 3 || b == 4)) return false;
    if (a == 3 && b == 2) return true;
    return a < b;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> X(maxN, 0), Y(maxN, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        X[x]++;
    }
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        Y[y]++;
    }
    ll res = 0;
    for (int x = 0; x < maxN; x++)
    {
        for (int y = 0; y < maxN; y++)
        {
            if (X[x] && Y[y] && check(x, y))
            {
                // cout << x << ' ' << y << '\n';
                res += (ll)X[x] * Y[y];
            }
        }
    }
    cout << res << '\n';
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}