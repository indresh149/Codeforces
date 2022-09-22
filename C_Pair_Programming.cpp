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
void techboat()
{
    ll k,n,m;
cin>>k>>n>>m;

vector<int> a(n),b(m);
fl(i,n)
{
cin>>a[i];
}
fl(i,m)
{
  cin>>b[i];
}

int i = 0, j = 0;

vector<int> ans;

while(i < n || j < m){
    if(i < n && j < m)
    {
        if(a[i] == 0) ans.push_back(0),i++,k++;
        else if(b[j] == 0) ans.push_back(0),j++,k++;
        else{
            if(a[i] < b[j] && a[i] <= k) ans.push_back(a[i]),i++;
            else if(a[i] >= b[j] && b[j] <= k) ans.push_back(b[j]),j++;
            else {
                cout<<-1<<endl;
                return;
            }
        }
    }
    else if(i < n){
        if(a[i] == 0) ans.push_back(0),i++,k++;
        else{
            if(a[i] <= k) ans.push_back(a[i]),i++;
            else {
                cout<<-1<<endl;
                return;
            }
        }
        }
        else if( j < m){
            if(b[j] == 0) ans.push_back(0),j++,k++;
            else{
                if(b[j] <= k) ans.push_back(b[j]),j++;
                else {
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{
Code By IG
ll t;
cin>>t;
while(t--)
{

techboat();
}


return 0;
}
