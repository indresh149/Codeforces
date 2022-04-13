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
bool isordinary(vector<int> vcn)
{
   for(int i=0;i<vcn.size()-1;i++){
   if(vcn[i]^vcn[i+1])
   {
       return false;
   }
   }
   return true;
}

void techboat()
{
    ll n;
    cin>>n;
    int res = 0;
    vector<int> v;
    for(ll i =1;i<n;i++) {
    while(i != 0)
    {
        int digit = i%10;
        i=i/10;
        v.push_back(digit);
    }
    if(isordinary(v))
    {
        res++;
    }
    cout<<res<<endl;
}
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
