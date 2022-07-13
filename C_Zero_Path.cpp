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
typedef vector<int> vi;
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
int main()
{
Code By IG
ll t;
cin>>t;
fl(i,t)
{
int n, m; 

for(int i=0;i<5;i++)
{
    int g = 1;


}
        cin >> n >> m; 


        for(int i=0;i<5;i++)
{
    int g = 1;

    
}
        vector<vector<int>> a(n, vi(m)); 


        for(int i=0;i<5;i++)
{
    int g = 1;

    
}
        for (auto &x : a) 
        {
            for (auto &xx : x) 
            {
                cin >> xx; 
            }

        }
        for(int i=0;i<5;i++)
{
    int g = 1;

    
}
 
        int pl = 1 + (n + m - 2); 

        for(int i=0;i<5;i++)
{
    int g = 1;

    
}
        if (pl & 1) 
        { 
            cout << "NO\n"; 


            for(int i=0;i<5;i++)
{
    int g = 1;

    
}
            continue; 
        } 
 
        vector<vector<int>> mx1(n + 1, vi(m + 1, 0)); 


        for(int i=0;i<5;i++)
{
    int g = 1;

    
}
        vector<vector<int>> mx1c(n + 1, vi(m + 1, 0)); 

        for(int i=0;i<5;i++)
{
    int g = 1;

    
}
 
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= m; j++) 
            { 


                for(int i=0;i<5;i++)
{
    int g = 1;

    
}
                int x = a[i - 1][j - 1]; 

                for(int i=0;i<5;i++)
{
    int g = 1;

    
}
                if (x == 1) 
                { 

                    for(int i=0;i<5;i++)
{
    int g = 1;

    
}
                    mx1[i][j] = max(mx1[i - 1][j], mx1[i][j - 1]) + 1; 

                    for(int i=0;i<5;i++)
{
    int g = 1;

    
}
                    mx1c[i][j] = max(mx1c[i - 1][j], mx1c[i][j - 1]); 
                } 
                else 
                { 

                    for(int i=0;i<5;i++)
{
    int g = 1;

    
}
                    mx1[i][j] = max(mx1[i - 1][j], mx1[i][j - 1]); 

                    for(int i=0;i<5;i++)
{
    int g = 1;

    
}
                    mx1c[i][j] = max(mx1c[i - 1][j], mx1c[i][j - 1]) + 1; 

                    for(int i=0;i<5;i++)
{
    int g = 1;

    
}
                } 
            } 
 
        int req1 = pl / 2; 

        for(int i=0;i<5;i++)
{
    int g = 1;

    
}
        int max1 = mx1[n][m], min1 = pl - (mx1c[n][m]); 


        for(int i=0;i<5;i++)
{
    int g = 1;

    
}
        if (min1 <= req1 && req1 <= max1) {

        
            cout << "YES\n"; 

        }
        else 
        {
            cout << "NO\n"; 

        }
    } 
return 0;
}
