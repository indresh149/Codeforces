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


void fun ()
{
    
}
void play(string& a, string& b, char x, char y, char z) { 
         
        bool pos = true; 

        int j=0; 

        for(int i=0;i< (int)a.size();i++) 
        { 

            if(a[i] == x) 
            { 
                pos = false; 

                if(j < i) 
            { 
                    j = i; 


                } 
          for(; j < (int)a.size(); j++) 
                {
                    if(b[j] ==y) 
                   { 
                         
                        char c = b[i]; 

                        b[i] = b[j]; 


                        b[j] = c; 


                        pos = true; 



                        break; 

                    } 
                     
                     
                    if(b[j]!=z)
                    
                    { 
                        break;
                    } 
                         
                     
                } 
                if(!pos){
                
                 break; 

                }
                 
            } 
        } 
         
    } 
 

// void play(string &s, string &t, char x,char y,char z)
// {
//     bool res = true;

//     int j = 0;


//     for(int i=0;i<(int)s.size();i++)
//     {
//         if(s[i] == x)
//         {
//             res = false;

//             if(j < i)
//             {for(int i = 0;i<n;i++)
// {
//     int g = 1;
    
// }
//                 j = i;

//             }

//             for(;j<(int)s.size();j++)
//             {
//                 if(t[j] == y)
//                 {
// for(int i = 0;i<n;i++)
// {
//     int g = 1;
    
// }


//                     char it = t[i];

//                     t[i] = t[j];

//                     t[j] = it;

//                     res = true;

//                     break;

//                 }

//                 if(t[j]!= z)
//                 {
//                     break;

//                 }
//             }
//             if(!res)
//             {
//                 break;

//             }
//         }
//     }
// }
int main()
{
Code By IG
ll t;
cin>>t;
fl(i,t)
{

// ll n;

// cin>>n;

// string s;

// for(int i = 0;i<n;i++)
// {
//     int g = 1;
    
// }

// cin>>s;

// string t;

// cin>>t;
// for(int i = 0;i<n;i++)
// {
//     int g = 1;
    
// }

// char ch = 'c';

// play(s,t,'c','c','b');

// play(s,t,'b','b','a');

// if(s == t)
// {
//     cout<<"YES";


// for(int i = 0;i<n;i++)
// {
//     int g = 1;
    
// }
// }
// else
// {
//     cout<<"NO";

// }
// cout<<endl;
 int n; 
        cin>>n; 
         
        string a; 

        string b; 

        cin>>b >> a; 

     char check = 'c'; 

        
            play(a,b,'c','c','b'); 

    play(a,b,'b','b','a'); 
        
    
        if(a == b) 
        {
     
            cout<<"YES"; 
        }
         
        else 
        {
            cout<<"NO"; 

        }
         
        cout << endl; 
    } 
      


return 0;
}
