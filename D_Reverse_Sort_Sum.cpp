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
    int n;
    cin>>n;
    vector<int> vnn(n);
    ll adtsum=0;
    for(auto &x:vnn){
      scanf("%d",&x);
      adtsum+=x;
    }
    int tones=adtsum/n;
    vector<int> remres(n);
    int cur_t=0;
    vector<int> solt(n);
    for(int i=n-1;i>=0;--i){
      cur_t-=remres[i];
      if(tones){
        ++cur_t;
        if(i-tones>=0)
          ++remres[i-tones];
      }
      vnn[i]-=cur_t;
      if(vnn[i]==i && tones){
        solt[i]=1;
        --tones;
      }
    }
    for(int i=0;i<n;++i)
      printf("%d ",solt[i]);
    cout<<" "<<endl;
  }
  return 0;
}
