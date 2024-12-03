#include<bits/stdc++.h>
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
#define mil map<int, ll>
#define mli map<ll, int>
#define si set<int>
#define vii vector<vi>
#define vpi vector<pii>
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define yn yes else no
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int maxN = 1e6 + 5;
void solve()
{
    int n;
    cin >> n;
    vector<vi> a(n + 1, vi(n + 1));
    for (int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin >> a[i][j];
    vector<vi> sum1(n + 2, vi (n + 2, 0));
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            sum1[i][j] = sum1[i - 1][j - 1] + a[i][j];
    vector<vi> sum2(n + 2, vi (n + 2, 0));
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            sum2[i][j] = sum2[i - 1][j + 1] + a[i][j];
    int res = 0;
    for (int len = 1; len <= n; len++) 
        for (int i=1; i<= n - len + 1; i++)
            for (int j=1; j<= n - len + 1; j++) {
                int tmp1 = sum1[i + len - 1][j + len - 1] - sum1[i - 1][j - 1];
                int tmp2 = sum2[i + len - 1][j] - sum2[i - 1][j + len - 1 + 1];
                res = max(res, tmp1 - tmp2);
            }
    cout << res;
}
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}