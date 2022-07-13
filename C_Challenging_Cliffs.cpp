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
int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)  {
			cin>>v[i]; }	
		
		vector<int>v1=v;
		sort(v1.begin(),v1.end());
		int mini=INT_MAX;
		
		stack<pair<int,int>> q;
		
		for(int i=0;i<n-1;i++){
			if(mini>(v1[i+1]-v1[i])){
				q.push({i,i+1});
				mini=v1[i+1]-v1[i];
			}
		}
		int x=q.top().first;
		int y=q.top().second;
		int k=0;
		if(x+2<n){
			k=x+2;
		}
		cout<<v1[x]<<" ";
		if(k!=0){
		for(int i=k;i<n;i++){
			cout<<v1[i]<<" ";
		}	
	    }
		for(int i=0;i<x;i++){
			cout<<v1[i]<<" ";
	    }
		cout<<v1[y]<<endl;
}
return 0;
}
