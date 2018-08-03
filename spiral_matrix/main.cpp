#include <bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(const vector<vector<int> > &A);


int main()
{
    int m,n;
    cin>>m>>n;
    int s=m*n;
    int x;
    vector<vector<int> > A;
    vector<int> temp;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            cin>>x;
            temp.push_back(x);
        }
        A.push_back(temp);
        temp.clear();
    }

/*
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 1;

*/
    vector<int> ans;
    ans = spiralOrder(A);

    int length = ans.size();

    for(int i=0;i<length;i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}

/*vector<int> spiralOrder(const vector<vector<int> > &A) {
    int m = A.size();
    int n = A[0].size();
    int dir=0,s,count=0;
    s=m*n;
    int top=0,bottom=m-1,left=0,right=n-1;
    //int arr[s];
    vector<int> arr;
    while(top <= bottom && left<= right)
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
            {
               //arr[count]=A[top][i];
               //count++;
               //cout<<A[top][i];
               arr.push_back(A[top][i]);
            }
            top++;
            dir=1;
        }
        else if(dir == 1)
        {
            for(int i=top;i<=bottom;i++)
            {
               //arr[count]=A[i][right];
               //count++;
               //cout<<A[i][right];
               arr.push_back(A[i][right]);
            }
            right--;
            dir=2;
        }
        else if(dir == 2)
        {

            for(int i=right;i>=left;i--)
            {
               //arr[count]=A[bottom][i];
               //count++;
               //cout<<"asdas";
               //cout<<A[bottom][i];
               arr.push_back(A[bottom][i]);
            }
            bottom--;
            dir=3;
        }
        else
        {
            for(int i=bottom;i>=top;i--)
            {
               //arr[count]=A[i][left];
               //count++;.
               //cout<<A[i][left];
                arr.push_back(A[i][left]);
            }
            left++;
            dir=0;
        }
    }
    return arr;
}
*/
vector<int> spiralOrder(const vector<vector<int> > &A) {
    vector<int> B;
    int top=0;
    int left=0;
    int dir=0;
    int m=A.size();
    int n=A[0].size();
    int bottom=m-1;
    int right= n-1;
    //cout<<right<<" right"<<endl;
    //cout<<bottom<<" bottom"<<endl;
    while(top<=bottom && left<=right)
    {
        if(dir==0)
        {
        for(int i=left;i<=right;i++)
        {
            B.push_back(A[top][i]);

        }
        top++;
        dir=1;
        }
        else if(dir == 1)
        {
        for(int i=top;i<=bottom;i++)
        {
            B.push_back(A[i][right]);

        }
        right--;
        dir=2;
        }
        else if(dir == 2)
        {
        for(int i=right;i>=left;i--)
        {
            B.push_back(A[bottom][i]);

        }
        bottom--;
        dir++;
        }
        else
        {
        for(int i=bottom;i>=top;i--)
        {
            B.push_back(A[i][left]);

        }
        left++;
        dir=0;
        }
    }

    return B;
}
