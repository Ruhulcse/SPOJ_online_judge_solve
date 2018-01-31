#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        string s;
        cin>>s;
        int t=s.size()/2;
        for(int i=0;i<t;i+=2)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
 
