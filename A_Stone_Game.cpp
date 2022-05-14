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
  int n;
  cin>>n;
  
  int a[n];
  int ma = INT_MIN;
  int mi = INT_MAX;

  fl(i,n)
  {
    cin>>a[i];
    ma = max(ma,a[i]);
    mi = min(mi,a[i]);
  }
  int lma,lmi;
   fl(i,n){
     if(a[i] == ma){
       lma = i+1;
     }
     if(a[i] == mi)
     {
       lmi = i+1;
     }
   }
   int rma = n-lma+1;
   int rmi = n-lmi+1;

    int a1 = max(rma,rmi);
    int a2 = max(lma,lmi);

   int a3= min(lma+rmi,rma+lmi);
    cout<<min(a1,min(a2,a3))<<endl;

}
return 0;
}
