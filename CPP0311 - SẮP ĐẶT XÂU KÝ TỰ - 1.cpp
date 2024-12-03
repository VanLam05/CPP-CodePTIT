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
    string s;
    cin >> s;
    int n = s.length();
    vector<int> cnt(26, 0);
    for (int i=0; i<n; i++)
        cnt[s[i] - 'a']++;
    int half = n - n / 2;
    for (int i=0; i<26; i++)
        if (cnt[i] > half) {
            cout << 0 << '\n';
            return;
        } 
    cout << 1 << '\n';
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