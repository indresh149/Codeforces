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
int aman[5009];
ll weak[5009][5009]; 

 ll sonam[5009][5009];
 
void solve()
{
    ll n;
    ll a;
    ll b;
    ll c;
    ll tt = 0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
         cin>>aman[i];
    }
    for(int i=1; i<=n; i++) 
    {
    for(int j=1; j<=n; j++)
    {
     sonam[i][j] = weak[i][j] = 0;
    }
    }

    a = 0;
     
    for(int i=1; i<=n; i++) 
    {
                     b = 0;
        for(int j=i+1; j<=n; j++) 


        {
            if(aman[j] < aman[i])
            {

             b++;
            }
            weak[i][j] = b;

        }

        a += b;
    }
    for(int j=1; j<=n; j++)
    {
        b = 0;
        
        for(int i=j; i>=1; i--)
        {
            b += weak[i][j];

            sonam[i][j] = b;
        }
    }

    for(int i=1; i<=n-3; i++)
    {
     c = weak[i][n];

        a -= c;
        for(int j=i+2; j<n; j++)
        {
            if(aman[i] < aman[j])
            { 
             b = a;
             
             c = sonam[i+1][j];
             b -= c;
             c = weak[j][n];
             b -= c;

             c = sonam[j+1][n];

             b -= c;
                weak += b;
            }
        }
    }
    cout<<weak<<"\n";
    return;
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
