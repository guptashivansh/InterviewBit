#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> A);

int main()
{
    int n;
    cin>>n;
    vector<int> A;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        A.push_back(temp);
    }
    int ans;
    ans = solve(A);
    return ans;
}
int solve(vector<int> A)
{
    int n=A.size();
    long long G=1;
    int ans=0;
    vector<int> temp;
    if(n==0)
    {
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        G=G*A[i];
    }
    while (G%2 == 0)
    {
        temp.push_back(2);
        G = G/2;
    }
    for (int i = 3; i <= sqrt(G); i = i+2)
    {
        while (G%i == 0)
        {
            temp.push_back(i);
            G = G/i;
        }
    }
    if (G > 2)
        temp.push_back(G);

    vector<bool> a(0,temp.size());
    for(int i=0;i<temp.size();i++)
    {
        if(a[temp[i]]==0)
        {
            ans++;
            a[temp[i]]=1;
        }
    }
    return ans;
}
