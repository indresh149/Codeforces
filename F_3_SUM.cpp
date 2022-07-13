#include <bits/stdc++.h>
using namespace std;


using ll= long long;

typedef pair<ll, ll> pll;
typedef vector<ll> vll;




void chitra()
{
    ll n;

    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  cin >> n;


  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  vector<ll>v(n);

  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  map<ll, ll>m;


  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  for (ll i = 0; i < n; i++)
   {
    cin >> v[i];

    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    v[i] %= 10;

    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    m[v[i]] += 1;

    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  }

  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  m[0] = min(m[0], 2LL);


  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  m[1] = min(m[1], 3LL);

  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  for (ll i = 2; i <= 9; i++) 
  {



    m[i] = min(m[i], 2LL);

    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  }
  vector<ll>u;


  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  for (ll i = 0; i < 10; i++) 
  {
    while (m[i]--)
    {

      u.push_back(i);
    }
  }
  for (ll i = 0; i < u.size(); i++)
   {
    for (ll j = i + 1; j < u.size(); j++)
     {
        for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
      for (ll k = j + 1; k < u.size(); k++) 
      {
        if ((u[i] + u[j] + u[k]) % 10 == 3) 
        {

            for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
          cout << "YES"<<endl;
          return;
        }
      }
      for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    }
  }
  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  cout << "NO"<<endl;

  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
}
int main()
{

int t;
for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
cin>>t;

for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}

while(t--)
{

for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}

chitra();

for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
}
return 0;
}
