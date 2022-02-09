#include <iostream>
#include <bits/stdc++.h>
// #include <sys/resource.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace chrono;
// using namespace __gnu_pbds;
//def
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

int pressed[4][4];
int toggled[4][4];
                               
//Code by Indresh Goswami
//Language C++
//Main
int main()
{
Code By IG
for(int i=1;i<=3;i++){
    for(int j=1;j<=3; j++){
        cin>>pressed[i][j];
        toggled[i][j] = pressed[i][j];
    }
}

for(int i=1; i<=3 ;i++){
    for(int j=1;j <=3;j++){
        if(pressed[i][j]!=0){
            toggled[i][j-1] += pressed[i][j];
            toggled[i][j+1] += pressed[i][j];
            toggled[i-1][j] += pressed[i][j];
            toggled[i+1][j] += pressed[i][j];
        }
    }
}

for(int i=1;i<=3;i++)
{
    for(int j=1;j<=3;j++)
    {
        if(toggled[i][j] %2) cout<<"0";
    else{
        cout<<"1";
    }
    }
    cout<<'\n';
}
return 0;
}
