#include <bits/stdc++.h>

using namespace std;

int convert(string roman);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string roman;
        cin>>roman;
        int ans=convert(roman);
        cout<<ans<<endl;
    }
    return 0;
}

int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;

    return 0;
}


int convert(string roman)
{
    int n=roman.size();
    int ans=0;
    int flag=0;
    for(int i=0;i<n;)
    {
        if(value(roman[i+1]) > value(roman[i]) && i!=n-1)
        {
            int abc=value(roman[i+1]) - value(roman[i]);
            ans=ans+abc;
            i+=2;
        }
        else
        {
            int abc=value(roman[i]);
            ans=ans+abc;
            i++;
        }
    }
    return ans;
}
