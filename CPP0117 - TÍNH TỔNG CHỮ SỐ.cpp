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
int calc(int n) {
    if (n < 10) return n;
    int sum = 0;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return calc(sum);
}
void solve()
{
    int n;
    cin >> n;
    cout << calc(n) << '\n';
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