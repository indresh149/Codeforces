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
typedef vector<ll> vll;
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
void techboat()
{
//      ll n,q;
//     cin>>n>>q;

//     ll m,k,indx,value;

//     ll lsum = -1, sum =0;

//     map<ll,ll> mpp;

//     vector<int> v(n);
//    fl(i,n)
//    {
//        cin>>v[i];
//        sum += v[i];

//    }
//     while(q--)
//     {
//         int tester;
//         cin>>tester;
//         if(tester==1)
//         {
//             //int indx,value;
//             //ll sum = 0;
//             cin>>indx>>value;
//             indx--;
//             // fl(i,n)
//             // {
//             //     v[indx] = value;
//             // }
//             // fl(i,n)
//             // {
//             //     sum += v[i];
//             // }
//             // cout<<sum<<endl;
//             if(lsum == -1) {
//                 sum += (k - v[indx]);
//                 cout<<sum<<endl;
//                 v[indx] = k;
//                 return;
//             }
//             if(mpp.find(indx ) == mpp.end())
//             {
//                 mpp[indx] = k;

//                 sum += (k - lsum);

//                 cout<<sum<<endl;
//                 return;
//             }

//             sum += (k - mpp[indx]);

//             v[indx] = k;

//         }
//         else
//         {
            
//             cin>>k;
//             //fl(i,n)
//             // {
//             //     v[i] = newval;
//             // }
//             // ll sum = 0;
//             // fl(i,n){
//             //     sum += v[i];
//             // }
//             // cout<<sum<<endl;
//             mpp.clear();
//             sum = n*k;
//             lsum = k;

//         }
//         cout<<sum<<endl;

//     }
                                
        ll n, t;
        ll query, value;
        ll idx;
        ll lsum =-1;
        ll res=0;
        map<ll, ll> chit;


        
        cin>>n>>t;


        ll arr[n];
        
        fl(i, n)
        {
            cin >> arr[i];
            
        }


        fl(i,n)
        {
            res += arr[i];
        }

        while (t--)
        {
            cin >> query;

            if(query==1)
            {
                cin >> idx >> value;


                idx--;

                if(lsum==-1){

                    res  += (value-arr[idx]);


                    cout << res << endl;

                    arr[idx]=value;
                    continue;

                }
                
                if(chit.find(idx) == chit.end())
                {   
                    
                    
                    chit[idx]=value;

                        //cout<<njabh

                    res+=(value-lsum);

                    cout << res << endl;

                    continue;
                }


                res+=(value-chit[idx]);



                arr[idx]=value;
            }else{
                cin >>value;
                chit.clear();


                res=n*value;


            lsum=value;
            }
            
            cout << res << endl;
                                              }
}
int main()
{



Code By IG
   techboat();

return 0;
}
