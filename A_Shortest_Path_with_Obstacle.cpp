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
int main()
{
Code By IG
ll t;
cin>>t;
fl(i,t)
{
  vector<int> a(2),b(2),f(2);

  cin>>a[0]>>a[1];
  cin>>b[0]>>b[1];
  cin>>f[0]>>f[1];

  int ans = abs(a[0] - b[0]) + abs(a[1] - b[1]);
  if((a[0] == b[0] && a[0] == f[0] && min(a[1],b[1]) < f[1] && f[1] < max(a[1],b[1])) 
  || (a[1] == b[1] && a[1] == f[1] && min(a[0],b[0]) < f[0] && f[0] < max(a[0],b[0])))
  {
    ans +=2;
  }
  cout<<ans<<endl;
}
return 0;
}
