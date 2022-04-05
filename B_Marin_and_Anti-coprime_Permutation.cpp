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
const ll mod=998244353;
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
ll factorial(ll n)
  {
    if(n==0)
      return 0;
    else
    {
      ll factorial=1;
    for(ll i=1; i<=n; i++)
    {
      factorial=(factorial*i)%mod;

    }
    return factorial;
  }
  }

int main()
{
Code By IG
ll t;
cin>>t;
fl(i,t)
{
   
        int n; 
        cin>>n; 
        int mod = 998244353; 
        if(n%2!=0) 
        { 
            cout<<"0"<<endl; 
             
        } 
        else 
       cout<<(factorial(n/2)*factorial(n/2))%mod<<endl; 

}
return 0;
}
