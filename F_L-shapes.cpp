
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll i, ll j, ll n, ll m, string a[])
{
    ll c1=0, c2=0, c3=0;
    
    if(i-1>=0)
    {
        if(a[i-1][j]=='*'){
            c1++;
        }
    }
    if(i+1<n)
    {
        if(a[i+1][j]=='*'){
            c1++;
        }
    }
    if(j-1>=0)
    {
        if(a[i][j-1]=='*'){
            c2++;
        }
    }
    if(j+1<m)
    {
        if(a[i][j+1]=='*'){
            c2++;
        }
    }
    if(i-1>=0 && j-1>=0)
    {
        if(a[i-1][j-1]=='*'){
            c3++;
        }
    }
    if(i-1>=0 && j+1<m)
    {
        if(a[i-1][j+1]=='*'){
            c3++;
        }
    }
    if(i+1<n && j-1>=0)
    {
        if(a[i+1][j-1]=='*'){
            c3++;
        }
    }
    if(i+1<n && j+1<m)
    {
        if(a[i+1][j+1]=='*'){
            c3++;
        }
    }
    if((c1==1 && c2==1 && c3==0) || (c1==1 && c3==1 && c2==0) || (c2==1 && c3==1 && c1==0))
    {
        return true;
    }else{
        return false;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, m, i, j, f, c;
    
    cin>>t;
    
    for(;t--;)
    {
        f=0;
        
        cin>>n>>m;
        
        string a[n];
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j]=='*'){
                    if(check(i, j, n, m, a)==false)
                    {
                        //cout<<i<<" "<<j<<"\n";
                        f=1;
                        break;
                    }
                }
            }
        }
        
        if(f==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}