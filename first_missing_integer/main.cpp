#include <bits/stdc++.h>

using namespace std;

int first_missing_positive(vector<int> A);

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
    int ans = first_missing_positive(A);
    return ans;
}

int first_missing_positive(vector<int> A)
{
    int n=A.size();
    sort(A.begin(),A.end());
    int ans,flag=0;
    for(int i=0,j=1;i<n;i++)
    {
        //cout<<j<<" j"<<endl;
        if(A[i]>0)
        {
            //cout<<A[i]<<" A[i],  "<<j<<" j"<<endl;

            if(A[i]!=j)
            {
                ans=j;
                //cout<<ans<<endl;
                flag=1;
                return ans;
            }
            else
            {
                j++;
            }

        }
    }
    if(flag==0)
    {
        int temp=A[n-1]+1;
        if(temp>0)
        return temp;
    }
    return 1;
}
