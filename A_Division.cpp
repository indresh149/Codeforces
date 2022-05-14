#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{

int tost;
cin>>tost;
while(tost--)
{
 int pp;
        cin >> pp;
        cout << "Division ";

        if (pp <= 1399)
            cout << 4;
        else if (pp <= 1599)
            cout << 3;
        else if (pp <= 1899)
            cout << 2;
        else
            cout << 1;
            
        cout << '\n';
}
return 0;
}
