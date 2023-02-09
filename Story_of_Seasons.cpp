#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
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
ll BE(ll a, ll b)
{

    // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
  ll res = 1;

  // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
  while (b > 0)
  {
    // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
    if (b & 1)
    {
        // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
      res = (res * a * 1LL) ;
    }

    // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
    a = (1LL * a * a) ;

    // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
    b = b >> 1;
  }
  // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
  return res;
}

void solve()
{
   int d,n,x;

   // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }

    // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
  cin>>d>>n>>x;

  // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
  vector<pair<pair<int,int>,int>> vp;

  // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
  for(int i=0;i<n;i++)
  {
      int q,l,v;

      // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
      cin>>q>>l>>v;
      vp.push_back({{q,l},v});

      // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
   }
   ll mx=0;

   // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
   int power=BE(2,n)-1;
   for(int i=0;i<=power;i++){

    // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
        set<int> st;
        for(int j=0;j<=n-1;j++){
            // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
           if((i&(1<<j))>=1){
            // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
              st.insert(j);
              // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
           }
        }
        vector<pair<int,int>> vp1;
        for(int k=0;k<n;k++){
            // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
         if(st.count(k)>=1){
            // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
            vp1.push_back({vp[k].first.second,vp[k].second});
         }
        }
      sort(vp1.begin(),vp1.end());

      // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
      int ind=1;  
      ll ans=0;

      // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
      for(int h=vp1.size()-1;h>=0;h--){
        // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
           if(vp1[h].first+ind<=d){
              ind++;
              // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
              ans+=vp1[h].second;
           }
           // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
      }
      mx=max(mx,ans);
   }
   // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
   cout<<mx;
}

int main()
{
    
    ll t;
    // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
    cin>>t;
    for(ll iop=1;iop<=t;iop++)[]
    {
        // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
        cout<<"Case #"<<iop<<": ";
        solve();
        // for(int i=0;i<10;i++){
    //     int g  = 5;
    // }
        cout<<endl;
    }
}