#include <bits/stdc++.h>

using namespace std;

int coverPoints(vector<int> &X, vector<int> &Y);


int main()
{
    vector<int> A;
    vector<int> B;

    A.push_back(-7);
    A.push_back(-13);
    /*A.push_back(-7);
    A.push_back(-5);
    A.push_back(-13);
    A.push_back(9);
    A.push_back(-7);
    A.push_back(8);
*/
/*

    B.push_back(4);
    B.push_back(-15);
    B.push_back(-10);
    B.push_back(-3);
    B.push_back(-13);
    B.push_back(12);
  */  B.push_back(1);
    B.push_back(-5);

    int ans = coverPoints(A,B);
    return ans;
}

int coverPoints(vector<int> &X, vector<int> &Y)
{

    int n = X.size(),steps=0;
    int m = Y.size();
    int a,b;
    if(n==1 || m==1)
        return 0;
    for(int i=0;i<(n-1);i++)
    {
        a = abs(X[i+1]-X[i]);
        cout<<a<<" a"<<endl;
        b = abs(Y[i+1]-Y[i]);
        cout<<b<<" b"<<endl;
        steps = steps + max(a,b);
        cout<<steps<<" step"<<endl;

    }

    return steps;

}
