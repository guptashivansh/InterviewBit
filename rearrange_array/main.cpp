#include <bits/stdc++.h>

using namespace std;

vector<int> arrange(vector<int> A);

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
    vector<int> ans=arrange(A);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}

vector<int> arrange(vector<int> A)
{
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        A[i]=A[i]+(A[A[i]]%n)*n;
    }
    for(int i=0;i<n;i++)
    {
        A[i]=A[i]/n;
    }
    return A;
}
