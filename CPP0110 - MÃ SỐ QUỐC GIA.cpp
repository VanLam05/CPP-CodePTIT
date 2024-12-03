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
    int i = 0;
    while(i < s.length()) {
        if (i <= s.length() - 3 && s[i] == '0' && s[i+1] == '8' && s[i+2] == '4') {
            i += 3;
        } else {
            cout << s[i];
            i++;
        }
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