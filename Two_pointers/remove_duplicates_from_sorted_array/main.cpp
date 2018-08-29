#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> A);

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
    int ans =removeDuplicates(A);
    return ans;
}


int removeDuplicates(vector<int> A)
{
    int n=A.size();
    if (n==0 || n==1)
        return n;
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(A[i]!=A[i+1])
        {
            A[j++] = A[i];
        }
    }
    A[j++] = A[n-1];
    return j;
}
