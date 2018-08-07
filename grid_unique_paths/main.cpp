#include <iostream>

using namespace std;

int uniquePaths(int A,int B);

int main()
{
    int a,b;
    cin>>a>>b;
    int ans = uniquePaths(a,b);
    return ans;
}


int uniquePaths(int A,int B)
{
    if(A==1 || B==1)
    {
        return 1;
    }

    return uniquePaths(A-1,B)+uniquePaths(A,B-1);
}
