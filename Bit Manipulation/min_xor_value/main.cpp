#include <bits/stdc++.h>

using namespace std;

int findMinXor(vector<int> A);

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
    int ans=findMinXor(A);
    return ans;
}


int findMinXor(vector<int> A)
{
    int n=A.size();
    if(n==1)
    {
        int ans=A[0];
        return ans;
    }
    sort(A.begin(),A.end());
    vector<int> B;
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
        {
            ans=min(ans,A[i]^A[i+1]);
        }
    }
    return ans;
}
