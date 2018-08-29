#include <bits/stdc++.h>

using namespace std;

vector<int> searchRange(vector<int> A,int B);

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
    int target;
    cin>>target;
    sort(A.begin(),A.end());
    vector<int> ans =searchRange(A, target);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

vector<int> searchRange(vector<int> A,int B)
{
    int n=A.size();
    int start=0;
    int finish=n-1;
    int flag=0,mida;
    vector<int> ans(2);
    while(start<finish)
    {
        int mid=(start+finish)/2;
        if(A[mid]>=B)
        {
            finish=mid;
        }
        else if(A[mid]<B)
        {
            start=mid+1;
        }
    }
    if(A[start]==B)
    {
        ans[0]=start;
    }
    else
    {
        ans[0]=-1;
        ans[1]=-1;
        return ans;
    }
   // cout<<start<<" "<<finish<<endl;

    start=0;
    finish=n-1;
    while(start<finish)
    {
        int mid=(start+finish)/2+1;
        if(A[mid]<=B)
        {
            start=mid;
        }
        else
        {
            finish=mid-1;
        }
    }
    ans[1]=finish;
    return ans;
}
