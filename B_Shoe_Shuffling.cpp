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
    ll n;
   cin>>n;
      // int g = 0;

   //vector<int> v;

//    fl(i,n)
//    {
//        cin>>v[i];

//    }
//    map<int,int> chit;

//    for(int i=0;i<=1;i++)
//    {
//        g=1;

//    }
//    int p= 0;
//    fl(i,n)
//    {
//        //chit[]
//        int r;
//        cin>>r;
//        chit[r]++;


//    }
//    map<int,int>::iterator c;

//    int y = 1;

//    for(int i=0;i<=1;i++)
//    {
//        g=1;

//    }

//    for(c = chit.begin();c != chit.end();c++)
//    {
//        if(c->second == 1)
//        {
//            g = 1;
//            break;

//        }
//        v.push_back(y+c->second-1);

//        for(int i=y;i< y+c->second-1;i++){
//            v.push_back(i);


//        }
//        y = y+c->second;
//    }

//    for(int i=0;i<=1;i++)
// {
//     g=1;
    
// }

//    if(g == 1)
//    {
//        cout<<-1<<endl;
//        for(int i=0;i<=1;i++)
//        {
//            g = 1;

//        }
//    }
//    else{

//        for(int i=0;i<v.size();i++){
//            cout<<v[i]<<" ";

//        }
//        cout<<endl;

//        for(int i=0;i<=1;i++){
//            g=1;
//        }
//    }

//   vector<pair<ll,ll>> a(n);

//   ll max = 0;

//   vector<int> ans(n);

//   fl(i,n)
//   {
//       cin>>a[i].first;

//       a[i].second = i;

//       ans[i] = i+1;



//   }
  

//   sort(a.begin(),a.end());

//   bool f = 1;

//   fl(i,n)
//   {
//       if(i == 0 && a[i].first != a[i+1].first)
//       {
//           f = 0;

//           break;

//       }

//       if(i== n-1 && a[i].first != a[i-1].first)
//       {
//           f=0;
//           break;


//       }

//       if(i > 0 && i<n-1 && a[i].first != a[i+1].first && a[i].first != a[i-1].first){
//           f = 0;
//           break;

//       }

//       if(a[i].first == a[i+1].first)
//       {
//           swap(ans[a[i].second],ans[a[i+1].second]);

//       }
//   }
//   if(f == 0)
//   {
//       cout<<-1<<endl;


//   }
//   else
//   {
//       fl(i,n)
//       {
//           cout<<ans[i]<<" ";

//       }
//       cout<<"\n";

//   }

//   ll arr[n+1];

//   arr[n] = -1;

//   fl(i,n)
//   {
//       cin>>arr[i];


//   }

//   if(n == 1)
// {

//     cout<<-1<<endl;

//     continue;

// }

// bool r = 0;

// if(arr[0]!= arr[1] || arr[n-1] != arr[n-2])
// {
//     r = 1;



// }

// for(int i=1;i<n-1;i++)
// {
//     if(arr[i] != arr[i+1] && arr[i] != arr[i-1])
//     {
//         r = 1;


//     }
// }

// if(r == 1)
// {
//     cout<<-1<<endl;
//     continue;
// }

// ll p = -1;
// ll y = -1;


// fl(i,n)
// {
//     if(p == -1)
//     {
//         p = i;


//     }

//     y = i;

//     if(arr[i] != arr[i])
//     {


//         y --;


//         cout<<y+1<<" ";

//         for(int k = p;k<y;k++)
//         {
//             cout<<k+1<<" ";

//         }
//         p = i;
//         y = i;

//     }

// }

// cout<<y+1<<" ";

// for(int m = p;m<y;m++)
// {
//     cout<<m+1<<" ";

// }
// cout<<"\n";

vector<ll> v(n);

map<ll,set<ll>> chit;

fl(i,n)
{

  cin>>v[i];

  chit[v[i]].insert(i+1);


}

fl(i,n)
{
    if(chit[v[i]].size() == 1)
    {
        cout<<-1<<endl;
        return;

    }
}

fl(i,n)
{
    if(chit[v[i]].size() == 1)
    {
        cout<<*chit[v[i]].begin()<<" ";

    }

    else
    {
        auto c = chit[v[i]].begin();

        c++;

        cout<<*c<<" ";

        chit[v[i]].erase(c);
       



    }
}

cout<<"\n";

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
