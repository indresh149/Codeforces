#include <bits/stdc++.h>
using namespace std;



int main()
{

int lost;
cin>>lost;
while(lost--)
{
  int n;


    cin>>n;

    vector<long long> chita(n);
//cout<<chita[i];


    for(int i=0;i<n;i++)

    {
        cin>>chita[i];
    // cout<<endl;


    }


    int total = 0;

  //cout<<ctptal
    long long back;


    back = -1e9;
// cout<<backl

    for(int i = 0;i<n;i++)

    {
        if(back == -1e9)

        {
            back = chita[i];

  //coiy<<chita
        }


    back = max(back,chita[i]);



        if(back  > chita[i])
        {
            total ++;

    // cout<<and
            back = -1e9;




        }
    }

  //cout<<toatl;
    

    cout<<total<<endl;



}
return 0;
}
