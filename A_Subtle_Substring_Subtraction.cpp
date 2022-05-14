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
  string str;
  cin>>str;
  int n = str.size();
  int p = 0;
  fl(i,n)
  {
      p+=int(str[i]-'a');
      p++;
  }

  if(n % 2 == 0){
      cout<<"Alice"<<" "<<p<<endl;
  }
  else
  {
      int q1 = p - int(str[0] - 'a') - 1;
      int q2 = p - int(str[n-1] - 'a') - 1;


      int g = max(q1,q2);
     
     int toke = p - g;
     if(g > toke)
     {
         cout<<"Alice"<<" "<<g - toke<<endl;
     }
     else
     {
       cout<<"Bob"<<" "<<toke - g<<endl;
     }

  }
}
return 0;
}
