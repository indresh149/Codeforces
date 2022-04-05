#include <iostream>
#include <bits/stdc++.h>
// #include <sys/resource.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace chrono;
// using namespace __gnu_pbds;
//def
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
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0;i<n;i++ )
   {
       cin>>arr[i];
   }
   vector<int> v1,v2,odd,even;
   for(int i=0;i<n;i++)
   {
       if(arr[i]%2) v1.push_back(arr[i]),odd.push_back(arr[i]);
       else v2.push_back(arr[i]), even.push_back(arr[i]);
   }
   sort(v1.begin(),v1.end());
   sort(v2.begin(),v2.end());

   if(v1 == odd && v2 == even)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;
}
return 0;
}
