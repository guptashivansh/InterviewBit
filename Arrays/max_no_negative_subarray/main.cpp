#include <bits/stdc++.h>

using namespace std;

vector<long long int> longest_sub_array(vector<int> A);

int main()
{
    vector<int> A;
    vector<int>* B;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        A.push_back(x);
    }
    longest_sub_array(A);
    return 0;
}

vector<long long int> longest_sub_array(vector<int> A)
{
    vector<long long int> B;
    vector<long long int> C;
    long long int n = A.size(),flag=0,sump=0,sumf=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]<0)
        {
            B.clear();
            sump=0;
            flag=1;
            cout<<B.size()<<" negative"<<endl;
        }
        else
        {
            B.push_back(A[i]);
            sump = sump + B.back();
            cout<<sump<<" sump1"<<endl;
            if(sump>sumf)
            {
                sumf=sump;
                if(flag == 1)
                {
                    flag = 0;
                    C.clear();
                    for(int j = 0;j<B.size();j++)
                    {
                        C.push_back(B[j]);
                    }
                }
                else
                {
                    C.push_back(B.back());
                }
            }
            else if(sump == sumf)
            {
                cout<<sump<<" sump"<<endl;
                if(B.size() > C.size())
                {
                    C.clear();
                    sumf = sump;
                    for(int j = 0;j<B.size();j++)
                    {
                        C.push_back(B[j]);
                    }
                }
            }
        }
    }
    cout<<C.size()<<endl;
    for(int i=0;i<C.size();i++)
    {
        cout<<C[i]<<endl;
    }
    cout<<"SUM = "<<sumf<<endl;
    return C;
}
