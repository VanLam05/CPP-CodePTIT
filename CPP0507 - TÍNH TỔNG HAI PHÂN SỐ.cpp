#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct PhanSo
{
    ll a, b;
};
void nhap(PhanSo &x)
{
    cin >> x.a >> x.b;
}
PhanSo tong(PhanSo x, PhanSo y)
{
    PhanSo c;
    c.a = x.a * y.b + y.a * x.b;
    c.b = x.b * y.b;
    ll _gcd = __gcd(c.a, c.b);
    c.a /= _gcd;
    c.b /= _gcd;
    return c;
}
void in(PhanSo x)
{
    cout << x.a << '/' << x.b;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}