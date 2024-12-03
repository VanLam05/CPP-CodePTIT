#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define vl vector<ll>
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
int n, x;
bool cmp(int a, int b)
{
    return abs(a - x) < abs(b - x);
}
void solve()
{
    cin >> n >> x;
    vi a(n);
    for (int &i : a)
        cin >> i;
    stable_sort(a.begin(), a.end(), cmp);
    for (int i : a)
        cout << i << ' ';
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