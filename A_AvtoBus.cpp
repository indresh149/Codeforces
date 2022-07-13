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
void techboat()
{
     ll n;
    cin>>n;
    // if(n%2 == 1)
    // {
    //     cout<<-1<<endl;
    //     return;
    // }
    // if(n%4 == 0 && n%6 == 0)
    // {
    //     cout<<n/6<<" "<<n/4<<endl;
    // }
    // else if(n == 4 || n == 6)
    // {
    //      cout<<1<<" "<<1<<endl;
    // }
    // else if(n%4 == 0 && n%6 != 0)
    // {
    //     cout<<n/4<<" "<<n/4<<endl;
    // }
    // else
    // {
    //     cout<<-1<<endl;
    // }
    ll tt,tv,tx;
    ll kk =0;
     tv = n;

     tt = n/6;

     tv = n - (tt*6);

     if(tv%4 != 0)

     {
         kk = 0;
         while(tv % 4 != 0 && tt > 0 && kk <4){
             kk++;
             tv = tv + 6;
             tt--;

         }

         if(tv%4 != 0){
             cout<<-1<<endl;
             return;


         }

     }

     tt += (tv/4);
    tx = n/4;

    tv = n%4;

    if(tv!= 0)
    {
        kk = 0;
        while(tv % 6 != 0 && tx > 0 && kk < 4)
        {
            kk++;
            tv = tv + 4;
            tx--;
        }

        if(tv%6 != 0)
        {
            cout<<-1<<endl;
            return;
        }
        tx += (tv/6);
    }
    cout<<tt<<" "<<tx<<endl;


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
