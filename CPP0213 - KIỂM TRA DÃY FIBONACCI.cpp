#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int, int>
#define vb vector<bool>
#define pib pair<int, bool>
const int INF = 1e9 + 7;
const int maxN = 1e6 + 5;
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    vector<ll> fibo(93);
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 93; i++)
        fibo[i] = (ll)fibo[i - 1] + fibo[i - 2];
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (*lower_bound(fibo.begin(), fibo.end(), a) == a)
            {
                cout << a << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}