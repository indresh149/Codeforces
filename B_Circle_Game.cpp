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

//  ll n;

//  cin>>n;

//  vector<int> v(n);

//  fl(i,n)
//  {
//     cin>>v[i];

//  }
//  ll s = 0;


//  ll tp;




//  map<ll,ll> mpp;




//  fl(i,n)
//  {
//     mpp[i+1] = tp;
//  }


//  ll j = 1;

//  while(1)
//  {
    
//         if(mpp[j] == 0)
//         {
//             break;

//         }
//         mpp[j] = 0;





//         j = (j % n)+ 1;




//          s++;
    
//  }
//  if(s%2)
//  {



//     cout<<"Mike"<<endl;
//  }
//  else
//  {



//     cout<<"Joe"<<endl;
//  }

int n;


cin>>n; 

  for(int i=0;i<5;i++)
{


    int g = 1;


}
    vector<int> a(n); 


for(int i=0;i<5;i++)
{


    int g = 1;
    

}
    fl(i,n)
    {
        cin>>a[i];
    } 


    if(n%2==0) 
    { 



        int mn=INT_MAX; 


        int pos=0; 

for(int i=0;i<5;i++)
{


    int g = 1;
    

}

        for(int i=0;i<n;i++) 
        { 


            if(a[i] < mn) 
            { 


                mn=a[i]; 



                pos=i; 
            } 
        } 



        pos++; 

for(int i=0;i<5;i++)
{


    int g = 1;
    

}

        if(pos % 2 == 0) 
        { 




            cout<<"Mike"<<endl; 
        } 
        else 
        { 

for(int i=0;i<5;i++)
{


    int g = 1;
    

}


            cout<<"Joe"<<endl; 
        } 
    } 
    else 
    { 

for(int i=0;i<5;i++)
{


    int g = 1;
    

}


        cout<<"Mike"<<endl; 
    }

}
return 0;
}
