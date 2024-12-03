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
const int maxN = 1e4 + 5;
int calc(int n)
{
    int res = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        res++;
    }
    if (res == 0)
        return 0;
    for (int i = 3; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int cnt = 1;
            while (n % i == 0)
            {
                n /= i;
                cnt++;
            }
            res *= cnt;
        }
    }
    if (n != 1) res *= 2;
    return res;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << calc(n) << '\n';
    }
    return 0;
}