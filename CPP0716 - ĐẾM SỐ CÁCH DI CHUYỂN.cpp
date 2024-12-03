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
int n, k, cnt;
vector<vi> a;
void backTrack(int x, int y, int sum) {
    if (sum == k && x == n - 1 && y == n - 1) {
        cnt++;
        return;
    }
    if (x != n - 1) backTrack(x + 1, y, sum + a[x + 1][y]);
    if (y != n - 1) backTrack(x, y + 1, sum + a[x][y + 1]);
}
void solve()
{
    cin >> n >> k;
    a.assign(n, vi (n , 0));
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];
    cnt = 0;
    backTrack(0, 0, a[0][0]);
    cout << cnt << '\n';
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