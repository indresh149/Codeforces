#include <bits/stdc++.h>
using namespace std;

using ll= long long;

int main()
{

ll t;
cin>>t;
while(t--)
{
    
ll n,a,b;

cin>>n>>a>>b;




if(n == a && n == b)
{
    cout<<"Yes"<<endl;
}
else if((n-1) > (a+b))
{
    cout<<"Yes"<<endl;
}
else
{
    cout<<"No"<<endl;
}
}



return 0;
}