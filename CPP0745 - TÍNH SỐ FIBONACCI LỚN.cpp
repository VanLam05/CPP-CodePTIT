// VanLam 
// https://www.facebook.com/van.lam.205/
// ITPTIT Club
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define pii pair<int, int>
#define vb vector<bool>
#define pib pair<int, bool>
#define mii map<int, int>
#define mil map<int, ll>
#define mli map<ll, int>
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define yn yes else no
const int INF = 1e9 + 7;
const int maxN = 1e3 + 5;
void solve()
{
}
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    vi fibo(maxN);
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i=2; i<maxN; i++)
        fibo[i] = (fibo[i-1] + fibo[i - 2]) % INF;
    while(t--)
    {
        int n;
        cin >> n;
        cout << fibo[n] << '\n';
    }
    return 0;
}
