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
int n, cnt;
vi digit;
bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return n > 1;
}
void calc()
{
    int num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++)
    {
        num1 = num1 * 10 + digit[i];
        num2 = num2 * 10 + digit[n - i - 1];
    }
    if (digit[0] != 0 && isPrime(num1)) 
        cnt++;
    if (isPrime(num2))
        cnt++;
}
void backTrack(int k, int preDigit)
{
    if (k == n)
    {
        calc();
        return;
    }
    for (int i = preDigit + 1; i <= 9 - n + k + 1; i++)
    {
        digit[k] = i;
        backTrack(k + 1, i);
    }
}
void solve()
{
    cin >> n;
    digit.assign(n, 0);
    cnt = 0;
    backTrack(0, -1);
    cout << cnt << '\n';
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
        solve();
    }
    return 0;
}