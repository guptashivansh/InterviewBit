#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > pretty_print(int n);

int main()
{
    int n;
    cin>>n;
    pretty_print(n);
    return 0;
}


vector<vector<int> > pretty_print(int n)
{
    vector<int> a;
    vector<vector<int> > b;
    int x=n,flag=0;
    for(int i=0;i<((n*2)-1);i++)
    {
        a.push_back(x);
        if(x==1)
        {
            flag=1;
        }
        if(flag == 1)
        {
            x=x+1;
        }
        else
        {
            x=x-1;
        }

    }
    for(int i=0;i<((n*2)-1);i++)
    {
        cout<<a[i]<<endl;
    }
    return b;
}
