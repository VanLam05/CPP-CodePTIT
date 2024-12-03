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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vl cnt(m , 0);
    int res = 0;
    for (int i=0; i<n; i++) {
        vl tmp(m, 0);
        for (int num = 0; num < m; num++)
            tmp[(num * 10 + (s[i] - '0')) % m] += (ll) cnt[num];
        tmp[(s[i] - '0') % m]++;
        for (int i=0; i<m; i++)
            cnt[i] += (ll) tmp[i];
    }
    cout << cnt[0] << '\n';
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