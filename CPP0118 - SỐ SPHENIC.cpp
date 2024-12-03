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
bool check(int n)
{
    int cnt = 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            cnt++;
            if (n % (i * i) == 0)
                return 0;
            n /= i;
        }
    if (n > 1)
        cnt++;
    return cnt == 3;
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
        cout << check(n) << '\n';
    }
    return 0;
}