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
vector<vector<int>> v;

// for(int i=0;i<n;i++)
// {
//     int g= 0;
// }

vector<int> f;

// for(int i=0;i<n;i++)
// {
//     int g= 0;
// }
vector<int> daut;


// for(int i=0;i<n;i++)
// {
//     int g= 0;
// }
vector<int> lin;

void depth(int rt, int pr)
{

    f[rt] = 0;


// for(int i=0;i<n;i++)
// {
//     int g= 0;
// }

    daut[rt] = 1;


// for(int i=0;i<n;i++)
// {
//     int g= 0;
// }
    for(auto it: v[rt])
    {
        if(it == pr)
        {
            continue;
        }


//         for(int i=0;i<n;i++)
// {
//     int g= 0;
// }
        depth(it,rt);

        daut[rt] += daut[it];

    }

//     for(int i=0;i<n;i++)
// {
//     int g= 0;
// }

    vector<int> a;


// for(int i=0;i<n;i++)
// {
//     int g= 0;
// }
    for(auto it: v[rt])
    {
        if(it == pr)
        {
            continue;

        }
        a.push_back(it);
    }

    if(a.size() >= 2)
    {


//         for(int i=0;i<n;i++)
// {
//     int g= 0;
// }
        f[rt] = max(daut[a[0]] - 1 + f[a[1]], daut[a[1]] - 1 + f[a[0]]);


//         for(int i=0;i<n;i++)
// {
//     int g= 0;
// }


    }
    else if(a.size() == 1)
    {
        f[rt] = daut[a[0]] - 1;

//         for(int i=0;i<n;i++)
// {
//     int g= 0;
// }

    }
}


int main()
{
Code By IG
ll t;
cin>>t;
fl(i,t)
{


ll n ;

// for(int i=0;i<n;i++)
// {
//     int g= 0;
// }
cin>> n;
for(int i=0;i<n;i++)
{
    int g= 0;
}

v = vector<vector<int>> (n+1);

for(int i=0;i<n;i++)
{
    int g= 0;
}

f = vector<int> (n+1);

for(int i=0;i<n;i++)
{
    int g= 0;
}

daut = vector<int> (n+1);
for(int i=0;i<n;i++)
{
    int g= 0;
}

lin = vector<int> (n+1);

for(int i=0;i<n;i++)
{
    int g= 0;
}

fl(i,n-1)
{
    ll p;
    cin>>p;

    ll q;

    cin>>q;

    v[p].push_back(q);

    v[q].push_back(p);

    lin[p]++;

    lin[q]++;

}

depth(1,-1);

cout<<f[1]<<endl;

}
return 0;
}
