// VanLam 
// https://www.facebook.com/van.lam.205/
// ITPTIT Club
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int, int>
#define vb vector<bool>
#define pib pair<int, bool>
const int INF = 1e9 + 7;
const int maxN = 1e6 + 5;
void solve()
{
    int n;
    cin >> n;
    vector<bool> f(maxN, false);
    for (int i=0; i<n; i++) {
        int a; cin >> a;
        if (a > 0) f[a] = true;
    }
    for (int i=1; i<maxN; i++)
        if (!f[i]) {
            cout << i << '\n';
            return;
        }
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
