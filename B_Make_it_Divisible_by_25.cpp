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
//const ll INF= 1e18;
const ll mod=1e9+7;
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
const string subseqs[] = { "00", "25", "50", "75" };

const int INF = 100;                   
//Code by Indresh Goswami
//Language C++
//Main
int solve(string& s, string& t)
{
	int sptr = s.length() - 1;

	int ans = 0;
	while (sptr >= 0 && s[sptr] != t[1])
	{
		sptr--;
		ans++;
	}

	if (sptr < 0) return INF;

	sptr--;

	while (sptr >= 0 && s[sptr] != t[0])
	{
		sptr--;
		ans++;
	}

	return sptr < 0 ? INF : ans;
}

int main()
{
Code By IG
ll t;
cin>>t;
fl(i,t)
{
   string n;
		cin >> n;
		
		int ans = INF;
		for (auto e : subseqs)
			ans = min(ans, solve(n, e));

		cout << ans << '\n';
}
return 0;
}
