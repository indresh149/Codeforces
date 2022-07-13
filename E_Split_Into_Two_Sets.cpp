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

ll ct;

void dfs(map<ll , set<ll>> & aj , ll u , ll pt , vector<bool>& vis){
  
  if(vis[u])
  {

  
     return;
  }


       vis[u] = true;


      ct++;


 for(auto l = aj[u].begin() ; l != aj[u].end() ; l++)
 {
    if(*l == pt)
    {

    
        continue;
    }

    if(vis[*l])
    {

        continue;
    }


    dfs(aj , *l , u , vis);


 }



}

int main()
{
Code By IG
ll t;
cin>>t;
fl(i,t)
{

ll n;
cin>>n;

// ll arr[n][2];
// ll cnt = 0;
// while(n--)
// {
 
//  for(int i=0;i<n;i++)
//  {
//     for(int j = 0;j<2;j++)
//     {
//         cin>>arr[i][j];
//     }
//  }
//  unordered_map<int,int> mpp;

//  fl(i,n)
//  {
//     fl(j,2)
//     {
//         mpp[arr[i][j]]++;

//     }
//  }



//  for(auto &it: mpp)
//  {
//     if(it.second >= 2)
//     {
//         cnt++;
//     }
//  }

// }
//  if(cnt > n/2)
//  {
//     cout<<"NO\n";
//  }
//  else
//  {
//     cout<<"YES\n";
//  }

map<ll,ll> mpp;

ll a,b;


map<ll,set<ll>> st;

bool f = true;

fl(i,n)
{
    cin>>a>>b;

    mpp[a]++;

    mpp[b]++;

   if(a == b)
   {
    f = false;

   }

   st[a].insert(b);
   st[b].insert(a);

}

for(auto &u:mpp)
{
    if(u.second != 2)
    {

        f  = false;

        break;

    }
}

if(f == 0)
{


 cout<<"NO\n";



 continue;

}

vector<bool> v(n+1,false);


for(ll i = 1;i<=n;i++)
{
  ct = 0;


  if(v[i] == 0)
  {


    dfs(st,i,-1,v);
  }

  if(ct%2)
  {


    f = false;



    break;
  }
}

if(f == 0)
{
    cout<<"NO\n";



    continue;
}



cout<<"YES\n";



}


return 0;
}
