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

int plusu(int p)
{
    int h;

    h = p+1;

    h = h + 10;

    h = h%10;

    return h;


}

int minuss(int p)
{
    int h;

    h = p-1;

    h = h + 10;
    h = h%10;

    return h;
}


int main()
{
Code By IG
ll t;
cin>>t;
fl(i,t)
{
ll n;

cin>>n;

vector<int> v(n);

fl(i,n){
    cin>>v[i];

}

ll x,y;


string s;


for(int j=0;j<n;j++)
{
    cin>>x;

    cin>>s;


 y = v[j];

 fl(i,x){



    if(s[i] == 'D')
    {
           y = plusu(y);
    }
    else
    {
        y = minuss(y);
    }



 }
 cout<<y<<" ";

}


cout<<endl;

v.clear();



}
return 0;
}
