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
// #define int ll
#ifdef VanLam
#include <debug.h>
#define cer(...) debug_out(__VA_ARGS__)
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define cer(...) 20
#define debug(...) 12
#define gcd(a, b) __gcd(a, b)
#endif
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int maxN = 1e6 + 5;
class PhanSo
{
public:
    ll tu, mau;
    PhanSo(ll tu, ll mau)
    {
        this->tu = tu;
        this->mau = mau;
    }
    friend istream &operator>>(istream &is, PhanSo &p)
    {
        is >> p.tu >> p.mau;
        return is;
    }
    friend ostream &operator<<(ostream &os, const PhanSo &p)
    {
        os << p.tu << '/' << p.mau;
        return os;
    }
    friend PhanSo operator+(const PhanSo &a, const PhanSo &b)
    {
        PhanSo res(1, 1);
        res.tu = a.tu * b.mau + b.tu * a.mau;
        res.mau = a.mau * b.mau;
        res.rutgon();
        return res;
    }
    void rutgon()
    {
        ll _gcd = gcd(tu, mau);
        tu /= _gcd;
        mau /= _gcd;
    }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}