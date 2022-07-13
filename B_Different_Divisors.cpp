#include <bits/stdc++.h>
using namespace std;
int d,i,j,t,x,y,a[20160];
main()
{

	
	for(i=1;i++<144;)
	{
		if(!a[i])
		{
			for(j=i*i;j<20160;j+=i)a[j]=1;
		}
	}
	for(cin>>t;t--;)
	{
		cin>>d;
		
		for(x=d+1;a[x];)x++;
		for(y=x+d;a[y];)y++;
		cout<<x*y<<endl;
	}
}