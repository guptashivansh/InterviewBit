#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > pretty_print(int n);

int main()
{
    int n;
    cin>>n;
    vector<vector<int> > ans;
    ans = pretty_print(n);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


vector<vector<int> > pretty_print(int n)
{
    int sized = (2*n)-1;
    vector<int> row;
    vector< vector<int> > b(sized,vector<int>(sized));
    //cout<<b.size()<<" "<<b[0].size()<<endl;
    int limit=sized,temp=0;
    while(n>0)
    {
        for(int i=temp;i<limit;i++)
        {
            for(int j=temp;j<limit;j++)
            {
                b[i][j]=n;

            }
        }
        n--;
        limit--;
        temp++;
    }
    return b;
}
