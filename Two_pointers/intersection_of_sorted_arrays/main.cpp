#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> A, vector<int> B);

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> A;
    vector<int> B;
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
    vector<int> ans = solution(A,B);
    int si=ans.size();
    for(int i=0;i<si;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}


vector<int> solution(vector<int> A, vector<int> B)
{
    int n=A.size();
    int m=B.size();
    //cout<<n<<" "<<m<<endl;
    int i=0,j=0;
    vector<int> ans;
    while(i<n && j<m)
    {
        if(A[i]==B[j])
        {
            cout<<A[i]<<" "<<B[j]<<endl;
            ans.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i]<B[j])
        {
            cout<<A[i]<<" "<<B[j]<<endl;
            i++;
        }
        else
        {
            cout<<A[i]<<" "<<B[j]<<endl;
            j++;
        }

    }
    return ans;
}
