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
    A.push_back(9);
    A.push_back(9);
    A.push_back(9);


   /* for(int i=0;i<A.size();i++)
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
    int carry=0,i=1;
    A[0]=A[0]+1;
    if(A[0]==10)
    {
        carry=1;
        A[0]=0;
    }
    while(carry!=0 && i<n)
    {
        A[i]=A[i]+1;
        if(A[i]==10)
        {
            carry=1;
            A[i]=0;
        }
        else
        {
            carry=0;
        }
        i++;
    }
    if(carry==1)
    {
        A.push_back(1);
    }
    reverse(A.begin(),A.end());

    while(*A.begin() == 0){
        A.erase(A.begin());
    }

    return A;
}
