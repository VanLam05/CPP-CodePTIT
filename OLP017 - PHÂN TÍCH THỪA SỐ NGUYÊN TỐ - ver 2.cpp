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
#define vb vector<bool>
#define vs vector<string>
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
#define vpi vector<pii>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fin(a) for(auto &x : (a)) cin >> x
#define fout(a) for(auto x : (a)) cout << x << ' '
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define yn yes else no
#define ny no else yes

const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int maxN = 1e7 + 5;

vi prime;

void solve()
{   
    ll n;
    cin >> n;
    for (int i=0; i<prime.size() && (ll) prime[i] * prime[i] <= n; i++) {
        if (n % prime[i] == 0) {
            int cnt = 0;
            while(n % prime[i] == 0) {
                n /= (ll) prime[i];
                cnt++;
            }
            cout << prime[i] << ' ' << cnt << '\n';
        }
    }

    if (n > 1) cout << n << ' ' << 1 << '\n';
    cout << '\n';
}

signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    vb isPrime(maxN, true);
    isPrime[0] = isPrime[1] = false;
    for (int i=2; i*i<maxN; i++) 
        if (isPrime[i])
            for (int j=i*i; j<maxN; j+=i)
                isPrime[j] = false;

    for (int i=2; i<maxN; i++)
        if (isPrime[i]) prime.push_back(i);

    while(t--)
    {
        solve();
    }
    return 0;
}
