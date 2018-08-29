#include <bits/stdc++.h>

using namespace std;

unsigned int reversee(unsigned int A);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned int A;
        cin>>A;
        unsigned int ans=reversee(A);
        cout<<ans<<endl;
    }
    return 0;
}


unsigned int reversee(unsigned int A)
{
    string bin="";
    unsigned int ans=0;
    for(int i=31;i>=0;i--)
    {
        bin=bin+to_string(A%2);
        if((A%2)==1)
        {
            ans=ans+pow(2,i);
        }
        A=A/2;
    }
    //cout<<bin<<endl;


    return ans;
}
