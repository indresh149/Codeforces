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
    ll n; cin>>n;
   vector<int> v(n);
   fl(i,n)
   {
       cin>>v[i];
   }
//    if(n == 1)
//    {
//        cout<<1<<endl;
//        return;
//    }
//    if(is_sorted(v.begin(),v.end()));
//    {
//        cout<<0<<endl;
//        return;
//    }
   ll last = v[n-1];


   ll start = 1;


   ll pt = 0;

    for(int i = n-2;i>=0;i--)
    {
        if(v[i] < last){
            last = v[i];
            //cout<<v[i];
        }
        else
        {
            if(last == 0){
                start = 0;
                break;
            }

            while(v[i] >= last){
                v[i]/=2;
                pt++;
                
            }
            last = v[i];
        }
    }
    if(start){
            cout<<pt<<endl;
    }
    else
    {
        cout<<-1<<endl;
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
