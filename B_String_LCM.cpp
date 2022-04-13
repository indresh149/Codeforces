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
  auto mul = [](string s, int k) -> string {
    string res = "";
    while (k--) res += s;
    return res;
  };
  
  int tc;
  cin >> tc;
  while (tc--) {
    string s, t;
    cin >> s >> t;
    int n = s.length(), m = t.length();
    int g = __gcd(n, m);
    if (mul(s, m / g) == mul(t, n / g))
      cout << mul(s, m / g) << endl;
    else
      cout << "-1" << endl;
  }
}