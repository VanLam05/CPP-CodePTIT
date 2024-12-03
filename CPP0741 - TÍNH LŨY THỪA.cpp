// VanLam 
// https://www.facebook.com/van.lam.205/
// ITPTIT Club
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long x, y, p;
    cin >> x >> y >> p;
    long long ans = 1;
    for (long long i = 0; i < y; i++)
        ans = (ans * x) % p;
    cout << ans << endl;
}
main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
