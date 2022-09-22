#include <bits/stdc++.h>
using namespace std;

using ll= long long;

int main()
{
 ll n,q;


        cin>>n>>q;

        
        vector<ll> vec(n);

        for(int i=0;i<n;i++)
        {

            cin>>vec[i];
        }

        vector<ll> pre(n,0);

        vector<ll> post(n,0);

        for(int i=1;i<n;i++){
     
     if(vec[i]>vec[i-1]){

                pre[i]=pre[i-1];
            }
            else{
                pre[i]=pre[i-1]+(vec[i-1]-vec[i]);
            }
        }

        for(int i=n-2;i>=0;i--){
            if(vec[i]>vec[i+1]){
                post[i]=post[i+1];
            }
            else{
                post[i]=post[i+1]+(vec[i+1]-vec[i]);
            }
        }
        while(q--){
            ll a,b;

            cin>>a>>b;
            if(a>b){
                ll ans=post[b-1]-post[a-1];
                cout<<ans<<endl;
            }
            else{

                ll ans=pre[b-1]-pre[a-1];
                cout<<ans<<endl;

                
            }
        }
 
    return 0;
}
