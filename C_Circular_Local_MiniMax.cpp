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
  
  ll n; cin>>n;
   


   vector<int> v(n);



   fl(i,n)
   {
       cin>>v[i];

   }


   unordered_map<int,int> kl;

   fl(i,n)
   {
       kl[v[i]]++;
      // cout<<kl<<" "

   }

   // sort(arr.begin(),arr.end());

   sort(v.begin(),v.end());

   vector<int> arr(n);

   ll p = 0;



   ll z = 1;

   z = pow(10,4);



   for(int i=0;i<n;i+=2,p++)
   {
       arr[i] = v[p];

   }
   for(int i = 1;i<n;i+=2,p++)
   {
       arr[i] = v[p];


   }

   bool sum = true;

   for(int i = 1;i<n-1;i++)
   {
       if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
         // sum = true;


       }
       else if(arr[i] < arr[i-1] && arr[i] < arr[i+1])
       {

    // sum = false;

       }
       else{
           sum = false;

       }
   }

   if(arr[0] > arr[1] && arr[0] > arr[n-1])

   {
      // sum = false;

   }
   else if(arr[0] < arr[1] && arr[0] < arr[n-1])
   {
           // sum = false;


   }
   else
   {
       sum = false;

   }
   if(arr[n-1] > arr[n-2] && arr[n-1] > arr[0])
   {
          // sum = true;

   }
   else if(arr[n-1]< arr[n-2] && arr[n-1] < arr[0])
   {

     // sum = true;

   }
   else
   {
       sum = false;


   }

   if(z == n)


   {
       sum = false;

   }


   if(sum)
   {
      
      
       cout<<"Yes"<<endl;
       for(auto  c: arr)
       {
           cout<<c<<" ";
// cout<<it<<endl;

       }
   }
   // cout<<ans<endl;

   else
   {
       cout<<"No"<<endl;
       //cout<<c<<endl;

   }


   
}
return 0;
}
