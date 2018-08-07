#include <bits/stdc++.h>

using namespace std;

int sqrts(int A);

int main()
{
    int n;
    cin>>n;
    int ans=sqrts(n);
    return ans;
}

int sqrts(int A)
{
    if(A==0)
    {
        return 0;
    }
    if(A<4)
    {
        return 1;
    }
    if(A==5)
    {
        return 2;
    }

    vector<int> arr;
    for(int i=1;i<=(A/2);i++)
    {
    //    arr.push_back(i);
    }
    int start=1;
    int finish=A/2;

    while(start<=finish)
    {
        int mid=(start+finish)/2;
        if((mid*mid) == A)
        {
           // cout<<"mid"<<arr[mid]<<endl;
            return mid;
        }
        else if((mid*mid) > A)
        {
           // cout<<"mid"<<arr[mid]<<endl;
            finish=mid-1;
        }
        else if((mid*mid) < A)
        {
            cout<<"mid"<<mid<<endl;
            start=mid+1;
        }
        cout<<"neeche"<<start<<" "<<finish<<endl;
    }
    return finish;
}
