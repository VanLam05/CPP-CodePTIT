// VanLam 
// https://www.facebook.com/van.lam.205/
// ITPTIT Club
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    stable_sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < k; i++)
        cout << a[i] << " ";
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
