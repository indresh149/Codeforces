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
 vector<int> v(n);
 fl(i,n)
 {
     cin>>v[i];

 }
 vector<int> a(n);
 fl(i,n)
 {
     cin>>a[i];
 }

 bool f = true;

 fl(i,n)
 {
     if(a[i] > v[i])
     {
         f= false;
         
     }
 }
 if(f == 0)
 {
     cout<<"NO\n";
     continue;
 }
 int p = 0;

 fl(i,n)
 {
     p = max(p,v[i] - a[i]);
 }
 fl(i,n)
 {
     ll n = v[i] - p;
     
     v[i] = max(0ll, n);
 }
 fl(i,n)
 {
     if(v[i] != a[i])
     {
         f = false;

     }
 }

 if(f == 1)
 {
     cout<<"YES"<<endl;
 }
 else
 {
     cout<<"NO"<<endl;
 }

}
return 0;
}
