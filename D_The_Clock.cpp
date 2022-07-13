#include <bits/stdc++.h>
using namespace std;

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

string s;

for(int h= 0;h<9;h++)
{
    int gfg = 6;


}
  cin >> s;
  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  int x;

  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  cin >> x;

  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  int a = x / 60, b = x % 60;

  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  int c = 10 * (s[0] - '0') + (s[1] - '0'), d = 10 * (s[3] - '0') + (s[4] - '0');


  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  string p = "";


  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  p += s[0];

  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  p += s[1];
               p += s[3];


  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  p += s[4];


  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
   int ans = 0;


   for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  if (p[0] == p[3] && p[1] == p[2])
  {
    ans += 1;

  }
  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  string q = p;

  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  while (1) 
  {

    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    c += a;


    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    d += b;

    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    c += d / 60;
    d %= 60;

    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    c %= 24;
    p = "";

    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    if (c / 10 == 0)
    {
      p += '0';

    }
    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    p += to_string(c);

    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    if (d / 10 == 0)
    {
      p += '0';

    }
    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    p += to_string(d);


    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    if (p == q) {
      break;
    }

    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    if (p[0] == p[3] && p[1] == p[2])
    {
      ans += 1;

    }
    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  }

  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
  cout<<ans<<endl;

  for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}

}




return 0;
}
