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
 ll n,q;

 cin>>n>>q;

ll pos = 0;
 string s = "";
 vector<int> v(n+1);

 

 for(int i = 1;i<=n;i++)
 {
    cin>>v[i];
 }


 vector<int> c(n+1);



//ll x = 0,y = 0;
//  for(auto &[x,y]:mpp)
//  {
//     if(q)
//     {
//         //q--;
//         int ss = y.size();

        // if(ss == 1)
        // {
        //     c[y[0]] = 1;
        // }
        // else
        // {
        //     c[y[0]] = 1;
        //     c[y[1]] = 1;
        // }
//         for(int i=0;i<ss;i++)
//         {


//             c[y[i]] = 1;


//         }
//         if(x>q)
//         {

//             q--;
//         }

//     }
//  }

//  fl(i,n)
//  {
   
//    if(c[i])
//    {
//     if(!pos)
//     {
//         c[i] = 0;

//     }
//     if(v[i] > pos)
//     {
//         pos--;
//     }
//    }

//    for(auto &it:c)
//    {
//         cout<<it;
//    }
//    cout<<endl;
//  }


//  fl(i,n)
//  {
//     if(v[i] <= pos && q > 0)
//     {
//          s += '1';
//      }
//      else if(v[i] > pos && q > 0)
     
//      {

//         q--;
//          s += '1';
         
//     }
    
//     else
//     {
//         s += '0';
//     }
    // if(q == 0)
    // {
    //     break;
    // }

for(int i=n;i>=1;i--)
{
   if(pos<v[i])
   {
    if(pos < q)
    {
        pos++;
        c[i] = 1;

    }
    else
   {

    c[i] = 0;

   }
   }
   else
   {
    c[i] = 1;
   }
}

for(int i=1;i<=n;i++)
{
    cout<<c[i];
}
cout<<endl;

 }

 //cout<<s<<endl;





return 0;
}
