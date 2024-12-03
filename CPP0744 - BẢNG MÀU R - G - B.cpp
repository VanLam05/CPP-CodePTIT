#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
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
void solve()
{
}
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    vl gt(21);
    gt[0] = 1;
    for (int i=1; i<=20; i++)
        gt[i] = (ll) gt[i-1] * i;
    while(t--)
    {
        int n, r, g, b;
        cin >> n >> r >> g >> b;
        ll res = 0;
        for (int rr = r; rr + g + b <= n; rr++) {
            for (int gg = g; rr + gg + b <= n; gg++) {
                int bb = n - rr - gg;
                res += (ll) gt[n] / (gt[rr] * gt[gg] * gt[bb]);
            }
        }
        cout << res << '\n';
    }
    return 0;
}