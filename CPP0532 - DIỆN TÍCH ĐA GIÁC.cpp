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
    int n;
    cin >> n;
    vpi p(n + 1);
    for (int i=0; i<n; i++) {
        int x, y;
        cin >> x >> y;
        p[i] = {x, y};
    }
    p[n] = p[0];
    int area = 0;
    for (int i=0; i<n; i++)
        area += (p[i].fi * p[i + 1].se - p[i + 1].fi * p[i].se);
    cout << fixed << setprecision(3) << (double) area / 2 << '\n';
}
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}