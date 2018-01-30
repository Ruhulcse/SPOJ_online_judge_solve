#include<bits/stdc++.h>
using namespace std;
void divisor(int n)
{
    long long int sum=0;
    if(n==1)
        cout<<0<<endl;
    else
    {
        int t=sqrt(n);
        for(int i=2;i<=t;i++)
        {
            if(n%i==0)
            {
                if(i==n/i)
                {
                    sum+=i;
                }
                else
                {
                    sum+=i+n/i;
                }
            }
        }
            cout<<sum+1<<endl;
    }
 
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int number;
        cin>>number;
        divisor(number);
    }
    return 0;
}
