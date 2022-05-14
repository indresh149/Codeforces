#include <bits/stdc++.h>
using namespace std;



int main()
{

int t;
cin>>t;
while(t--)
{
   int p,q,r,s;

   cin>>p>>q>>r>>s;


 //coiut<<p<<q<<r<<e<W<<,w<W<,e,,,,E,e<E<r<<W<e
   if(max(p,r)<= q  && max(p,r)<=s)
   {

       //cout<<max(p,r)<<endl;>>
  cout<<max(p,r)<<endl;
   }

 else{
     //cout<<max(p,r)<<endl;>>
  cout<<p+r<<endl;

}
}
return 0;
}
