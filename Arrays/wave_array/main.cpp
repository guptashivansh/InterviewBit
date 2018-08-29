#include <bits/stdc++.h>

using namespace std;

vector<int> wave_array(vector<int> a);

int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    wave_array(a);
    return 0;
}


vector<int> wave_array(vector<int> a)
{
    sort(a.begin(),a.end());
    int m,n = a.size();
    if(n%2==1)
    {
        m=n-1;
    }
    else{
        m=n;
    }
    int countr =0;
    for(int i=0;i<m;i=i+2)
    {
        countr++;
        swap(a[i],a[i+1]);
    }
    for(int i=0;i<n;i++)
    {

        cout<<a[i];
    }
    cout<<endl<<countr;
    /*sort(a.begin(),a.end());
    int n = a.size();
    for(int i=0;i<(n-1);i++)
    {
        if((i%2) ==0)
        {
            if(a[i]<a[i+1])
            {
                int temp;
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        else
        {
            if(a[i]> a[i+1])
            {
                int temp;
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return a;
    */
}
