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
char searchit(vector<array<ll,4>> &v,string &s,ll k)
{
    if(k < 0)
    {

        return '/';

    }
    else if(k < s.size())
    {
        
        return s[k];

    }
    else
    {
        fl(i,v.size())
        {

            if(v[i][0] <= k && v[i][1] >= k)
            {

                return searchit(v,s,v[i][2] + k -v[i][0]);

            }

        }
        }
    
    return '/';
}
int main()
{
Code By IG
ll t;
cin>>t;
fl(i,t)
{

ll n,c,q;

cin>>n>>c>>q;

string s;

cin>>s;

vector<array<ll,4>> a;

ll posit;

posit = n;


fl(i,c)
{
    ll l,r;

    cin>>l>>r;
    l--;
    r--;
    a.pb({posit,posit+r-l,l,r});
    posit += r-l+1;
}

fl(i,q)
{
    ll k;

    cin>>k;

    k--;
    cout<<searchit(a,s,k)<<endl;
}
}
return 0;
}
