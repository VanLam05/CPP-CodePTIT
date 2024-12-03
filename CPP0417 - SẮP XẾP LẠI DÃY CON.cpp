#include<bits/stdc++.h>
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
void solve()
{
    int n;
    cin >> n;
    vi a(n), b;
    for (int &x : a) {
        cin >> x;
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    int l = 0, r = n-1;
    while(l < n && a[l] == b[l]) l++;
    while(r > l && a[r] == b[r]) r--;
    cout << l + 1 << ' ' << r + 1 << '\n';
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