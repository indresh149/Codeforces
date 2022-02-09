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
 ll hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc >> hm >> dm >> k >> w >> a;

        bool win = false;

        for(ll i = 0; i <= k; i++){
            ll curr = i;
            ll temp1 = dc + (w*curr), temp2 = hc + (a * (k-curr));
            ll val1 = hm/temp1, val2 = temp2/dm;
            if(hm%temp1){
                val1++;
            }
            if(temp2%dm){
                val2++;
            }
            if(val1 <= val2){
                win = true;
                break;
            }
        }

        if(win){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
}
return 0;
}
