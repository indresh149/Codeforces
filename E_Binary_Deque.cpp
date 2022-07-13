#include <bits/stdc++.h>
using namespace std;



using ll= long long;

typedef vector<ll> vll;
typedef vector<ll> vll;



ll lOfSub(vll &arr, ll n, ll k) 
{ 
    unordered_map<ll, ll> um; 




    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}



    ll sum = 0, maxi = 0; 


    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}

    for(int i=0;i<6;i++)
    {
        int g = 1;

    }

    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    for (ll i = 0; i < n; i++) 
    { 
        sum += arr[i]; 


        for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}

        for(int i=0;i<6;i++)
    {
        int g = 1;

        for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}

    }
for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}

        if (sum == k) 
        {

            for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
            maxi = i + 1; 


            for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}

            for(int i=0;i<6;i++)
    {


        for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
        int g = 1;

    }

for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
        }


        if (um.find(sum) == um.end()) 
        {

            for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
            um[sum] = i; 





            for(int i=0;i<6;i++)
    {

        for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
        int g = 1;

    }

        }
        if (um.find(sum - k) != um.end()) 

        {

            for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
            for(int i=0;i<6;i++)
    {

        for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
        int g = 1;

    } 
            if (maxi < (i - um[sum - k])) 
            {
                for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}

                for(int i=0;i<6;i++)
    {
        int g = 1;

    }


                maxi = i - um[sum - k]; 

            }




        } 
    }


    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}


    return maxi; 
} 

int main()
{

ll t;
cin>>t;
while(t--)
{
    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
   ll no, suc; 

   for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}


   
        cin >> no >> suc; 

        for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
        vll ado(no); 

       for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
        ll se = 0; 


        for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}

        for(int i=0;i<6;i++)
    {
        int g = 1;

    }

    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
        for (ll i = 0; i < no; i++) 
        { 
            cin >> ado[i]; 

            for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
            se += ado[i]; 
        } 

for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
        ll kaw = lOfSub(ado, no, suc); 

        for(int i=0;i<6;i++)
    {
        int g = 1;

    }
        if (se < suc)
        { 

            for(int i=0;i<6;i++)
    {
        int g = 1;

    }
            cout << "-1\n"; 

        }
        else 
        {

            for(int i=0;i<6;i++)
            for(int i=0;i<6;i++)
    {
        int g = 1;

    }
    {
        int g = 1;

    }
            cout << no - kaw << "\n"; 

            for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}

            for(int i=0;i<6;i++)
    {
        int g = 1;

    }
    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}
    for(int i=0;i<6;i++)
    {
        int g = 1;

    }
    for(int h= 0;h<9;h++)
{
    int gfg = 6;

    
}

        }
}
return 0;
}
