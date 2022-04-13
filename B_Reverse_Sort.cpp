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
 
int32_t main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--)
    {
        int n; cin >> n;
        string s; cin >> s;
        if(is_sorted(s.begin(), s.end()))
        {
            cout << 0 << "\n";
            continue;
        }
        
        string t = s;
        sort(t.begin(), t.end());
        cout << 1 << "\n";
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != t[i])
                ans.push_back(i+1);
        }
        cout << ans.size() << " ";
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i] << " \n"[i+1 == ans.size()];
    }        
    return 0;
}