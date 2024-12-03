#include <bits/stdc++.h>
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
#define fin(v)          \
	for (auto &x : (v)) \
	cin >> x
#define fout(v)           \
	for (auto x : (v))    \
		cout << x << ' '; \
	cout << '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define yn yes else no
#define ny no else yes
const int INF = 1e9 + 7;
const ll MOD = 1e9 + 7;
const int maxN = 1e6 + 5;
class Intern
{
public:
	int id;
	string MSV, name, CLASS, email, company;
	void set(int _ind)
	{
		id = _ind;
		cin >> MSV;
		cin.ignore();
		getline(cin, name);
		cin >> CLASS >> email >> company;
	}
	void get()
	{
		cout << id << ' ' << MSV << ' ' << name << ' ' << CLASS << ' ' << email << ' ' << company << '\n';
	}
};
bool cmp(Intern a, Intern b) {
	return a.name < b.name;
}
void solve()
{
	int n;
	cin >> n;
	map<string, vector<Intern>> mp;
	for (int i = 1; i <= n; i++)
	{
		Intern tmp;
		tmp.set(i);
		mp[tmp.company].push_back(tmp);
	}
	int q;
	cin >> q;
	while (q--)
	{
		string tmp;
		cin >> tmp;
		sort(all(mp[tmp]), cmp);
		for (auto intern : mp[tmp])
		{
			intern.get();
		}
	}
}
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	// cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}