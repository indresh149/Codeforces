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

int main() {
//@indresh Goswami
 int t;
 cin>>t;
 while(t--){
  int n,a,b;
 cin>>n>>a>>b;
  ++n;
  vector<int> vcc(n);
  ll addsum=0;
  for(int i=1;i<n;++i){
   scanf("%d",&vcc[i]);
   addsum+=vcc[i];
  }
  ll result=1e18;
  for(int i=0;i<n;++i){
   ll cur_t = (a+b)*(ll)vcc[i];
   addsum-=vcc[i];
   cur_t+=(addsum-(n-i-1)*(ll)vcc[i]) * b;
   result=min(result,cur_t);
  }
  cout<<result<<endl;
 }
 return 0;
}