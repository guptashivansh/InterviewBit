#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &A);

int main()
{
    vector<int> A;
    A.push_back(2);
    A.push_back(2);
    A.push_back(2);/*
    A.push_back(-1);
    A.push_back(-6);*/
    int ans = solve(A);
    cout<<ans<<endl;
    return 0;
}

int solve(vector<int> &A)
{
    int n = A.size(),flag=0;
    cout<<n<<" n"<<endl;
    sort(A.begin(),A.end());
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" A[i]"<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<n-i-1<<" n-i-1"<<A[i]<<" A[i]"<<endl;
        if((n-i-1)==A[i] && A[i-1]!=A[i])
        {
            flag = 1;
            break;
        }
        else
        {
            flag = -1;
        }
    }
    if(flag==1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
