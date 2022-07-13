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


ll n;
cin>>n;


map<ll,ll> mpp;



vector<int> a;

ll nzer = 0;

vector<int> v(n);

ll c = 0;

fl(i,n)
{
    cin>>v[i];
   if(v[i] != 0)
   {


    nzer = true;
   }
   else
   {
    c++;
   }
   mpp[v[i]]++;

   if(mpp[v[i]] <= 3)
   {
    a.push_back(v[i]);

   }
}

if(nzer == false)
{
    cout<<"YES"<<endl;


    continue;
}

sort(a.begin(),a.end());

if(c == n-2 && a[0] == -1*a.back())
{


    cout<<"YES"<<endl;


    continue;

}


if(a.size()>10)
{
    cout<<"NO"<<endl;

}
else
{
    int g = a.size();

    bool ca = true;




    for(int i = 0; i < g; ++i) {

                   for(int j = i + 1; j < g; ++j)
                    {


                       for(int k = j + 1; k < g; ++k)
                        {


                           if(mpp.count(a[i] + a[j] + a[k]) == 0)
                            {


                               ca = false;
                           }
                       }
                   }
               }
               if(ca)
               {



                cout<<"YES"<<endl;
               }
               else
               {


                
                cout<<"NO"<<endl;
               }
}
// bool f  = true;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         for(int k=0;k<n;k++)
//         {
//            if(v[i]+v[j]+v[k] != v[i])
//            {
//             f = false;
//            }
//         }
//     }
// }
// if(f == false)
// {
//     cout<<"NO"<<endl;
// }
// else
// {
//     cout<<"YES"<<endl;
// }
}
return 0;
}
