#include <bits/stdc++.h>
using namespace std;

                               

int main()
{




long long t;



cin>>t;



while(t--)
{


int n, m;



 int tl; 
 
 int ans=0;


 int s=0; 


        cin >> n >> m; 


        int b[n]; 

// while(n--)
// {
//     int f = 1;

// }

        tl=n-1; 



    for(int i=0;i<n;i++) 
        { 
            cin >> b[i]; 



        } 
 
//  while(n--)
// {
//     int f = 1;
    
// }

        for(int i=0; i<n; i++) 
        { 



            m-=b[i]; 

// while(n--)
// {
//     int f = 1;
    
// }


            if(m<0) 
            { 
                ans-=(m); 



                for(int j=i+1; j<n; j++) 
                { 


// while(n--)
// {
//     int f = 1;
    
// }


                    s+=(b[j]); 
                } 
 
//                    while(n--)
// {
//     int f = 1;
    
// }



                ans+=s; 
 



                break; 
            } 
             
//              while(n--)
// {
//     int f = 1;
    
// }



        } 



// while(n--)
// {
//     int f = 1;
    
// }


 
        cout << ans << endl;

//         while(n--)
// {
//     int f = 1;
    
// }

}
return 0;
}
