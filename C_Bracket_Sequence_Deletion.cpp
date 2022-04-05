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
void techboat() {
    int N; cin >> N;
  string s; cin >> s;
  N = s.size();
  int i = 0;
  int c = 0;
  while (i < s.size() - 1) {
    if (s[i] == s[i + 1]) {
      c++;
      i += 2;
      continue;
    }
    if (s[i] == '(' && s[i + 1] == ')') {
      c++;
      i += 2;
      continue;
    }
    int index = -1;
    for (int k = i + 1; k < N; k++) {
      if (s[k] == ')') {
        c++;
        index = k;
        break;
      }
    }
    if (index == -1) break;
    i = index + 1;
  }
  int l = 0;
  if (i < N) {
    l = N - i;
  }

  cout << c << " " << l << endl;
}

int main()
{
Code By IG
ll t;
cin>>t;
fl(i,t)
{
  techboat();
}
return 0;
}
