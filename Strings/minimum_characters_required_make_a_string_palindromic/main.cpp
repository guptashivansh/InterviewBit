#include <iostream>

using namespace std;

int solve(string A);

int main()
{
    string A;
    cin>>A;
    int ans=solve(A);
    cout<<ans<<endl;
    return 0;
}

int palindrome(string A)
{
    int n=A.size();
    for(int i=0,j=n-1;i<=j;i++,j--)
    {
        if(A[i]!=A[j])
        {
            return 0;
        }
    }
    return 1;
}


int solve(string A)
{
    int n=A.size();
    int pal=0,countt=0,flag=0;
    while(flag!=1)
    {
        if(palindrome(A))
        {
            flag=1;
            break;
        }
        else
        {
            countt++;
            A.erase(A.end()-1);
        }
    }
    return countt;
}
