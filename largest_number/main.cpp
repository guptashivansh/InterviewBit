#include <bits/stdc++.h>
#include<string>
using namespace std;

string largest_number(vector<int> A);

bool large(int a1,int a2)
{
    string a = to_string(a1);
    string b = to_string(a2);
    string c = a + b ;
    string d = b + a ;
    return c > d;
}

int main()
{
    int n;
    cin>>n;
    vector<int> A;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        A.push_back(x);
    }
    largest_number(A);
    return 0;
}


string largest_number(vector<int> A)
{
    int n = A.size();
    sort(A.begin(),A.end(),large);

}
