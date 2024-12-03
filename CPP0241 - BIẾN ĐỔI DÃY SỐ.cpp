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
    int l = 0, r = n-1;
    int cnt = 0;
    while(l < r) {
        if (a[l] < a[r]) {
            l++;
            a[l] += a[l-1];
            cnt++;
        } else if (a[l] > a[r]) {
            r--;
            a[r] += a[r+1];
            cnt++;
        } else {
            l++;
            r--;
        }
    }
    cout << cnt <<'\n';
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