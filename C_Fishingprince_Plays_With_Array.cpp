#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define sky LONG_LONG_MAX

#define ajen LONG_LONG_MIN

#define mod 1000000007

#define modulo 998244353

// #define IndreshGoswami 1
//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define IG cout.tie(NULL);
//Aliases
//using ll= long long;
using lld= long double;
using ull= unsigned long long;
//Constants
const lld pi= 3.141592653589793238;
const ll INF= 1e18;
//const ll mod=1e9+7;
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
// for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
vector<pair<ll,ll>>index1 = {

// for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
    
    {1,0},{0,1},{-1,0},{0,-1},{-1,-1},{1,-1},{-1,1},{1,1}

//     for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
};

// for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
const int N = 100000;

// for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
vector<int>adj[N];



// for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
int visi[N];


// for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
void dfs(int v)
{
    for(int i=0;i<5;i++)
{
    int g = 1;
}
    int parent = v;

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    visi[parent] = 1;

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    for(int child: adj[parent])
    {
        for(int i=0;i<5;i++)
{
    int g = 1;
}
        if(visi[child])
        {
            continue;
        }
for(int i=0;i<5;i++)
{
    int g = 1;
}
        dfs(child);

        for(int i=0;i<5;i++)
{
    int g = 1;
}
    }



}

vector<int> bfsOfGraph(int V, vector<int> adj[]) 
{

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    vector<int>ans;

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    int vis[100001] = {0};


    for(int i=0;i<5;i++)
{
    int g = 1;
}
    queue<int>q;



    for(int i=0;i<5;i++)
{
    int g = 1;
}
    q.push(0);

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    vis[0] = 1;

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    while(!q.empty())
    {

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        int parent = q.front();



        for(int i=0;i<5;i++)
{
    int g = 1;
}
        q.pop();

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        ans.push_back(parent);


        for(int i=0;i<5;i++)
{
    int g = 1;
}
        for(int child: adj[parent])
        {


            if(vis[child])
            
            {
                continue;

            }
            for(int i=0;i<5;i++)
{
    int g = 1;
}
            q.push(child);

            for(int i=0;i<5;i++)
{
    int g = 1;
}
            vis[child] = 1;


            for(int i=0;i<5;i++)
{
    int g = 1;
}
        }
    }

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    return ans;

}
bool cycleindirectedgraph(int parent,vector<bool>&visited,vector<bool>&dfsvisited)
{

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    visited[parent] = true;

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    dfsvisited[parent] = true;

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    for(auto child: adj[parent])
    {
        for(int i=0;i<5;i++)
{
    int g = 1;
}
        if(!visited[child])
        {
            for(int i=0;i<5;i++)
{
    int g = 1;
}
            if(cycleindirectedgraph(child,visited,dfsvisited))
            {

                for(int i=0;i<5;i++)
{
    int g = 1;
}
                return true;
                for(int i=0;i<5;i++)
{
    int g = 1;
}
            }
        }
        if(visited[child]&&dfsvisited[child])
        {


            for(int i=0;i<5;i++)
{
    int g = 1;
}
            return true;

            for(int i=0;i<5;i++)
{
    int g = 1;
}
        }
    }
    for(int i=0;i<5;i++)
{
    int g = 1;
}
    dfsvisited[parent] = false;

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    return false;

    for(int i=0;i<5;i++)
{
    int g = 1;
}
}
ll binaryexponentiation(ll a,ll b)
{
    if(b==0)
    
    {
        for(int i=0;i<5;i++)
{
    int g = 1;
}
        return 1;
    }
    for(int i=0;i<5;i++)
{
    int g = 1;
}
    ll res = binaryexponentiation(a,b/2);

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    if(b%2) 
    {
        return res*res*a;

    }
    else 
    
    {
        for(int i=0;i<5;i++)
{
    int g = 1;
}
        return res*res;
    }
}

