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
class SinhVien
{
public:
    string ID, name, class_name, date_of_birth;
    double gpa;
    friend istream &operator>>(istream &is, SinhVien &a)
    {
        a.ID = "B20DCCN001";
        getline(is, a.name);
        is >> a.class_name >> a.date_of_birth >> a.gpa;
        a.chuanhoa();
        return is;
    }
    friend ostream &operator<<(ostream &os, const SinhVien &a)
    {
        os << a.ID << ' ' << a.name << ' '
           << a.class_name << ' '
           << a.date_of_birth << ' '
           << fixed << setprecision(2) << a.gpa;
        return os;
    }
    void chuanhoa()
    {
        if (date_of_birth[1] == '/')
            date_of_birth.insert(date_of_birth.begin(), '0');
        if (date_of_birth[4] == '/')
            date_of_birth.insert(date_of_birth.begin() + 3, '0');
    }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}