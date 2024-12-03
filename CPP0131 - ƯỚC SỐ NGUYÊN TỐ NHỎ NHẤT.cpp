#include <bits/stdc++.h>
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
int find(int n) {
    for (int i=2; i*i <= n; i++)
        if (n % i == 0) return i;
    return n;
}
void solve()
{
    int n;
    cin >> n;
    for (int i=1; i<=n; i++)
        cout << find(i) << ' ';
    cout << '\n';
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}