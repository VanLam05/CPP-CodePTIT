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
    vi a(n);
    for (int &x : a) cin >> x;
    int l, r;
    cin >> l >> r;
    if (l == r) {
        cout << "Yes\n";
        return;
    }
    int i = l + 1;
    while(i <= r && a[i] >= a[i-1]) i++;
    while(i <= r && a[i] <= a[i-1]) i++;
    if (i > r) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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