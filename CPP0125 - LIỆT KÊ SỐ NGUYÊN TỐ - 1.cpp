// VanLam 
// https://www.facebook.com/van.lam.205/
// ITPTIT Club
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int, int>
#define vb vector<bool>
#define pib pair<int, bool>
const int INF = 1e9 + 7;
const int maxN = 1e6 + 5;
void solve()
{
    vector<bool> isPrime(maxN, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < maxN; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < maxN; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    int a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    for (int i = a; i <= b; i++)
        if (isPrime[i])
            cout << i << ' ';
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
