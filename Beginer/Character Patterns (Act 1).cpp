#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test;
  cin>>test;
  while(test--)
  {
     int a,b;
     cin>>a>>b;
     for(int i=0;i<a;i++)
     {
       if(i%2==0)
       {
         for(int j=0;j<b;j++)
         {
            if(j%2==0)
            {
              cout<<"*";
            }
            else
            {
             cout<<".";
            }
         }
       }
       else
       {
         for(int j=0;j<b;j++)
         {
              if(j%2==0)
             {
               cout<<".";
             }
             else
             {
               cout<<"*";
             }
         }
       }
       cout<<endl;
     }
  }
  cout<<endl;
 return 0;
}
