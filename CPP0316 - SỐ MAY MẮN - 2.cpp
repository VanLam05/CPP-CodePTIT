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
bool check(string s) {
    if (s.size() == 1) {
        return s == "9";
    }
    int sum = 0;
    for (int i=0; i<s.size(); i++)
        sum += (s[i] - '0');
    return check(to_string(sum));
}
void solve()
{
    string s;
    cin >> s;
    cout << check(s) << '\n';
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