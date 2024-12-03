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
#define vii vector<vi>
#define vpi vector<pii>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define yn yes else no
#define ny no else yes
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int maxN = 1e6 + 5;
int calc(const vector<int> &h)
{
    int n = h.size();
    int res = 0;
    stack<int> s;
    int i = 0;
    while (i < n)
    {
        if (s.empty() || h[i] > h[s.top()])
        {
            s.push(i);
            i++;
        }
        else
        {
            int top = s.top();
            s.pop();
            int w = s.empty() ? i : i - s.top() - 1;
            int tmp = min(h[top], w);
            res = max(res, tmp);
        }
    }
    while (!s.empty())
    {
        int top = s.top();
        s.pop();
        int w = s.empty() ? i : i - s.top() - 1;
        int tmp = min(h[top], w);
        res = max(res, tmp);
    }
    return res;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vii a(n, vi(m));
    for (vi &i : a)
        for (int &j : i)
            cin >> j;
    vii dp(n, vi(m));
    for (int j = 0; j < m; j++)
        dp[0][j] = (a[0][j] == 1);
    for (int i = 1; i < n; i++)
        for (int j = 0; j < m; j++)
            dp[i][j] = (a[i][j] == 1 ? dp[i - 1][j] + 1 : 0);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        vi tmp(m);
        for (int j = 0; j < m; j++)
            tmp[j] = dp[i][j];
        res = max(res, calc(tmp));
    }
    cout << res << '\n';
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