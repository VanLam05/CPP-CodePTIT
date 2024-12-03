#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int, int>
#define vb vector<bool>
#define pib pair<int, bool>
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define YESNO YES; else NO;
const int INF = 1e9 + 7;
void solve()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    int n = s.length();
    int cnt = 0;
    for (int i=0; i<n-k+1; i++) {
        set<char> se;
        int j = i;
        while(j < n && se.size() <= k) {
            se.insert(s[j++]);
            if (se.size() == k) cnt++;
        }
    }
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