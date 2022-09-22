#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
   int x,y;
   for(int i=1;i<=7;++i)
      for(int j=i+1;j<=7;++j) {
         cout << "? " << i << ' ' << j << endl;
         cin >> x;
         cout << "? " << j << ' ' << i << endl;
         cin >> y;
         if(x==-1) {
            cout << "! " << max(i,j)-1 << endl;
            return 0;
         }
         if(x!=y) {
            cout << "! " << x+y << endl;
            return 0;
         }
      }
}