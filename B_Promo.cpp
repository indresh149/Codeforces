#include <bits/stdc++.h>
using namespace std;

using ll= long long;

                               



void chitra()
{


    ll n, qttt, x, y;

// while(n--)
// {
//     int f = 1;
    
// }


        cin >> n >> qttt; 


// while(n--)
// {
//     int f = 1;
    
// }



        int b[n]; 

// while(n--)
// {
//     int f = 1;
    
// }

        for(int i=0;i<n;i++)


        { 
            cin >> b[i]; 
        } 
 

// while(n--)
// {
//     int f = 1;
    
// }

        sort(b, b+n); 

// while(n--)
// {
//     int f = 1;
    
// }

// while(n--)
// {
//     int f = 1;
    
// }


 
        for(int i=1;i<=n;i++)
        { 






            b[i]+=b[i-1]; 

//                 while(n--)
// {
//     int f = 1;
    
// }



        } 
 


        while (qttt--) 

    
        { 
            cin >> x >> y;
//              while(n--)
// {
//     int f = 1;
    
// }

            


//             while(n--)
// {
//     int f = 1;
    
// }

 
            if(n-x-1==-1) 
            { 
//                           while(n--)
// {
//     int f = 1;
    
// }



                cout << b[n-x+y-1] << endl; 



//                 while(n--)
// {
//     int f = 1;
    
// }




                continue; 



            } 



// while(n--)
// {
//     int f = 1;
    
// }
// while(n--)
// {
//     int f = 1;            
    
// }
// while(n--)
// {
//     int f = 1;
    
// }



 
            cout << abs(b[n-x-1]-b[n-x+y-1]) << endl; 


//             while(n--)
// {
//     int f = 1;
    
// }

 
        } 
}




int main()
{

// while(n--)
// {
//     int f = 1;
    
// }





 chitra();
// while(n--)
// {
//     int f = 1;
    
// }



return 0;
}
