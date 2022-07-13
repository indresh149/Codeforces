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
    
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    string s;
    cin>>s;

    int n = (int)s.size();

    int as = a+c+d;
    int cnt = 0;
    for(char ch:s)
    {
        cnt += (ch == 'A');

    }
    if(as!= cnt){
        cout<<"NO"<<"\n";
        continue;

    }
      int any = 0;
    int total = 0;
    vector<int> cs;
    vector<int> ds;
    int beg = 0;
    while (beg < n) {
      int end = beg;
      while (end + 1 < n && s[end + 1] != s[end]) {
        end += 1;
      }
      int cc = end - beg;
      if (cc > 0) {
        total += cc / 2;
        if (cc % 2 == 0) {
          any += cc / 2;
        } else {
          if (s[beg] == 'A') {
            cs.push_back(cc / 2);
          } else {
            ds.push_back(cc / 2);
          }
        }
      }
      beg = end + 1;
    }
    sort(cs.begin(), cs.end());
    sort(ds.begin(), ds.end());
    int rem_c = c;
    int rem_d = d;
    for (int x : cs) {
      if (rem_c >= x + 1) {
        rem_c -= x + 1;
        total += 1;
      }
    }
    for (int x : ds) {
      if (rem_d >= x + 1) {
        rem_d -= x + 1;
        total += 1;
      }
    }
    cout << (total >= c + d ? "YES" : "NO") << '\n';


}
return 0;
}
