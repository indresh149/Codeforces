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

  ll n;

  cin>>n;

  ll res = n%3;
ll h1 = 0,h2 = 0,h3 = 0;
   if(res == 0)
   {
        h3=n/3; 


      h3--; 


      h2=n/3; 


      h1=(n/3); 


      h1++; 
      cout<<h2<<" "<<h1<<" "<<h3<<endl; 
   }
   else if(res == 1)
   {
        h3=n/3; 



      h3--; 


      h2=n/3; 


      h1=(n/3); 


      h1++; 
      h1++; 


      cout<<h2<<" "<<h1<<" "<<h3<<endl; 
   }
   else
   {
h3=n/3; 
      h3--; 


      h2=n/3; 
      h1=(n/3); 




      h1++; 
      h1++; 



      h2++; 
        cout<<h2<<" "<<h1<<" "<<h3<<endl; 

   }
   //cout<<h1<<" "<<h2<<" "<<h3<<endl;
}
return 0;
}
