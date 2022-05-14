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
    int n, k;
    cin>>n>>k;
    string s;
    int Ot=k;
     cin>>s;
    string S=s;
    vector<int> answer(n);
    int ot=0;
    for(int i=0;i<n && k>0;++i){
      s[i] ^= ot;
      if(k%2!=s[i]-'0' || i==n-1)
        continue;
      ++answer[i];
      --k;
      ot^=1;
    }
    
    answer.back() += k;

    for(int i=0;i<n;++i)
      if((Ot-answer[i])%2)
        S[i]^=1;
    puts(S.c_str());
    for(auto &x:answer)
      printf("%d ",x);

    puts("");
  }
  return 0;
}