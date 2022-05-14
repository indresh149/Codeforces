#include <bits/stdc++.h>
using namespace std;
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

        for (auto &t : v)
            cin >> t;

        if (as == 1)
            cout << "YES\n";
        else
        {
            bool FLg = true;
            int p_o = v[0] & 1;
            int p_e = v[1] & 1;


            for (int i = 2; i < as; i += 2)
                if ((v[i] & 1) != p_o)
                    FLg = false;

            for (int i = 3; i < as; i += 2)
                if ((v[i] & 1) != p_e)
                    FLg = false;

            if (FLg)
                cout << "YES\n";

            else
                cout << "NO\n";
        }
}
return 0;
}
