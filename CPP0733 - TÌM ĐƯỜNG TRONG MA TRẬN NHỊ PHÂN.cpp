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
int dx[] = {1, 0, 0, -1};
int dy[] = {0, 1, -1, 0};
int n, m, s, t, u, v;
vector<vi> board;
bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && board[x][y];
}
void solve()
{
    cin >> n >> m >> s >> t >> u >> v;
    board.assign(n, vi(m));
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> board[i][j];
    if (!board[u][v] || !board[s][t]) {
        cout << -1 << '\n';
        return;
    }
    queue<pair<pii,int>> q;
    board[s][t] = 0;
    q.push({{s, t}, 0});
    while(!q.empty()) {
        pair<pii, int> front = q.front(); q.pop();
        int x = front.fi.fi;
        int y = front.fi.se;
        int steps = front.se;
        if (x == u && y == v) {
            cout << steps << '\n';
            return;
        }
        for (int i=0; i<4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];
            if (isValid(newX, newY)) {
                board[newX][newY] = 0;
                q.push({{newX, newY}, steps + 1});
            }
        }
    }
    cout << -1 << '\n';
}
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}