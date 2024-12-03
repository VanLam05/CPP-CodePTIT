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
int n, d;
vector<int> num, cnt;
void print() {
    d++;
    for (int i=0; i<n; i++)
        cout << num[i];
    if (d == 10) {
        cout << '\n';
        d = 0;
    } else {
        cout << ' ';
    }
}
void backTrack(int k) {
    if (k == n) {
        print();
        return;
    }
    for (int i=0; i<=9; i++) {
        if (k == 0 && i == 0) continue;
        num[k] = i;
        cnt[(i & 1)]++;
        if (cnt[i & 1] <= n / 2) backTrack(k + 1);
        cnt[(i & 1)]--;
    }
}
void solve()
{
    cin >> n;
    d = 0;
    num.assign(n, 0);
    cnt.assign(2, 0);
    backTrack(0);
}
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}