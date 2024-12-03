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
const int MOD = 1e9 + 7;
const int MaxN = 1e3 + 5;
void solve()
{
}
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    vector<vi> dp(MaxN, vi (MaxN, 1));
    for (int i=1; i<MaxN; i++) {
        for (int j=1; j<i; j++)
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % MOD;
    }
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        cout << dp[n][k] << '\n';
    }
    return 0;
}