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
    //@indresh
        ll asize;
        cin>>asize;

        ll arr[asize];

        for(int i=0;i<asize;i++){
            cin>>arr[i];
        }
        ll res=0;


        ll brr[asize];
        brr[0]=0;

        ll mot[asize];
        mot[0]=0;
        ll ct = 0;

        ll maxm=0;
        if((arr[0]%2)==(arr[asize-1]%2)){
            for(int i=1;i<asize;i++){
                if((arr[i]%2)==(arr[0]%2)){
                    res++;
                }
            }

            cout<<res<<"\n";
        }else{
            for(int i=1;i<asize;i++){
                if(arr[0]%2!=arr[i]%2){
                    brr[i]=brr[i-1]+1;
                }else{
                    brr[i]=brr[i-1];
                }
            }

            res=brr[asize-1];
            for(int i=1;i<asize;i++){
                if(arr[i]%2==arr[0]%2){
                    ct++;
                    res=min(res,ct+brr[asize-1]-brr[i]);
                }

            }


            cout<<res<<"\n";
        }
}
return 0;
}
