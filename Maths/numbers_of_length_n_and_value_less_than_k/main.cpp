#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> A,int B,int C);

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
    int B,C;
    cin>>B>>C;
    int ans = solve(A,B,C);
    return ans;
}

int solve(vector<int> A,int B,int C)
{
    string cstr=to_string(C);
    int lenc=cstr.length();
    cout<<lenc;
    int n=A.size();
    if(B>lenc || d==0)
    {
        return 0;
    }
    else if(B<lenc)
    {
        if(A[0]==0)
        {
            return (n-1)*pow(n,b-1);
        }
        else
        {
            return pow(n,b);

        }
    }
    else
    {

    }
    return 0;
}
