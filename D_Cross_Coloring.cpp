#include <bits/stdc++.h>
using namespace std;
// #define IndreshGoswami 1
//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define IG cout.tie(NULL);
//Aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;
//Constants
const lld pi= 3.141592653589793238;
const ll INF= 1e18;
const ll mod=1e9+7;
const int MOD = 998244353;
//TypeDEf
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;
// Macros
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define vr(v) v.begin(),v.end():
#define rv(v) v.end(),v.begin()
#define forn(i, n) for (int i = 0; i < int(n); i++)
                               
//Code by Indresh Goswami
//Language C++
//Main
int main()
{
Code By IG
ll t;
cin>>t;
fl(i,t)
{
  int n, m, k, q;
		scanf("%d%d%d%d", &n, &m, &k, &q);
		vector<int> xs(q), ys(q);
		forn(i, q) scanf("%d%d", &xs[i], &ys[i]);
		int ans = 1;
		set<int> ux, uy;
		for (int i = q - 1; i >= 0; --i){
			bool fl = false;
			if (!ux.count(xs[i])){
				ux.insert(xs[i]);
				fl = true;
			}
			if (!uy.count(ys[i])){
				uy.insert(ys[i]);
				fl = true;
			}
			if (fl){
				ans = ans * 1ll * k % MOD;
			}
			if (int(ux.size()) == n || int(uy.size()) == m){
				break;
			}
		}
		printf("%d\n", ans);
}
return 0;
}
