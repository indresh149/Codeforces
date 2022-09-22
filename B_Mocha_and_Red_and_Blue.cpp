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
                               
//Code by Indresh Goswami
//Language C++
//Main
const int N=105;
int t,n,cnt;
char s[N];
int main()
{
	scanf("%d",&t);
	while (t--)
	{
		cnt=0;
		scanf("%d",&n);
		scanf("%s",s+1);
		for (int i=1;i<=n;i++)
			cnt+=(s[i]!='?');
		if (!cnt)
			s[1]='R';
		for (int i=2;i<=n;i++)
			if (s[i]=='?'&&s[i-1]!='?')
				s[i]=s[i-1]^('B'^'R');
		for (int i=n-1;i;i--)
			if (s[i]=='?'&&s[i+1]!='?')
				s[i]=s[i+1]^('B'^'R');
		printf("%s\n",s+1);
	}
	return 0;
}
