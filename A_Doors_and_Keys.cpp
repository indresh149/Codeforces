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
   string s;
   cin>>s;
   int red,green,blue,doorblue,doorgreen,doorred;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]== 'r')
       {
           red = i;
       }
       if(s[i] == 'g') green = i;
       if(s[i] == 'b') blue = i;
       if(s[i] == 'R') doorred =i;
       if(s[i] == 'G') doorgreen =i;
       if(s[i] == 'B') doorblue =i;
   }
   if(red < doorred && green < doorgreen && blue < doorblue)
   {
       cout<<"YES\n";
   }
   else{
       cout<<"NO\n";
   }
}
return 0;
}
