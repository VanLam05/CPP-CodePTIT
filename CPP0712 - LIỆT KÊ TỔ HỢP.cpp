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
int n, k;
vi a;
void put() {
    for (int i=0; i<k; i++)
        cout << a[i];
    cout << ' ';
}
void backTrack(int x, int pre) {
    if (x == k) {
        put();
        return;
    }
    for (int num = pre + 1; num <= n - k + x + 1; num++) {
        a[x] = num;
        backTrack(x + 1, num);
    }
}
void solve()
{
    cin >> n >> k;
    a.assign(k, 0);
    backTrack(0, 0);
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