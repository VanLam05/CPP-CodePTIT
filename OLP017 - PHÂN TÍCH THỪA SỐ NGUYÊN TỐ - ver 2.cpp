#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define ll long long
#define sz size()
#define FOR(i,a,b) for(long long i = a; i < b; i++)
#define FORD(i,a,b) for(long long i = a; i > b; i--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<long long>
#define endl '\n'
#define MOD 1000000007
// #define task "Fernandez"
#ifdef FERNANDEZ
   #include "debug.h"
#else
   #define debug(...) 04
#endif
vi f, prime(10000005,0);
const int N=1e7+5;
void sinh()
{
    for(int i=2;i * i< N;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<N;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for (int i=2; i<N; i++)
    {
        if (prime[i] == 0)
        {
            f.pb(i);
        }
    }
}
signed main()
{
    faster();
    // if(fopen(task".INP", "r"))
    // {
    //     freopen(task".OUT", "r", stdin);
    //     freopen(task".OUT", "w", stdout);
    // }
    int t;
    cin >> t;
    sinh();
    while(t--)
    {
        ll n;
        cin>>n;
        int fsize=f.sz;
        for(int i=0;i< fsize && (long long)f[i] * f[i] <= n;i++)
        {
            if(n%f[i]==0) 
            {
                int mx=0;
                while(n%f[i]==0)
                {
                    n/=f[i];
                    mx++;
                }
                cout<<f[i]<<" "<<mx<<endl;
            }
        }
        if(n>1) cout<<n<<" "<<1<<endl;
        cout<<endl;
    }
    return 0;
}