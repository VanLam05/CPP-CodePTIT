#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define vl vector<ll>
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
const int maxN = 1e5 + 5;
void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cnt[a] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        if (cnt[a])
        {
            cnt[a] = 2;
        }
        else
        {
            cnt[a] = 1;
        }
    }
    for (auto it : cnt)
        cout << it.fi << ' ';
    cout << '\n';
    for (auto it : cnt)
        if (it.se == 2)
            cout << it.fi << ' ';
    cout << '\n';
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