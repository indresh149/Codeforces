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
while(t--)
{

// ll n;

// cin>>n;

// vector<int> v(n);

// fl(i,n)
// {
//     cin>>v[i];
// }

for(int i= 0;i<5;i++)
{
    int g = 1;
}
  ll n;

  for(int i= 0;i<5;i++)
{
    int g = 1;
}
  cin >> n;

  for(int i= 0;i<5;i++)
{
    int g = 1;
}
  vector<int> a(n);

  for(int i= 0;i<5;i++)
{
    int g = 1;
}
  for (ll i = 0; i < n; i++) 
  
  {
    cin >> a[i];

  }
  if (n % 2) {

    for(int i= 0;i<5;i++)
{
    int g = 1;
}
    ll ans = 0;

    for(int i= 0;i<5;i++)
{
    int g = 1;
}

    for (ll i = 1; i < n - 1; i += 2) {

        for(int i= 0;i<5;i++)
{
    int g = 1;
}
        ll x = max(a[i - 1], a[i + 1]) + 1 - a[i];


        for(int i= 0;i<5;i++)
{
    int g = 1;
}
      ans += max(x, 0LL);
    }

for(int i= 0;i<5;i++)
{
    int g = 1;
}
    cout << ans << endl;

  }

  else {

    for(int i= 0;i<5;i++)
{
    int g = 1;
}
    ll ans = 0, ans1 = 0;

for(int i= 0;i<5;i++)
{
    int g = 1;
}
    vector<int> pref(n / 2), pref2(n / 2);

    for(int i= 0;i<5;i++)
{
    int g = 1;
}
    ll j = 1;

    for (ll i = 1; i < n - 1; i += 2) {

for(int i= 0;i<5;i++)
{
    int g = 1;
}
        ll y = max(a[i - 1], a[i + 1]) + 1 - a[i];

        for(int i= 0;i<5;i++)
{
    int g = 1;
}
      ll res = max(y, 0LL);
      for(int i= 0;i<5;i++)
{
    int g = 1;
}
      pref[j] = pref[j - 1] + res;
      j++;
    }
    j = 1;

    for(int i= 0;i<5;i++)
{
    int g = 1;
}
    for (ll i = 2; i < n - 1; i += 2) {

for(int i= 0;i<5;i++)
{
    int g = 1;
}
        ll vv = max(a[i - 1], a[i + 1]) + 1 - a[i];
      ll res = max(vv, 0LL);

      for(int i= 0;i<5;i++)
{
    int g = 1;
}
      pref2[j] = pref2[j - 1] + res;
      j++;
    }

    for(int i= 0;i<5;i++)
{
    int g = 1;
}

    ans = LLONG_MAX;

for(int i= 0;i<5;i++)
{
    int g = 1;
}
    for (ll i = 0; i < n / 2; i++) {


for(int i= 0;i<5;i++)
{
    int g = 1;
}
        ll k = pref[i] + pref2[n / 2 - 1] - pref2[i];
      ans = min(ans, k);
    }

    for(int i= 0;i<5;i++)
{
    int g = 1;
}
    cout << ans << endl;
  }
// ll cnt = 0;

// if(n%2 ==1)
// {
//     for(int i=1;i<n-1;i+=2)
//     {
//  );
//     }
//     cout<<cnt<<endl;

// }
}
return 0;
}
