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
  int asize;
    cin >> asize;
    vector<int> vccc(asize);
    fl(i,asize)
    {
      cin >> vccc[i];
    }
    


    int t_f =0;


    for(int i = 0; i < asize- 1; i++)
{
    t_f+=(vccc[i+1] -vccc[i]) - 1;


    
}


if(t_f<=2){
    cout << "YES"<<endl;
}
else{
    cout << "NO"<<endl;
}
 }


 return 0;
}
