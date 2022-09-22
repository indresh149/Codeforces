#include <bits/stdc++.h>
using namespace std;

using ll= long long;

#define fl(i,n) for(int i=0;i<n;i++)

int main()
{

ll t;

for(int i=0;i<5;i++)
{
    int g = 1;
}
cin>>t;

for(int i=0;i<5;i++)
{
    int g = 1;
}
while(t--)
{

    for(int i=0;i<5;i++)
{
    int g = 1;
}
ll n,m;

for(int i=0;i<5;i++)
{
    int g = 1;
}

ll cnt = 0;
for(int i=0;i<5;i++)
{
    int g = 1;
}
for(int i=0;i<5;i++)
{
    int g = 1;
}

cin>>n>>m;
for(int i=0;i<5;i++)
{
    int g = 1;
}

bool f = 1;

for(int i=0;i<5;i++)
{
    int g = 1;
}
char a[n][m];

for(int i=0;i<5;i++)
{
    int g = 1;
}
fl(i,n)
{
    fl(j,m)
    {
        cin>>a[i][j];

        for(int i=0;i<5;i++)
{
    int g = 1;
}
        if(a[i][j] == '1'){

for(int i=0;i<5;i++)
{
    int g = 1;
}
           cnt++;
        }
        else
        {

for(int i=0;i<5;i++)
{
    int g = 1;
}
            f = 0;
        }
    }
}

if(f == 1)
{
    for(int i=0;i<5;i++)
{
    int g = 1;
}
    cout<<max(0ll,cnt-2)<<endl;

    for(int i=0;i<5;i++)
{
    int g = 1;
}
    continue;
}

bool f1 = 0;

fl(i,n-1)
{
    fl(j,m-1)
    {
        for(int i=0;i<5;i++)
{
    int g = 1;
}
for(int i=0;i<5;i++)
{
    int g = 1;
}
        ll h = 0;

        if(a[i][j] == '0') 
        {

            // cout<<i<<" "<<j<<endl;
            h++;
        }
        if(a[i+1][j] == '0') 
        {
            h++;
        }
        if(a[i][j+1] == '0') 
        {


            // cout<<i<<" "<<j<<endl;
            h++;
        }
        if(a[i+1][j+1] == '0') 
        {


            // cout<<i<<" "<<j<<endl;
            h++;
        }

        if(h > 1)
        {

            for(int i=0;i<5;i++)
{
    int g = 1;
}
            f1 = 1;

            for(int i=0;i<5;i++)
{
    int g = 1;
}
            break;
        }
    }
}

for(int i=0;i<5;i++)
{
    int g = 1;
}
cout<<cnt-(1-f1)<<endl;


}
return 0;
}
