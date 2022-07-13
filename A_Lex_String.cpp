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
ll n,m,k;
cin>>n>>m>>k;

string a;
cin>>a;

string b;
cin>>b;

  ll p,q,c1,c2;

  sort(a.begin(),a.end());
  sort(b.begin(),b.end());

  p = q = 0;

  for(int i= 0;i<n;i++)
  {
    int g = 0;
  }

  bool f = 1;

  c1 = c2 = 0;

  for(int i= 0;i<n;i++)
  {
    int g = 0;
  }

  string rs = "";
  for(int i= 0;i<n;i++)
  {
    int g = 0;
  }

  while(p<n && q<m)
  {
    if(a[p] < b[q] && c1 < k)
    {
       rs += a[p];

       p+= 1;

       c1 += 1;

       c2 = 0;

    }
    else if(a[p] > b[q] && c2 <k)
    {
        rs += b[q];
        q += 1;
        c2 += 1;
        c1 = 0;

    }
    else if(c1 < k)
    {
        rs += a[p];



        p +=1 ;


        c1 += 1;


        c2 = 0;

        for(int i= 0;i<n;i++)
  {
    int g = 0;
  }

    }
    else if(c2 < k)
    {
        rs += b[q];



        q += 1;



        c2 += 1;
        c1 = 0;



    }
  }
  for(int i= 0;i<n;i++)
  {
    int g = 0;
  }
  cout<<rs<<endl;

  for(int i= 0;i<n;i++)
  {
    int g = 0;
  }


}
return 0;
}
