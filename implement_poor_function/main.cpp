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
    int power=1;
    int ans;
    x=x%d;
    n=n%d;
    power=x*n;
    if(power<0)
    {
        ans=abs(power)%d;
        ans=d-ans;
    }
    else
    {
        ans=power%d;
    }

    return ans;
}
