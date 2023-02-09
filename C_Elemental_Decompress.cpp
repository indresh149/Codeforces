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
ll N;

bool isPossible=true;

cin>>N;

vector<ll> A(N);


vector<ll> B(N+1);

vector<ll> C(N+1);

vector<ll> D;

vector<ll> E;

fl(i,N)
{
cin>>A[i];

}

fl(i,N)
{
    B[A[i]]++;

}


for(ll j = 1;j <= N;j++)
{

    if(B[j] == 2)
    {
        
        D.push_back(j);


    }
    else if(B[j] == 1)
    {
       
        C[j] = j;
        
    }
    else if(B[j] == 0)
    {
        // C[j] = j;
        // D.push_back(j);
        E.push_back(j);
    }
    else
    {
        isPossible = false;
       // break;
    }
}

if(isPossible == true)
{
    // cout<<"NO"<<endl;
    // continue;

    sort(D.begin(),D.end());

    sort(E.begin(),E.end());


    fl(i,D.size())
    {
        //C[D[i]] = E[i];

        if(D[i] < E[i])
        {
            // C[D[i]] = D[i];
            // C[E[i]] = E[i];
            isPossible = false;
        }
        else
        {
             C[D[i]] = E[i];
            // C[E[i]] = D[i];


        }
    }
}

if(isPossible == true)
{
    // cout<<"NO"<<endl;
    // continue;

    

    cout<<"YES\n";

    set<ll> S;

    fl(i,N)
    {

        if(S.count(A[i]) == 0)
        {
            cout<<A[i]<<" ";
            S.insert(A[i]);
        }
        else
        {
            cout<<C[A[i]]<<" ";
           // S.insert(C[A[i]]);
        }
    }

    cout<<endl;

    S.clear();

    fl(i,N)
    {

        if(S.count(A[i]) == 0)
        {
            cout<<C[A[i]]<<" ";
            S.insert(A[i]);
        }
        else
        {
            cout<<A[i]<<" ";
           // S.insert(C[A[i]]);
        }
    }

    //cout<<A[i]<<" ";
    cout<<endl;

}
else
{
    cout<<"NO"<<endl;
}

}







return 0;
}