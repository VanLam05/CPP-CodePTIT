#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
#define fi first
#define se second
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
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
int bMuil(const int &a, const int &b, const int &c)
{
    if (b == 0)
        return 0;
    int tmp = bMuil(a, b / 2, c);
    tmp = (tmp * 2) % c;
    if (b & 1)
    {
        tmp = (tmp + a) % c;
    }
    return tmp;
}
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    a %= c;
    b %= c;
    cout << bMuil(a, b, c) << '\n';
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