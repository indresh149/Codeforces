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
     int brr[n];
     int pos=0;
     int minn=INT_MAX;
     bool f = true;
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
         brr[i]=arr[i];
     }
     sort(brr,brr+n);
     int e=0;
     for(int i=0;i<n;i++)
     {
         if(arr[i]==brr[i])
         {
             e=i+1;
         }
         else break;
     }
     for(int i=0;i<n;i++)
     {
         if(arr[i]!=brr[i])
         {
             if(minn>arr[i])
             {
                 minn = arr[i];
                 pos = i;

             }
         }
     }
     reverse(arr+e,arr+pos+1);
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     
}
return 0;
}
