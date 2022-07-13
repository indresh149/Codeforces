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

int LongestIncreasingSubsequenceLength(std::vector<int>& v)
{
    if (v.size() == 0) // boundary case
        return 0;
 
    std::vector<int> tail(v.size(), 0);
    int length = 1; // always points empty slot in tail
 
    tail[0] = v[0];
 
    for (int i = 1; i < v.size(); i++) {
 
        // Do binary search for the element in
        // the range from begin to begin + length
        auto b = tail.begin(), e = tail.begin() + length;
        auto it = lower_bound(b, e, v[i]);
 
        // If not present change the tail element to v[i]
        if (it == tail.begin() + length)
            tail[length++] = v[i];
        else
            *it = v[i];
    }
 
    return length;
}

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

  map<ll,ll> chit;

  ll p = 0;


   fl(i,n)
   {
       //cin>>v[i];
       ll b;

       cin>>b;

       chit[b]++;

       ll res = 2;

       chit[b] = min(chit[b],res);





   }

   for(auto c: chit)
    {
        p += c.second;

    }

    ll res = ceil(p/2.0);

    cout<<res<<endl;
//    {
//        res = ceil(p/2.0);


//    }


//    sort(v.begin(),v.end());

//    vector<int> b = v;

//    reverse(b.begin(),b.end());


//    ll res = LongestIncreasingSubsequenceLength(v);


//    ll sum = LongestIncreasingSubsequenceLength(b);
   
    
//    ll ans = min(res,sum);

//    cout<<ans<<endl;








   



}
return 0;
}
