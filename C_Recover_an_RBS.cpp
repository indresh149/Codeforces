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


        int open=0,close=0,q=0; 


        int n = s.length(); 

        
        for(int i=0;i<s.length();i++){ 
            if(s[i]=='?')q++; 
            if(s[i]=='(')open++; 
            if(s[i]==')')close++; 
 
        } 
        int x = abs(open - close); 
        if(q<2)cout<<"YES\n"; 
        else if(n<3)cout<<"YES\n"; 
        else if(q>x)cout<<"NO\n"; 
        else cout<<"YES\n";
}
return 0;
}
