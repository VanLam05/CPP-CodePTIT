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
void solve()
{
}
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    vector<ll> fibo(93);
    fibo[1] = fibo[2] = 1;
    for (int i=3; i<93; i++) 
        fibo[i] = (ll) fibo[i-1] + fibo[i-2];
    while(t--)
    {
        int n;
        cin >> n;
        cout << fibo[n] << '\n';
    }
    return 0;
}