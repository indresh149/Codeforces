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

bool comp(pair<int,int> &p1, pair<int,int >&p2){
return p1.second < p2.second;
}
                               
//Code by Indresh Goswami
//Language C++
//Main
int main()
{

ll n,m;
cin>>n>>m;
map<int,vector<pair<int,int>>> q;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        int x;
        cin>>x;
        q[x].push_back({i,j});
    }
}
int ans = 0;
for(auto it:q)
{
  vector<pair<int,int>> v = it.second;
  sort(v.begin(),v.end());
  int sum=0;
  for(int i=0;i<v.size();i++) sum+=v[i].first;
  for(int i=0;i<v.size();i++)
  {
      sum -= v[i].first;
      ans += (sum - ((v.size()-1-i)*v[i].first));
  }
  sort(v.begin(),v.end(),comp);
  sum = 0;
  for(int i=0;i<v.size();i++) sum += v[i].second;
  for(int i=0;i<v.size();i++)
  {
      sum -= v[i].second;
      ans+= (sum - ((v.size()-1-i)*v[i].second));
  }
}
  cout<<ans<<endl;

return 0;
}
