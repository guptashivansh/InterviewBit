#include <bits/stdc++.h>

using namespace std;

vector< vector<int> > set_matrix_zeroes(vector< vector<int> > A);
vector< vector<int> > set_rowcol_zero(vector<vector<int> > A,vector<int> i,vector<int> j);

int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    vector< vector<int> > A,B;
    for(int i=0;i<15;i++)
    {
        vector<int> row;
        for(int j=0;j<50;j++)
        {
            int temp=1;
            //cin>>temp;
            row.push_back(temp);
        }
        A.push_back(row);
    }
    for(int i=0;i<1;i++)
    {
        vector<int> row;
        for(int j=0;j<49;j++)
        {
            int temp=1;
            //cin>>temp;
            row.push_back(temp);
        }
        row.push_back(0);
        A.push_back(row);
    }

  /*  for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            cout<<A[i][j];
        }
        cout<<endl;
    }
    */
    B = set_matrix_zeroes(A);
    for(int i=0;i<B.size();i++)
    {
        for(int j=0;j<B[i].size();j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

vector< vector<int> > set_matrix_zeroes(vector< vector<int> > A)
{
    int m=A.size(),n=A[0].size();
    //vector< vector<int> > ans;
    //ans = A;
    vector<int> c(m,1);
    vector<int> r(n,1);
  //  cout<<m<<" "<<n<<" abcd"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j] ==0)
            {
                //cout<<A[i][j]<<" "<<i<<" "<<j<<endl;
                c[i]=0;
                r[j]=0;
            }
        }
    }
/*
    for(int i=0;i<m;i++)
    {
        cout<<c[i];
    }
    cout<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<r[j];
        cout<<endl;
    }
*/
    //A = set_rowcol_zero(A,r,c);


   // cout<<m<<" "<<n<<" abcd"<<endl;
    for(int i=0;i<m;i++)
    {
        if(c[i]==0)
        {
            //cout<<i<<" i"<<endl;
            for(int j=0;j<n;j++)
            {
                A[i][j]=0;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(r[i]==0)
        {
            for(int j=0;j<m;j++)
            {
                A[j][i]=0;
            }
        }
    }

    return A;

}

/*vector< vector<int> > set_rowcol_zero(vector<vector<int> > A,vector<int> r,vector<int> c)
{
    //cout<<"Size "<<A.size()<<" "<<A[0].size()<<endl;
    //cout<<"i="<<i<<" "<<"j="<<j<<endl;
    int m=c.size();
    int n=r.size();
   // cout<<m<<" "<<n<<" abcd"<<endl;
    for(int i=0;i<m;i++)
    {
        if(c[i]==0)
        {
            //cout<<i<<" i"<<endl;
            for(int j=0;j<n;j++)
            {
                A[i][j]=0;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(r[i]==0)
        {
            for(int j=0;j<m;j++)
            {
                A[j][i]=0;
            }
        }
    }
    return A;

}

*/
