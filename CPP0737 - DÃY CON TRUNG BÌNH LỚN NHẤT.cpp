#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (int &x : a)
        cin >> x;
    int tmp = 0;
    for (int i = 0; i < k; i++)
        tmp += a[i];
    int maxS = tmp;
    int maxInd = 0;
    for (int i = 1; i + k <= n; i++)
    {
        tmp = tmp - a[i - 1] + a[i + k - 1];
        if (maxS < tmp) {
            maxS = tmp;
            maxInd = i;
        }
    }
    for (int i = 0; i < k; i++)
        cout << a[i + maxInd] << ' ';
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