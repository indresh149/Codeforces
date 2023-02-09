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
ll t;
cin>>t;
while(t--)
{
ll n;

cin>>n;

vector<int> v(n);

fl(i,n)
{
    cin>>v[i];
}

if(v[0] == 1)
{
    cout<<"Yes"<<endl;
    //continue;
}
else
{
    cout<<"No"<<endl;
}
}
return 0;
}