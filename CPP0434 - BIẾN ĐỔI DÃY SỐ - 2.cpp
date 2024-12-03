#include<bits/stdc++.h>
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
    int n;
    cin >> n;
    vi a(n);
    for (int &x : a) cin >> x;
    for (int i=0; i<n; i++) {
        if (i == 0) cout << (ll) a[i] * a[i + 1] << ' ';
        else if (i == n - 1) cout << (ll) a[i] * a[i - 1] << ' ';
        else cout << (ll) a[i - 1] * a[i + 1] << ' ';
    }
    cout << '\n';
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