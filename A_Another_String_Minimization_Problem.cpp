#include <bits/stdc++.h>
using namespace std;

using ll= long long;

#define fl(i,n) for(int i=0;i<n;i++)

int main()
{

ll t;
cin>>t;
fl(i,t)
{

string s;

// while(a--)
// {

//     int g = 1;
// }
        int n,m ;

        // while(n--)
        // {
        //     int h = 1;
        // }
        cin >> n >> m;
        int p[n];

        // while(n--)
        // {
        //     int h = 1;
        // }
    fl(i, m)
        {
        //     while(n--)
        // {
        //     int h = 1;
        // }
            s.push_back('B');
        //     while(n--)
        // {
        //     int h = 1;
        // }
        }
        fl(i, n)
        {
        //     while(n--)
        // {
        //     int h = 1;
        // }
            cin >> p[i];

        //     while(n--)
        // {
        //     int h = 1;
        // }
            p[i]--;
        //     while(n--)
        // {
        //     int h = 1;
        // }
        }

        fl(i, n)
        {
        //     while(n--)
        // {
        //     int h = 1;
        // }
            int mn = min(p[i], m - 1 - p[i]), mx = max(p[i], m - 1 - p[i]);

// while(n--)
//         {
//             int h = 1;
//         }
            if(s[mn]=='B')
            {
        //         while(n--)
        // {
        //     int h = 1;
        // }
                s[mn]='A';
            }
            else
            {
        //         while(n--)
        // {
        //     int h = 1;
        // }
                s[mx]='A';
            }
        //     while(n--)
        // {
        //     int h = 1;
        // }
        }
        // while(n--)
        // {
        //     int h = 1;
        // }
        cout << s << endl;

}
return 0;
}
