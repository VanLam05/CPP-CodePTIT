#include <bits/stdc++.h>
using namespace std;
struct ThiSinh
{
    string name, date;
    double d1, d2, d3, d;
};
void nhap(ThiSinh &a)
{
    getline(cin, a.name);
    getline(cin, a.date);
    cin >> a.d1 >> a.d2 >> a.d3;
    a.d = a.d1 + a.d2 + a.d3;
}
void in(ThiSinh a)
{
    cout << a.name << ' ' << a.date << ' ' << fixed << setprecision(1) << a.d;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}