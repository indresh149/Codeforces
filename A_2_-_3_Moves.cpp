#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define endl "\n"
#define all(a) a.begin(),a.end()
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define printa(arr) for(ll i=0,i<n;i++) cout<<arr[i];
#define vl vector<ll>
#define vpl vector< pair<ll,ll> >
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define makeuniq(v) v.resize(unique(all(v)) - v.begin())
#define fix(x) fixed << setprecision(x)
#define y() cout<<"YES"<<endl
#define n() cout<<"NO"<< endl
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
                     
//************************
//Important functions
                     
//gcd
/*
ll gcd(ll a,ll b){
   //base case
   if(b==0) return a;
   //rec case
   return gcd(b,a%b);
}
*/
                       
//extended euclid algorithm
/*
void extendedEuclidAlgorithm(ll a,ll b){
   //base case
   if(b==0){
       x=1;y=0;
       GCD=a;
       return;
   }
   //rec case
   extendedEuclidAlgorithm(b,a%b);
   ll cx=y;
   ll cy=x-((a/b)*y);
                   
   x=cx;
   y=cy;
}
*/
                       
//to compute a^b
/*
ll fast_modulo_exponentation(ll a,ll b){
   ll ans=1;
  while(b){
       if(b&1){
           ans*=a;
       }
       a*=a;
       b>>=1;
   }
   return ans;
}
*/
 
//to find multiplicative modulo inverse
/*
void multiplicative_modulo_inverse(ll a,ll m){
   if(gcd(a,m)==1){
       extendedEuclidAlgorithm(a,m);
       //as the func can return -ve value also, so to return +ve value we do (x+m)%m.
       cout<<(x+m)%m<<endl;
   }
   else cout<<
Multiplicative modulo inverse is not possible!
<<endl;
}
*/
 
//prime sieve
/*
void prime_sieve(ll *p){
   for(ll i=3;i<=100000;i+=2) p[i]=1;
 
   for(ll i=3;i<=100000;i+=2){
   if(p[i]==1){
       for(ll j=i*i;j<=100000;j+=i){
           p[j]=0;
       }
       }
       }
   p[2]=1;
   p[1]=0;p[0]=0;
}
*/
//************************
 
int main(){
   fast
   w(t){
        ll n;cin>>n;
        if(n==1) cout<<2<<endl;
        else if(n%3==0) cout<<n/3<<endl;
        // else if(n%2==0){
        //     cout<<n/2<<endl;
        // }
        else{
            ll d=n/3;
            while((n-(d*3))%2!=0){
                d--;
            }
            ll ans=d;
            ans+=(n-(d*3))/2;
            ll ans1;
            if(n%2==0){
                ans1=n/2;
                cout<<min(ans,ans1)<<endl;
            }
            else cout<<ans<<endl;
        }
   }
     
   return 0;
}