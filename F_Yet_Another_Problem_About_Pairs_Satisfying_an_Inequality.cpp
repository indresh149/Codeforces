#include <bits/stdc++.h>

using namespace std;

// #define IndreshGoswami 1
//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define IG cout.tie(NULL);

#define vvi vector<vector<int>>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define int long long
#define endl "\n"
//Code by Indresh Goswami
//Language C++
//Main
#define f0(i,n) for(int i=0;i<n;i++)
#define f(i, a, b) for (int i = a; i < b; i++)
#define pb(k) push_back(k)
#define fi first
//Code by Indresh Goswami
//Language C++
//Main
#define cout(a) cout<<a<<" ";
#define se second
#define all(x) (x).begin(),(x).end()
#define sz(a) (int)((a).size())
#define mem(a,n) memset(a,0,sizeof(a))
#define br break;

//Code by Indresh Goswami
//Language C++
//Main

//Code by Indresh Goswami
//Language C++
//Main


void techboat()
{
   int n;
   
   cin >> n;

   vector<int> a(n);

   
   for(int i=0;i<n;i++)
   {
       cin>>a;
     }

   
   map<int, vector<int>>mp;

   
   set<int> v;


   
   f0(i, n)
   {

      if (a[i] < i + 1)
      {
         mp[a[i]].push_back(i + 1);

        
         v.insert(a[i]);

      }
   }
   map<int, int>mpp;

   
   for (auto i : mp)
   {

    
      mpp[i.first] = sz(i.second);

   }
   vector<int> t;
   for (auto i : v)
   {

      t.pb(i);
   }

   for (int i = sz(t) - 2; i >= 0; i--)
   {

      mpp[t[i]] += mpp[t[i + 1]];

   }
  
      int ans = 0;

   for (auto i : mp)
   {
      int k = i.first;

      for (auto j : i.second)
      {

         auto it = v.lower_bound(j);

         if (it == v.end())
         {

            break;
         }
         if (*it == j)
         {
            it++;
         }
         if (it != v.end())
         {
            ans += mpp[*it];

         }
      }
   }
   cout << ans << endl;
   
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   int testtt = 1;
   cin >> testtt;
   while (testtt--)
   {
   
      techboat();

   }
   return 0;
}