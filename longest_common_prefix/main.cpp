#include <bits/stdc++.h>

using namespace std;

string longest_common_prefix(vector<string> A);

int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    while(t--)
    {
        vector<string> A;
        for(int i=0;i<n;i++)
        {
            string temp;
            cin>>temp;
            A.push_back(temp);
        }
        string ans=longest_common_prefix(A);
        cout<<"ans= "<<ans<<endl;
    }
    return 0;
}


string longest_common_prefix(vector<string> A)
{
    int n=A.size();
    string temp=A[0];
    string ans="";
    if(n==1)
    {
        return temp;
    }
    for(int i=1;i<n;i++)
    {
        //int m=A[i].length();
        for(int j=0;j<temp.length();j++)
        {
            //cout<<temp[j]<<" "<<A[i][j]<<endl;
            if(temp[j]==A[i][j])
            {
                if(ans.length()<j+1)
                {
                    ans=ans+temp[j];
                }
            }
            else
            {
                ans.resize(j);
                //cout<<ans<<" jndnjl"<<endl;
                break;
            }
        }
        temp=ans;
        //cout<<"acvb"<<endl;
    }
    //ans=temp;
    return ans;
}
