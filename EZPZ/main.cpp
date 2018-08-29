#include <bits/stdc++.h>

using namespace std;

int solve(int A);

int main()
{
    int t;
    cin>>t;
    while(t--){
    int A;
    cin>>A;
    int ans = solve(A);
    cout<<ans<<endl;
    }
    return 0;
}


int solve(int A)
{
    if(A == 0 || A == 1)
    {
        return -1;
    }
    if(A==2)
    {
        return 1;
    }
    if(A%2==0)
    {
        return 2;
    }
    vector<bool> primes(A+1,0);
    for(int i=2;i*i<=A;i++)
    {
        if(primes[i]==0)
        {
            for(int j=i*2;j<=A;j+=i)
            {
                primes[j]=1;
            }
        }
    }
    if(primes[A]==0)
    {
        return 1;
    }
    else if(primes[A-2]==0)
    {
        return 2;
    }
    else
    {
        return 3;
    }

}
