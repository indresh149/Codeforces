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
int n;
cin>>n;
int arr[n*2+1];
for(int i=1;i<=n*2;i++) cin>>arr[i];
int left0s = 0,left1s = 0,right0s = 0,right1s = 0;
for(int i=1;i<=n*2;i+=2){
    if(arr[i]==0)
    {
        left0s++;
    }
    else{
        left1s++;
    }
}
for(int i=2;i<=n*2;i+=2)
{
    if(arr[i]==0) right0s++;
    else right1s++;
}
int ans=0;
if(left0s>left1s) ans += left1s;
else ans += left0s;
if(right0s>right1s) ans+= right1s;
else ans += right0s;
cout<< ans;

return 0;
}
