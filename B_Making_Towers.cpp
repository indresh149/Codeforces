#include <bits/stdc++.h>
using namespace std;

using ll= long long;
#define fl(i,n) for(int i=0;i<n;i++)

int main()
{

ll t;
cin>>t;
fl(i,t)
{
int q;


    cin >> q;


    int a[q + 2];


    // fl(i, q + 2)
    // {
    //     cin >> a[i];
    // }
    map<int, vector<int>>mp;

    // fl(i, q + 2)
    // {
    //     cin >> a[i];
    // }
    for(int i = 1; i <= q; i++){

        cin >> a[i];
    //}
        mp[a[i]].push_back(i);


    }
    int ans[q + 2];

    // fl(i, q + 2)
    memset(ans, 0,sizeof ans);

    // fl(i, q + 2)
    for(auto it : mp){

       // int x = it.first;
        int total = 1;
       // int pos = 0;
        for(int i = 1; i < it.second.size(); i++){
            //int pos = it.second[i];
            if((it.second[i] - it.second[i - 1] - 1) & 1) 
            
            {
                continue;

            }

            total++;

        }

        //ans[it.second[0]] = total;
        ans[it.first] = total;
    }
    // fl(i, q + 2)
    for(int i = 1; i <= q; i++)
    {

     cout << ans[i] << " ";
    }
    cout << endl;

}



return 0;
}
