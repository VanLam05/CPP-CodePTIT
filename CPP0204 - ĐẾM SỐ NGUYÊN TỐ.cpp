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
const int maxN = 1e5 + 5;
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
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
    vi cnt(maxN);
    cnt[0] = 0;
    for (int i=1; i<maxN; i++)
        cnt[i] = cnt[i-1] + isPrime[i];
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << cnt[r] - cnt[l-1] << '\n';
    }
    return 0;
}