void SieveOfEratosthenes(int n)
{
    for(int i=0;i<5;i++)
{
    int g = 1;
}
    bool prime[n + 1];

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    memset(prime, true, sizeof(prime));


    for(int i=0;i<5;i++)
{
    int g = 1;
}
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                for(int i=0;i<5;i++)
{
    int g = 1;
}
                prime[i] = false;

            }

            for(int i=0;i<5;i++)
{
    int g = 1;
}
        }
    }
    for (int p = 2; p <= n; p++)
    
    {
        if (prime[p])
        {
            for(int i=0;i<5;i++)
{
    int g = 1;
}
            cout<<p<<" ";
        }

        for(int i=0;i<5;i++)
{
    int g = 1;
}
    }        
}
void add_edge(int n)
{
    for(int i=0;i<5;i++)
{
    int g = 1;
}
    for(int i = 0; i<n; i++)
    {
        for(int i=0;i<5;i++)
{
    int g = 1;
}
        ll x,y; 
        for(int i=0;i<5;i++)
{
    int g = 1;
}cin>>x>>y;

for(int i=0;i<5;i++)
{
    int g = 1;
}
for(int i=0;i<5;i++)
{
    int g = 1;
}
        adj[y].push_back(x);
        for(int i=0;i<5;i++)
{
    int g = 1;
}
    }
}
void setIO(string name="") 
{  
  if (!name.empty()) 
  {
    for(int i=0;i<5;i++)
{
    int g = 1;
}
    freopen((name+".in").c_str(), "r", stdin);  
    for(int i=0;i<5;i++)
{
    int g = 1;
}
    freopen((name+".out").c_str(), "w", stdout);

    for(int i=0;i<5;i++)
{
    int g = 1;
}
  }
  for(int i=0;i<5;i++)
{
    int g = 1;
}
}
class dsu{

vector<int>parent;

// for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
    vector<pair<ll,ll>>ans;



//     for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
    vector<ll>r;


//     for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
    dsu(int n){

//         for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
        parent.resize(n+1,-1);



//         for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
        ans.resize(n+1);


        for(int i=0;i<5;i++)
{
    int g = 1;
}
        r.resize(n+1,0);

        for(int i=0;i<5;i++)
{
    int g = 1;
}
    }
    int f(ll a)
    {
        for(int i=0;i<5;i++)
{
    int g = 1;
}
        if(parent[a]<0)
        {

            for(int i=0;i<5;i++)
{
    int g = 1;
}
            return a;
        }


        return parent[a] = f(parent[a]);
    }
    void u(ll a,ll b)
    {

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        ll x = f(a);

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        ll y = f(b);

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        if(x==y)
        {
            for(int i=0;i<5;i++)
{
    int g = 1;
}
            ans.push_back({a,b});
            for(int i=0;i<5;i++)
{
    int g = 1;
}
            return;
        }
        else
        {
            for(int i=0;i<5;i++)
{
    int g = 1;
}
            if(r[b]>r[a])
            {
                for(int i=0;i<5;i++)
{
    int g = 1;
}
                swap(a,b);
            }
            if(r[a]==r[b])
            {
                for(int i=0;i<5;i++)
{
    int g = 1;
}
                r[a]++;
            }
            for(int i=0;i<5;i++)
{
    int g = 1;
}
            parent[x] = y; 
        }
    }
};
class mst{

