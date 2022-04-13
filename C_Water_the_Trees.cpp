#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
const int base = 32768; 
//Code by Indresh Goswami
//Language C++
//Main
int main() {
  int tomato;
  scanf("%d",&tomato);
  while(tomato--){
    int news;
    scanf("%d",&news);
    int mxms=0;
    vector<int> v(news);
    for(auto &xt:v){
      scanf("%d",&xt);
      mxms=max(mxms,xt);
    }
    ll result=1e18;
    for(int h=mxms;h<=mxms+3;++h){
      ll twot=0, onet=0;
      for(auto &xm:v){
        twot += (h-xm)/2;
        onet += (h-xm)%2;
      }
      ll all=onet+twot*2;
      ll daysaa=all/3*2;
      if(all%3==1)
        ++daysaa;
      if(all%3==2)
        daysaa+=2;
      result=min(result,max(onet*2-1, daysaa));
    }
    printf("%lld\n",result);
  }
  return 0;
}
