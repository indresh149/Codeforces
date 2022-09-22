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

vector<string> v(n);

map<string,int> mpp;

set<string> stt;


fl(i,n){
    cin>>v[i];

    stt.insert(v[i]);

    mpp[v[i]]++;

}

fl(i,n)
{

    bool f = 0;


    string mid,last;

    fl(j,v[i].size()){



        last.clear();

     mid += v[i][j];

        for(int h = j+1;h<v[i].size();h++){

            last.push_back(v[i][h]);

        }


        if(stt.find(mid) != stt.end() && stt.find(last) != stt.end()){

            f = 1;
            break;

        }
    }


    if(f == 1){
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }
}
cout<<"\n";
}
return 0;
}
