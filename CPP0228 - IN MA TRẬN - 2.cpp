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
    vector<vi> a(4 * n, vi (4 * n));
    for (int i=0; i<4*n; i++)
        for (int j=0; j<4*n; j++)
            a[i][j] = 4 * n * i + j + 1;
    pii start = {2 * n, 2 * n - 1};
    cout << a[start.fi][start.se] << ' ';
    int len = 3;
    pii end = {4 * n - 1, 4 * n - 1};
    while(true) {
        // UP
        for (int i=1; i<len; i++) {
            cout << a[start.fi - i][start.se] << ' ';
        }
        start.fi -= (len - 1);
        // RIGHT
        for (int i=1; i<len; i++) {
            cout << a[start.fi][start.se + i] << ' ';
        }
        start.se += (len - 1);
        len += 2;
        if (len > 4 * n) len = 4 * n;
        // DOWN
        for (int i=1; i<len; i++) {
            cout << a[start.fi + i][start.se] << ' ';
        }
        start.fi += (len - 1);
        if (start == end) break;
        // LEFT
        for (int i=1; i<len; i++) {
            cout << a[start.fi][start.se - i] << ' ';
        }
        start.se -= (len - 1);
        len += 2;
    }
    cout << '\n';
    start = {2 * n - 1, 2 * n};
    cout << a[start.fi][start.se] << ' ';
    len = 3;
    end = {0, 0};
    while(true) {
        // DOWN
        for (int i=1; i<len; i++) {
            cout << a[start.fi + i][start.se] << ' ';
        }
        start.fi += (len - 1);
        // LEFT
        for (int i=1; i<len; i++) {
            cout << a[start.fi][start.se - i] << ' ';
        }
        start.se -= (len - 1);
        len += 2;
        if (len > 4 * n) len = 4 * n;
        // UP
        for (int i=1; i<len; i++) {
            cout << a[start.fi - i][start.se] << ' ';
        }
        start.fi -= (len - 1);
        if (start == end) break;
        // RIGHT
        for (int i=1; i<len; i++) {
            cout << a[start.fi][start.se + i] << ' ';
        }
        start.se += (len - 1);
        len += 2;
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