#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int, int>
#define vb vector<bool>
#define pib pair<int, bool>
const int INF = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vi aa(n + 1);
    aa[0] = 0;
    for (int i=1; i<=n; i++) {
        int a;
        cin >> a;
        aa[i] = aa[i-1] + a;
    }
    for (int i=1; i<=n; i++) {
        if (aa[i-1] == aa[n] - aa[i]) {
            cout << i << '\n';
            return;
        }
    }
    cout << -1 << '\n';
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