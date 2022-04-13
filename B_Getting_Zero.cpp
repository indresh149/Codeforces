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
//const ll INF= 1e18;
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
const int base = 32768; 
//Code by Indresh Goswami
//Language C++
//Main
int n, x, a[base+8];
vector<int>l[base+8];
queue<int>s;
int main()
{
    
    memset(a, -1, sizeof(a));
    for(int i = 0; i < base; i++)
    {
        l[(i+1)%base].push_back(i);
        l[(i*2)%base].push_back(i);
    }
    a[0] = 0;
    s.push(0);
    while(!s.empty())
    {
        x = s.front();
        s.pop();
        for(int tmp : l[x])
            if(a[tmp] == -1)
            {
                a[tmp] = a[x]+1;
                s.push(tmp);
            }
    }
    cin>>n;
    while(n--)
    {
        cin>>x;
        cout<<a[x]<<' ';
    }
    return 0;
}