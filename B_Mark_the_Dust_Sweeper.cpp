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

    ll sum = 0;


    vll v(n);


    fl(i,n)
    {
        cin >> v[i];


        sum += v[i];
    }


    sum -= v[n - 1];


    ll i = 0;


    for (i = 0; i < n; i++)
    {

        if (v[i] != 0)
        {

            break;
        }

    }
  
    for (; i < n; i++)
    {

        if (v[i] == 0)
        {

            sum++;

        }

    }

    //cout << sum << endl;
    if (v[n - 1] == 0)
    {

        sum--;

    }


    cout << (sum >= 0 ? sum : 0) <<endl;
}
int main()
{
Code By IG
ll t;
cin>>t;
while(t--)
{
//int n,y;
// vector<int> v(n);
// fl(i,n)
// {
//   cin>>v[i];
// }

// fl(i,n-1)
// {
//     if(v[i] == 0)
//     {
//         v[i] = v[i]+1;
//     }
// }
//ll sum = 0;
// fl(i,n-1)
// {
//     sum += v[i];
// }
//cin>>n;
// fl(i,n)
// {
//     cin>>y;
//     sum += y;
// }
// bool f = false;

// for(int i=1;i<n;i++)
// {
//     cin>>y;
//     if(y != 0) f = true;

//     if(y == 0 && f == true)
//     {


//         sum++;
//     }

//     sum += y;
// }
// cout<<sum<<endl;

// vector<int> v(n);
// fl(i,n)
// {
//   cin>>v[i];
//   sum += v[i];
// }

// sum -= v[n-1];

// ll j = 0;

// fl(j,n)
// {
//     if(v[i] != 0)
//     {
//         break;

//     }
// }
// for(;j<n;j++)
// {
//     if(v[j] == 0)
//     {
//         sum++;
//     }
// }
// if(v[n-1] == 0)
// {
//     sum--;
// }
// cout<<(sum >= 0 ? sum : 0)<<endl;
techboat();
}
return 0;
}
