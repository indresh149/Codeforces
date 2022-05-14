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
ll gorilla, monk;
        cin >> gorilla >> monk;

        vector<ll> arraa(gorilla);
        for (int i = 0; i < gorilla; i++)
            cin >> arraa[i];

        ll allotota = 0;
        sort(arraa.begin(), arraa.end());
        for (int i = 1; i < gorilla; i++)
        {
            allotota += max(arraa[i], arraa[i - 1]);
        }

        allotota += (gorilla + max(arraa[0], arraa[gorilla - 1]));

        if (allotota <= monk)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
}
return 0;
}
