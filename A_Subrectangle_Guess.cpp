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
    ll n,m;
    cin>>n>>m;

    ll v[n][m];

    ll maxi = LONG_LONG_MIN;

    ll r = 0;
    ll c = 0;

    for(ll i = 0;i<n;i++)
    {
        for(ll j = 0;j<m;j++)
        {
            cin>>v[i][j];

            if(v[i][j] > maxi)
            {
                maxi = v[i][j];

                r = i;

                c = j;

            }
        }

        if(n == 1 && m == 1)
        {
            cout<<1<<endl;
            return;

        }
    }

    ll mcr = max(n-r,r+1);

    ll mcc = max(m - c, c+1);

    cout<<mcr*mcc<<endl;
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
