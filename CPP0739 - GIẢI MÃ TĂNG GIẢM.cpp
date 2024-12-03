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
    string s;
    cin >> s;
    int n = s.length();
    s = s + 'I';
    stack<int> st;
    st.push(1);
    int num = 1;
    for (int i=0; i<=n; i++) {
        num++;
        if (s[i] == 'I') {
            while(!st.empty()) {
                cout << st.top();
                st.pop();
            }
        }
        st.push(num);
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