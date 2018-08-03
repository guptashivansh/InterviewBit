#include <bits/stdc++.h>

using namespace std;

vector<int> plusOne(vector<int> &A);


int main()
{
    int n=3;
    vector<int> A;
    A.push_back(2);
    A.push_back(6);
    A.push_back(7);
    A.push_back(9);
    A.push_back(2);
    A.push_back(0);
    A.push_back(0);
    A.push_back(7);
    A.push_back(1);
    A.push_back(8);
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
    /*for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }
    */
    vector<int> ans;
    ans = plusOne(A);

    int length = ans.size();

    for(int i=0;i<length;i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}

vector<int> plusOne(vector<int> &A) {

    int n=A.size();
    //cout<<n;
    reverse(A.begin(),A.end());

    A[0]=A[0]+1;
    for(int i=0;i<n;i++)
    {

        if(A[i]==10)
        {
            A[i]=0;
            A[i+1]=A[i]+1;
        }
        //cout<<"A[i]"<<A[i]<<endl<<"power"<<pow(10,n-j)<<"number"<<num<<endl;
    }
    //cout<<num<<"num"<<endl;
    reverse(A.begin(),A.end());
    return A;
}
