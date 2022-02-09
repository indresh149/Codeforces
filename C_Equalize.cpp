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
string s,t;
cin>>s>>t;
int cost =0 ;
for(int i=0;i<n;)
{
    if(s[i]!=t[i])
    {
        //Either swap or flip and increment the cost
        if(i+1 < n && s[i] != s[i+1] && s[i+1] != t[i+1])
        {
            i+=2;
        }
        else{
            i++;
        }
        cost++;
    }
    else{
        i++;
    }
}
cout<<cost<<endl;
return 0;
}
