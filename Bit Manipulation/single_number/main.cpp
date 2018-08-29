#include <bits/stdc++.h>

using namespace std;

int single_number(vector<int> A);

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
    int ans=single_number(A);
    return ans;
}


int single_number(vector<int> A)
{
    int n=A.size();
    if(n==1)
    {
        return A[0];
    }
    int ans=A[0]^A[1];
    for(int i=2;i<n;i++)
    {
        ans=ans^A[i];
    }
    return ans;
}
