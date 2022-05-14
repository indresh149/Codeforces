#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int, int>
#define F first
#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{

int t;
cin>>t;
while(t--)
{
int as;
        string r;
        cin >> as >> r;
 
        bool FL = true;


 
        for (int i = 0; i < as; i++)
        {
            if (r[i] == 'W')
                continue;
            else
            {
                int j = i, cc = 0, ccc = 0;
                while (j < as && r[j] != 'W')
                {
                    if (r[j] == 'R')
                        cc++;
                    else if (r[j] == 'B')
                        ccc++;
 
                    j++;
                }
 
                if (cc == 0 || ccc == 0)
                {
                    FL = false;
                }
 
                i = j - 1;
            }
        }
 


 
        if (FL)
            cout << "YES\n";
        else
            cout << "NO\n";
}
return 0;
}