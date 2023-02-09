#include <bits/stdc++.h>
using namespace std;
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
//std::cin/std::cout
template<typename T> istream& operator>>(istream& in, vector<T>& a) {for(auto &x : a) in >> x; return in;};
template<typename T> ostream& operator<<(ostream& out, vector<T>& a) {for(auto &x : a) out << x << ' '; return out;};
//std::pair
template<typename T1, typename T2> ostream& operator<<(ostream& out, const pair<T1, T2>& x) {return out << x.f << ' ' << x.s;}
template<typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& x) {return in >> x.f >> x.s;}
//Ordered set and ordered multiset
//template<typename T> using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
//template<typename T> using ordered_multiset = tree<T, null_type,less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
//Short declaration of 2D and 3D vectors
template<typename T> using matrix = vector<vector<T> >;
template<typename T> using rubik = vector<vector<vector<T> > >;
//rubik<int> a; // instead of vector<vector<vector<int> > > a;
//Erase repeated neighbor elements
template<typename T> void Unique(T &a) {a.erase(unique(a.begin(), a.end()), a.end());}
//Prime test for large numbers
ll powermod(ll a, ll b, ll m)
{
if (b == 0) return 1;
ull k = powermod(a, b / 2, m);
k = k * k;
k %= m;
if (b & 1) k = (k * a) % m;
return k;
}
bool isPrime(ull n, int iter = 5)
{
if (n < 4) return n == 2 || n == 3;
if (n % 2 == 0 || n % 3 == 0) return false;
for (int i = 0; i < iter; i++)
{
ull a = 2 + rand() % (n - 3);
if (powermod(a, n - 1, n) != 1) return false;
}
return true;
}
//LIS
multiset<ll> LIS(vector<ll> A)
{
ll a = A.size();
multiset<ll> S;
multiset<ll>::iterator it;
fl(i,a - 1)
{
S.insert(A[i]);
it = S.upper_bound(A[i]);
if (it != S.end()) S.erase(it);
}
return S;
}
//Longest Strictly Increasing Subsequence
multiset<ll> LSIS(vector<ll> A) // a.k.a Longest Strictly Increasing Sequence
{
ll a = A.size();
multiset<ll> S;
multiset<ll>::iterator it;
fl(i,a - 1)
{
S.insert(A[i]);
it = S.lower_bound(A[i]);
it++;
if (it != S.end()) S.erase(it);
}
return S;
}
// #define I_G 1
//Code by Indresh Goswami
//Language C++
//Main
int main()
{
Code By IG
 ll n, q, i, j, l, r, x;
    
    cin>>n>>q;
    
    ll a[n+1], zero[n+1], pre[n+1];
    
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    if(a[1]==0)
    zero[1]=1;
    else
    zero[1]=0;
    
    pre[1]=a[1];
    
    zero[0]=pre[0]=0;
    a[0]=0;
    
    for(i=2; i<=n; i++){
        pre[i]=pre[i-1]^a[i];
        if(a[i]==0)
        zero[i]=zero[i-1]+1;
        else
        zero[i]=zero[i-1];
    }
    
    map<ll, vector<ll>> mp[2];
    
    for(i=1; i<=n; i++)
    {
        if((i%2)==0){
            mp[0][pre[i]].push_back(i);
        }else{
            mp[1][pre[i]].push_back(i);
        }
    }
    
    for(;q--;)
    {
        cin>>l>>r;
        
        
        x=pre[r]^pre[l-1];
        
        if(x!=0){
            cout<<"-1\n";
            continue;
        }
        
        if(zero[r]-zero[l-1]==(r-l+1)){
            cout<<"0\n";
            continue;
        }
        
        if((r-l+1)%2==1){
            cout<<"1\n";
            continue;
        }
        
        if(a[r]==0 || a[l]==0){
            cout<<"1\n";
            continue;
        }
        
        vector<ll>::iterator itr;
        if((l%2)==0){
            itr=lower_bound(mp[0][pre[l-1]].begin(), mp[0][pre[l-1]].end(), l);
            
            
            if(itr!=mp[0][pre[l-1]].end()){
                i=mp[0][pre[l-1]][itr-mp[0][pre[l-1]].begin()];
            }else{
                i=-1;
            }
            
            if(i<r && i>l){
                cout<<"2\n";
            }else{
                cout<<"-1\n";
            }
        }else{
            itr=lower_bound(mp[1][pre[l-1]].begin(), mp[1][pre[l-1]].end(), l);
            
            if(itr!=mp[1][pre[l-1]].end()){
                i=mp[1][pre[l-1]][itr-mp[1][pre[l-1]].begin()];
            }else{
                i=-1;
            }
            
            if(i<r && i>l){
                cout<<"2\n";
            }else{
                cout<<"-1\n";
            }
        }
        
        
    }
}