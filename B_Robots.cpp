#include <bits/stdc++.h>
using namespace std;


using ll= long long;


#define kll(i,n) for(int i=0;i<n;i++)



void solve()
{
    ll N,M; 
    
    cin>>N>>M;

    char chitra[N][M];

    kll(i,N)
    {



       kll(j,M){
           cin>> chitra[i][j];
       } 


    }

    bool ght = 0, poo = 0;



    kll(i,N)
    {
        kll(j,M)
        {


            if(chitra[i][j] == 'R'){
                poo = 1;
                ght = 0;

            
                if(j == 0)
                {
                    break;
                }
                kll(k,N)

                {
                   kll(l,j)

                   {
                       if(chitra[k][l] == 'R')
                       {
                           ght = 1;

                       }
                   } 
                }
                break;
            }
        }
        if(poo == 1)
        {
            break;
        }
    }
    if(ght == 1)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

int main()
{

ll t;
cin>>t;
while(t--)
{
    solve();

}
return 0;
}
