#include <bits/stdc++.h>

using namespace std;

int titleToNumber(string A);

int main()
{
    string A;
    cin>>A;
    int ans=titleToNumber(A);
    return ans;
}


int titleToNumber(string A)
{
    int n =A.size();
    int ans=0;
    //reverse(A.begin(),A.end());
    for(int i=0;i<n;i++)
    {
        int num = A[i]-64;
        ans =(ans*26)+num;
    }
    return ans;
}
