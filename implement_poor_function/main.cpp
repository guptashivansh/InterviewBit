#include <bits/stdc++.h>

using namespace std;

int powe(int x,int n,int d);

int main()
{
    int x;
    int n;
    int d;
    cin>>x>>n>>d;
    int ans=powe(x,n,d);
    return ans;
}


int powe(int x,int n,int d)
{
    int ans=1;
    int square=x;
    if(x==0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    while(n>0)
    {
        if(n%2)
        {
            ans=ans*square;
        }
        square=(square*square)%d;
        n=n/2;
        if(ans>d)
        {
            ans=ans%d;
        }
    }
    return ans;
}
