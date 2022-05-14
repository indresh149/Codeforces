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
void chitra(int code,vector<vector<int> >&tt,int pat,int& idx,vector<vector<int> >&res,unordered_map<int,int>&mppp){
    if(pat==-1)
    {
        mppp[code]=++idx;

        res[idx].push_back(code);

    }
    
    else
    
{
        int idx=mppp[pat];


        res[idx].push_back(code);

        mppp[code]=idx;
    }
    for(int i=0;i<tt[code].size();i++)
    
    {
        if(i==0)
        {
            chitra(tt[code][i],tt,code,idx,res,mppp);
        }
        
        else
        
        {
            chitra(tt[code][i],tt,-1,idx,res,mppp);
        }
    }
}
void techboat()
{
    ll s;
    cin>>s;


    
    vector<vector<int> > aryan(s+1);
    unordered_map<int,int> tt;
    vector<int> a(s+1);

    vector<vector<int> >pee(s+1);
    int pt;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==i){
            a[i]=-1;
            pt=i;
            continue;
        }
        pee[a[i]].push_back(i);
    }
    tt[pt]=0;

    int index=0;

    chitra(pt,pee,pt,index,aryan,tt);
    cout<<index+1<<"\n";
    for(int i=0;aryan[i].size()!=0;i++){
        cout<<ans[i].size()<<"\n";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    // hal el habd sa7? habd from what i learnt online
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
