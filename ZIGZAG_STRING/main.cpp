#include <bits/stdc++.h>

using namespace std;

string convert(string A, int B);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A;
        cin>>A;
        int B;
        cin>>B;
        string ans = convert(A,B);
        cout<<ans<<endl;
    }
    return 0;
}


string convert(string A, int B)
{
    int n=A.size();
    vector<string> row(B+1);
    int y=1,dir=1;
    if(B==1)
    {
        return A;
    }
    for(int i=0;i<n;i++)
    {
        row[y]=row[y]+A[i];
        cout<<row[y]<<endl;
        if(y==B)
        {
            dir=0;
        }
        if(y==1)
        {
            dir=1;
        }
        if(dir==1)
        y++;

        if(dir==0)
            y--;
    }
    string ans="";
    for(int i=0;i<=B;i++)
    {
        ans=ans+row[i];
    }

    return ans;
}
