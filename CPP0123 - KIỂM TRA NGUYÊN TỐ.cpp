// VanLam 
// https://www.facebook.com/van.lam.205/
// ITPTIT Club
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
bool isPrime(int n) {
    for (int i=2; i*i<=n; i++) {
        if (n % i == 0) return false;
    }
    return n > 1;
}
void solve()
{
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
