// VanLam 
// https://www.facebook.com/van.lam.205/
// ITPTIT Club
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define vs vector<string>
#define vc vector<char>
#define pii pair<int, int>
#define pib pair<int, bool>
#define pdd pair<double, double>
#define mii map<int, int>
#define mib map<int, bool>
#define mil map<int, ll>
#define mli map<ll, int>
#define si set<int>
#define vvi vector<vi>
#define vvl vector<vl>
#define vvb vector<vb>
#define vvc vector<vc>
#define vpi vector<pii>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sub(x, l, r) (x).begin() + l, (x).begin() + r
#define rsub(x, l, r) (x).rbegin() + l, (x).rbegin() + r
#define FOR(i, a, b) for (int i = a, _b = b; i <= _b; i++)
#define FORD(i, a, b) for (int i = a, _b = b; i >= _b; i--)

#define lcm(a, b) a / gcd(a, b) * b

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define yn yes else no
#define ny no else yes

#define int ll

#ifdef VanLam
#include <debug.h>
#define cer(...) debug_out(__VA_ARGS__)
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#define __gcd(a, b) gcd(a, b)
#else
#define cer(...) 20
#define debug(...) 12
#define gcd(a, b) __gcd(a, b)
#endif

const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int maxN = 1e4 + 5;

int f[maxN];

void prepare()
{
    f[0] = 1;
    FOR(i, 1, maxN - 1) f[i] = lcm(f[i - 1], i);
}

void Van_Lam()
{
    int n;
    cin >> n;
    cout << f[n];
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("VanLam.inp", "r"))
    {
        freopen("VanLam.inp", "r", stdin);
        freopen("VanLam.out", "w", stdout);
    }

    prepare();

    int t = 1;
    cin >> t;
    int testcase = 1;
    while (t--)
    {
        cer("- - - -", testcase++, "- - - -");
        Van_Lam();
        cout << '\n';
        cer("= = = = = = = = = =");
    }
    return 0;
}
