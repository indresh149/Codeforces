#include <bits/stdc++.h>
using namespace std;
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
                               
// #define I_G 1
//Code by Indresh Goswami
//Language C++
//Main
int main()
{
Code By IG
ll t;
cin>>t;
while(t--)
{
   ll n,m;
   cin>>n>>m;

   ll i,j,ans,s1,s2,l,cakes;

   ll a[n+1];
   vector<ll> adj[n+1];
   ll deg[n+1];

   for(int i=1;i<=n;i++){
    deg[i]=0;
    cin>>a[i];
   }

   cakes = m;

   ans = 0;

   for(;m--;){
     cin>>i>>j;
     adj[i].pb(j);
     adj[j].pb(i);
        deg[i]++;
        deg[j]++;

        

   }

    // for(i=1;i<=n;i++){
    //         for(j = 1;j<=n;j++)
    //              cout<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;

   if((cakes%2)==0){
    cout<<"0\n";
    continue;
   }

   s1 = INF,s2 = INF;

   for(i=1;i<=n;i++){
    l = deg[i];
    if((l%2) == 1)
    {
        s1 = min(s1,a[i]);
    }
    else
    {
        for(j = 0;j<l;j++){
            if(deg[adj[i][j]]%2 == 0){
                s2 = min(s2,a[i]+a[adj[i][j]]);
            }
        }
    }
   }
   ans = min(s1,s2);

  cout<<ans<<endl;
    }

    return 0;
}