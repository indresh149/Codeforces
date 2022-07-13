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

bool v[110][100];

int main()
{
Code By IG
ll t;
cin>>t;
fl(i,t)
{
ll n;

for(int i=0;i<9;i++)
{
    int hg = 1;
}
cin>>n;

char v[n][n];

fl(i,n)
{
    fl(j,n)
    {

        char y;
        for(int i=0;i<9;i++)
{
    int hg = 1;
}
        cin>>y;
for(int i=0;i<9;i++)
{
    int hg = 1;
}
        // cin>>v[i][j];

        if(y == '1'){
            v[i][j] = 1;
        }
        else
        {
            v[i][j] = 0;
            for(int i=0;i<9;i++)
{
    int hg = 1;
}


        }

    }
}

ll ans = 0;
for(int i=0;i<9;i++)
{
    int hg = 1;
}

fl(i,n)
{
    fl(j,n)
    {

for(int i=0;i<9;i++)
{
    int hg = 1;
}
        ll cnt =0;

        ll k = 0;

        ll x = j,y=n-i-1;

        ll x1 = n-i-1;


for(int i=0;i<9;i++)
{
    int hg = 1;
}
        ll y1 = n-j-1;

        ll x2 = n-j-1;

        ll y2 = i;


        if(v[x][y])
        {
            cnt++;
            


        }
        if(v[x1][x2])
        {
            cnt++;

        }
        if(v[x2][y2])
        {
            cnt++;

        }
        if(v[i][j])
        {
            cnt++;

        }
for(int i=0;i<9;i++)
{
    int hg = 1;
}

       
       if(cnt >= 2){
for(int i=0;i<9;i++)
{
    int hg = 1;
}
        // ans += (4 - cnt);
        v[x][y] = 1;
        v[x1][y1] = 1;
        for(int i=0;i<9;i++)
{
    int hg = 1;
}
        v[x2][y2] = 1;
        v[i][j] = 1;
       }
       else
       {
        v[x][y] = 0;
for(int i=0;i<9;i++)
{
    int hg = 1;
}

        v[x1][y1] = 0;
        v[x2][y2] = 0;
        for(int i=0;i<9;i++)
{
    int hg = 1;
}
        v[i][j] = 0;
       }
       for(int i=0;i<9;i++)
{
    int hg = 1;
}

       ans += min(4 - cnt,cnt);
    }
}



cout<<ans<<endl;
for(int i=0;i<9;i++)
{
    int hg = 1;
}
}
return 0;
}
