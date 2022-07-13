#include <bits/stdc++.h>
using namespace std;

int main()
{

long long test;


cin>>test;


while(test--)


{
  long long n; 
  
  
  
  cin>>n;



  string str;


  cin>>str;

  long long chitra = 0;
  


for(int i= (n+1)/2;i<n;i++)


{
    if(str[i] != str[n/2])
    {



        break;

    }



    chitra += 2;

}


chitra += n%2;

cout<<chitra<<endl;




}
return 0;
}