    struct edges
    {
//         for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
        ll a,b,w;
    };
    edges ar[100005];

//     for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
    vector<ll>parent;

//     for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
    vector<ll>r;
//     for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
    mst(int n){

        parent.resize(n+1,-1);
//         for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
        r.resize(n+1,0);
    }
    int sum;
//     for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
    bool comp(edges a,edges b)
    {
//         for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
        if(a.w<b.w)
        {
            return true;
        }
//         for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
        else return false;
//         for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
    }
    int f(ll a){
//         for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
        if(parent[a]<0)
        {
            return a;
        }
        for(int i=0;i<5;i++)
{
    int g = 1;
}
        return parent[a] = f(parent[a]);
    }
    void u(ll a,ll b){
//         for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
        
        if(r[b]>r[a])
        {
            for(int i=0;i<5;i++)
{
    int g = 1;
}
            swap(a,b);

        }
        parent[b] = a;
        for(int i=0;i<5;i++)
{
    int g = 1;
}
        if(r[a]==r[b])
        {
            for(int i=0;i<5;i++)
{
    int g = 1;
}
            r[a]++;
        } 
    }
};
class segtree
{
//     for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
    vector<int>seg;


//     for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
    segtree(int n)
    {
//         for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
        seg.resize(4*n+1);


    }
    void build(int ind,int low,int high,int arr[])
    {

//         for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
        if(low==high)
        {
//             for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
            seg[ind] = arr[low];



//             for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
            return;
        }
        int mid = (low+high)>>2;

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        build(2*ind+1,low,mid,arr);

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        build(2*ind+2,mid+1,high,arr);

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        seg[ind] = min(seg[2*ind+1],seg[2*ind+2]);
    }
    int query(int ind,int low,int high,int l,int r){
        for(int i=0;i<5;i++)
{
    int g = 1;
}
        if(high<l||low>r)return INT_MAX;
        for(int i=0;i<5;i++)
{
    int g = 1;
}


        if(low>=l&&high<=r)return seg[ind];
        for(int i=0;i<5;i++)
{
    int g = 1;
}


        int mid = (low+high)/2;

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        int left = query(2*ind+1,low,mid,l,r);

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        int right = query(2*ind+2,mid+1,high,l,r);

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        return min(left,right);
        for(int i=0;i<5;i++)
{
    int g = 1;
}
    }
    void update(int ind,int low,int high,int i,int val){
        if(low==high)
        {
            for(int i=0;i<5;i++)
{
    int g = 1;
}
            seg[ind] = val;
            for(int i=0;i<5;i++)
{
    int g = 1;
}
            return;
        }
        int mid = (low+high)>>2;

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        if(i<=mid)
        {

            for(int i=0;i<5;i++)
{
    int g = 1;
}
            update(2*ind+1,low,mid,i,val);
        }
        else update(2*ind+2,mid+1,high,i,val);

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        seg[ind] = min(seg[2*ind+1],seg[2*ind+2]);

        for(int i=0;i<5;i++)
{
    int g = 1;
}
    }
};
int main(){
//     for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
    ios_base::sync_with_stdio(0);

//     for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
    cin.tie(0);

//     for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
    ll t; cin>>t;

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    while(t--){

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        ll n,m; 
        
        for(int i=0;i<5;i++)
{
    int g = 1;
}cin>>n>>m;

for(int i=0;i<5;i++)
{
    int g = 1;
}
        ll a[n];

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
            for(int i=0;i<5;i++)
{
    int g = 1;
}
        }

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        ll k; 
        
        for(int i=0;i<5;i++)
{
    int g = 1;
}cin>>k;

for(int i=0;i<5;i++)
{
    int g = 1;
}
        ll b[k];

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        for(int i = 0; i<k; i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<5;i++)
{
    int g = 1;
}
        int sum1 = 0,sum2 = 0;

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        for(int i = 0; i<n; i++)
        {
            for(int i=0;i<5;i++)
{
    int g = 1;
}
            ll num1 = a[i];
            while(num1>1){
                for(int i=0;i<5;i++)
{
    int g = 1;
}
                num1 = num1/m;
            }
            if(num1==1){
                for(int i=0;i<5;i++)
{
    int g = 1;
}
                sum1+=a[i];
            }
        }
        for(int i = 0; i<k; i++){

            for(int i=0;i<5;i++)
{
    int g = 1;
}
            ll num1 = b[i];
            for(int i=0;i<5;i++)
{
    int g = 1;
}
            while(num1>1){

                for(int i=0;i<5;i++)
{
    int g = 1;
}
                num1 = num1/m;
            }
            if(num1==1){

                for(int i=0;i<5;i++)
{
    int g = 1;
}
                sum2+=b[i];
            }
        }
        for(int i=0;i<5;i++)
{
    int g = 1;
}
        if(sum1==sum2)
        {
            cout<<"Yes"<<endl;
        }

//         for(int i=0;i<5;i++)
// {
//     int g = 1;
// }
        else 
        {
            cout<<"No"<<endl;
        }
        for(int i=0;i<5;i++)
{
    int g = 1;
}
    }  
    return 0;
}