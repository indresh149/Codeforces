#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fl(i,n) for(int i=0;i<n;i++)

signed main()
{

int tost;
cin>>tost;
fl(i,tost)
{
 int as;
        cin >> as;
        vector<int> v(as);
        for (auto &tt : v)
            cin >> tt;

        map<int, int> c_r;
        for (auto p : v)
            c_r[p]++;

        int result = -1;

        for (auto itt = c_r.begin(); itt != c_r.end(); itt++)
            if (itt->second >= 3)
                result = itt->first;
        cout << result << '\n';

}
return 0;
}
