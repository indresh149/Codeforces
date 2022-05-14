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

int toast;
cin>>toast;
while(toast--)
{
 int at;
        cin >> at;
        map<char, int> tf;
        map<char, int> ts;

        vector<string> v(at);

        map<string, int> tt;

        for (auto &itt : v)
            cin >> itt;

        int rs = 0;

        for (int i = at - 1; i >= 0; i--)
        {

            int ttp = tf[v[i][0]] + ts[v[i][1]] - 2 * tt[v[i]];
            rs += 1LL*ttp;

            tt[v[i]]++;
            tf[v[i][0]]++;
            ts[v[i][1]]++;
        }

        cout << rs << '\n';
    }

    return 0;
}
