#include <bits/stdc++.h>
using namespace std;

using ll= long long;

#define fl(i,n) for(int i=0;i<n;i++)

int main()
{

ll t;
cin>>t;
while(t--)
{
ll n,x;
cin>>n>>x;

vector<int> v(n);

vector<pair<int,int>> a(n);
fl(i,n)
{
cin>>v[i];
a[i].first = v[i] - x;
if(a[i].first < 0) a[i].first = 0;
a[i].second = v[i] + x;
}
ll ans= 0;

 int l = a[0].first,r = a[0].second;

 for(int i=1;i<n;i++)
 {
    if(a[i].first >r || a[i].second <l)
    {
        ans++;
        l = a[i].first;
        r = a[i].second;

    }
    l = max(l,a[i].first);
    r = min(r,a[i].second);
 }
 cout<<ans<<endl;
}
return 0;
}
