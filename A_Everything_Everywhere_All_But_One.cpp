#include <bits/stdc++.h>
using namespace std;

void chitra()


{
int n;

 cin>>n;

   
   vector<int> love(n);

   for(int i=0;i<n;i++)

   {
       cin>>love[i];



   }


    int  total  = 0;



    for(int i=0;i<n;i++)

    {
        total += love[i];

    }

    if(total%n != 0)

    {
        cout<<"NO"<<endl;


        return;
        
    }

  int  beechka = total/n;

   int patana =0;

   
   for(int i=0;i<n;i++)

   { 


       if(love[i] == beechka)
       {
           patana = 1;

           cout<<"YES"<<endl;

           break;

       }
   }



   if(!patana)


   {
       cout<<"No"<<endl;
       //<cout<<yes

       return;
   }


}
int main()
          {
          int lost;

      cin>>lost;
             while(lost--)
{
   chitra();


}  
return 0;
}