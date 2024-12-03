#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int, int>
#define pib pair<int, bool>
#define pdd pair<double, double>
#define mii map<int, int>
#define mib map<int, bool>
#define mil map<int, ll>
#define mli map<ll, int>
#define si set<int>
#define vvi vector<vi>
#define vvl vector<vl>
#define vvb vector<vb>
#define vpi vector<pii>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fin(v) for(auto &x : (v)) cin >> x
#define fout(v) for(auto x : (v)) cout << x << ' '; cout << '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define yn yes else no
#define ny no else yes
const int INF = 1e9 + 7;
const ll MOD = 1e9 + 7;
const int maxN = 1e6 + 5;
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int i = 0;
    while(i < n) {
        int j = i + 1;
        while(j < n && s[j] == s[i]) j++;
        cout << s[i] << j - i;
        i = j;
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