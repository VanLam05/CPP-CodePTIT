// VanLam 
// https://www.facebook.com/van.lam.205/
// ITPTIT Club
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    prev_permutation(a.begin(), a.end());
    for (auto i : a)
        cout << i << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
