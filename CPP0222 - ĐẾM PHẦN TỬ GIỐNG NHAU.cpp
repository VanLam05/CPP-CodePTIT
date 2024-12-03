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
    vector<vi> a(n, vi(n));
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];
    set<int> s;
    for (int j=0; j<n; j++)
        s.insert(a[0][j]);
    for (int i=1; i<n; i++) {
        set<int> tmp;
        for (int j=0; j<n; j++)
            if (s.count(a[i][j])) tmp.insert(a[i][j]);
        s = tmp;
    }
    cout << s.size() << '\n';
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