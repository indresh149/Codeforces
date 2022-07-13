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

// ll n, o=0, e=0; 
//         cin >> n; 
//         ll p[n]; 
//         go(i, n) 
//         { 
//             cin >> p[i]; 
//             if(p[i]%2) 
//             { 
//                 o++; 
//             } 
//             else 
//             { 
//                 e++; 
//             } 
//         } 
             
//         if(o) 
//         { 
//             cout << n-o << endl; 
//             continue; 
//         } 
 
//         ll mn=1e9, cur, ans=1e9; 
 
//         go(i, n) 
//         { 
//             cur=0; 
 
//             while (p[i]%2==0) 
//             { 
//                 cur++; 
//                 p[i]/=2; 
//             } 
 
//             ans=min(ans, cur);             
//         } 
 
//         cout << ans+(n-(o+1)) << endl;



 ll n; cin>>n;
  
  vector<string> v(2*n);

  fl(i,2*n)
  {
      cin>>v[i];


  }
  string str;

  cin>>str;

  ll p[26] = {0};

  fl(i,str.size())
  {
      p[str[i] - 'a']++;

  }

  fl(i,2*n)
  {
      fl(j,v[i].size())
      {
          p[v[i][j] - 'a']++;


      }
  }
  char t;

 fl(i,26)
 {
     if(p[i]%2 != 0)
     {
         t = i;

         break;

     }
 }
  cout<<(char)(t + 'a')<<"\n";

}
return 0;
}
