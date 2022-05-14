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
    ll n;
    cin>>n;
    string str;
    cin>>str;
    ll res= 0;
    // for(int i=0;i<n;i+=2)
    // {
    //     if(str[i]!=str[i+1])
    //     {
    //         res++;
    //     }
    // }
    //     cout<<res<<endl;
    
    //int res = 0;

    for(int i = 0 ; i <=n-2 ; i+=2)
    {
        if(str[i]!=str[i+1])

        {
            res++;
        }
    }
   int fftt=0;
   int lst=2;
   for(int i = 0 ; i <=n-2 ; i+=2)
   {
       int tt=2;
       if(str[i]==str[i+1]&& str[i]=='0') 
       {
       tt=0;
       }
        if(str[i]==str[i+1]&& str[i]=='1')
        {

        
        tt=1;
        }

       if(lst==0 && tt==1)
       {
        fftt++;
           lst=1;

       }
       if(lst==1 && tt==0)
       {

           fftt++;
           lst=0;
       }
       if(lst ==2)
       {

           lst  =tt;
       }
   }
cout<<res<<" "<<fftt+1<<endl;

}
return 0;
}
