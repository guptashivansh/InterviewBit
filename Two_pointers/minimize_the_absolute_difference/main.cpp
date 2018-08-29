#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> A, vector<int> B, vector<int> C);

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int o;
    cin>>o;
    vector<int> A;
    vector<int> B;
    vector<int> C;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        A.push_back(temp);
    }
    for(int i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        B.push_back(temp);
    }
    for(int i=0;i<o;i++)
    {
        int temp;
        cin>>temp;
        C.push_back(temp);
    }
    int ans=solve(A,B,C);

    return ans;
}

int maxx(int x,int y,int z)
{
    if(x>y)
    {
        if(x>z)
        {
            return x;
        }
        return z;
    }
    else if(y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int minn(int x,int y,int z)
{
    if(x<y)
    {
        if(x<z)
        {
            return x;
        }
        return z;
    }
    else if(y < z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int solve(vector<int> A, vector<int> B, vector<int> C)
{
    int n=A.size();
    int m=B.size();
    int o=C.size();
    int ans=INT_MAX;
    int i=0,j=0,k=0;
    while(i<n || j<m ||k<o)
    {
        ans=min(ans,abs(maxx(A[i],B[j],C[k])-minn(A[i],B[j],C[k])));
        if(minn(A[i],B[j],C[k])==A[i])
        {
            i++;
        }
        else if(minn(A[i],B[j],C[k])==B[j])
        {
            j++;
        }
        else
        {
            k++;
        }
        cout<<ans<<endl;

    }
    return ans;
}



