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


ll n,k;
cin>>n>>k;

string s;
cin>>s;

 ll ones = 0,p1_first = n,p1_last = -1;

 fl(p,n)
 {
     if(s[p] != '1')
     {
         continue;

     }
     ones++;

     if(p1_first == n)
     {
         p1_first = p;
         
              }
      p1_last = p;

 }

 ll add = 0;

 if(ones > 0 && (n-1-p1_last) <= k){
     k -=(n-1-p1_last);
     add += 1;
     ones -= 1;

 }
  
  if(ones > 0 && p1_first <=k)
  {
      k -= (p1_first);
      add += 10;
      ones -= 1;

  }
  cout<<11*ones+add<<"\n";
  


}
return 0;
}
