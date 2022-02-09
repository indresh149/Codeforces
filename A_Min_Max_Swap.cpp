#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define io ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        for(int i=0;i<n;i++)
        {
                if(a[i]<b[i])
                {
                    int temp=a[i];
                    a[i]=b[i];
                    b[i]=temp;
                }   
        }
        int mx=a[0];
        for(int i=0;i<n;i++){
            if(a[i]>mx){
                mx=a[i];
            }
        }
        int mx2=b[0];
        for(int i=0;i<n;i++){
            if(b[i]>mx2){
                mx2=b[i];
            }
        }
        cout<<mx*mx2<<endl;
    }
}