#include <bits/stdc++.h>

using namespace std;

vector<int> primesum(int n);

int main()
{
    int n;
    cin>>n;
    vector<int> ans = primesum(n);
    for(int i=0;i<ans.size();i++)
    {
            cout<<ans[i]<<endl;
    }
    return 0;
}


vector<int> primesum(int n)
{
    vector<int> a,ans;
    for(int i=2;i<(n+1);i++)
    {
        a.push_back(0);
    }
    for(int i=2;(i*i)<=n;i++)
    {
        if(a[i]==0)
        {
            for(int j=i*2;j<=n;j=j+i)
            {
                a[j]=1;
            }
        }
    }

    for(int i=2;i<n;i++)
    {
        if(a[i]==0)
        {
            if(a[n-i]==0)
            {
                //if(ans.size()>0)
                  //  ans.clear();
                ans.push_back(i);
                ans.push_back(n-i);
                return ans;
            }
        }
    }
    return ans;

}
