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
    vector<string> s(2);
    s[0] = "ABBADCCABDCCABD";
    s[1] = "ACCABCDDBBCDDBB";
    while(t--)
    {
        int made;
        cin >> made;
        int cnt = 0;
        for (int i=0; i<15; i++) {
            char res;
            cin >> res;
            if (s[made - 101][i] == res) cnt++;
        }
        double diem = (double) cnt * 10 / 15;
        cout << fixed << setprecision(2) << diem << '\n';
    }
    return 0;
}