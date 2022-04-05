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
     int n;cin>>n;
     if(n == 2)
     {
       cout<<-1<<endl;
        return;
     }
     int a[n][n];
     if(n%2 == 1)
     {
       int k = 1;
       int x = 0;
       while(k <= (n*n))
       {
         int i = x/n;
         i = i%n;
         int j = x%n;
         a[i][j] = k;
         k++;
         x += 2;
       }
     }
     else{
       int k = 1;
       for(int i = 0;i < n;i++){
          if(i%2 == 0){
            for(int j=0;j<n;j+=2)
            {
              a[i][j] = k++;
            }
          }
          else
          {
            for(int j = 1;j<n;j+=2){
              a[i][j] = k++;
            }
          }
       }
        for(int i=0;i<n;i++){
            if(i%2==1){
                for(int j=0;j<n;j+=2) a[i][j]=k++;
            }
            else{
                for(int j=1;j<n;j+=2) a[i][j]=k++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
     

}
int main()
{
Code By IG
ll t;
cin>>t;
fl(i,t)
{
 techboat();
}
return 0;
}
