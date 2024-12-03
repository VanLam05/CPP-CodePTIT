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
    int res = -1;
    int minV = INF;
    for (int i=0; i<n; i++) {
        int a;
        cin >> a;
        if (a > minV) {
            res = max(res, a - minV);
        } else {
            minV = a;
        }
    }
    cout << res << '\n';
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