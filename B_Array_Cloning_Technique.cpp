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
int main()
{
Code By IG
ll t;
cin>>t;
fl(i,t)
{
  
map<int, int> mping;

        int news;
        cin >> news;
        int arr[news];

        int cnt1 = 0, cnt2 = 0, mxi = 0, ansss = 0;

        for(int i = 1; i <= news; ++i){
            cin >> arr[i];
            mping[arr[i]]++;
            if(mping[arr[i]] > mxi){
                mxi = mping[arr[i]];
            }
        }

        cnt1 = news - mxi;//second max
        cnt2 = news - mxi;// second min 

        if(cnt2 == 0){
            cout << 0 << '\n';
        }// then use else
        else{
            while(cnt2 > 0){
                ansss++;
                cnt2 -= mxi;
                mxi *= 2;
            }
            cout << cnt1 + ansss << '\n';

}
}
return 0;
}
