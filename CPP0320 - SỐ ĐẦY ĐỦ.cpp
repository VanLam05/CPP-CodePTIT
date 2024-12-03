#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int, int>
#define vb vector<bool>
#define pib pair<int, bool>
#define YES cout << "YES\n"
#define NO cout << "NO\n"
const int INF = 1e9 + 7;
void solve()
{
    string s;
    cin >> s;
    vector<bool> f(10, false);
    if (s[0] == '0')
    {
        cout << "INVALID\n";
        return;
    }
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]))
        {
            f[s[i] - '0'] = true;
        }
        else
        {
            cout << "INVALID\n";
            return;
        }
    for (int i = 0; i < 10; i++)
        if (!f[i])
        {
            NO;
            return;
        }
    YES;
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