#include <bits/stdc++.h>

using namespace std;

int lengthoflastword(string s);

int main()
{
    string s;
    getline(cin, s);
    //cout<<s<<endl;
    int ans=lengthoflastword(s);
    cout<<ans<<endl;
    return 0;
}

int lengthoflastword(string A)
{
    int ans=0;
    int n=A.length();
    int i=1;
    while(A[n-i]==' ')
    {
        //cout<<"a"<<A[n-i]<<"a"<<endl;
        A.resize(n-i);
        i++;
    }
    n=A.length();
    while(A[n-1]!=' ' && n!=0)
    {
        ans++;
        n--;
    }
    return ans;
}
