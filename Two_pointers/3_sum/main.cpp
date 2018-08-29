#include<bits/stdc++.h>

using namespace std;

int threesum(vector<int> A, int B);

int main()
{
    int n;
    cin>>n;
    vector<int> A;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        A.push_back(temp);
    }
    int B;
    cin>>B;
    int ans = threesum(A,B);
    return ans;
}


int threesum(vector<int> A, int B)
{
    int n= A.size();
    if(n < 3){
        return 0;
    }
    sort(A.begin(),A.end());
    int sum,diff,clo=INT_MAX,ret;
    for(int i=0;i<n;i++)
    {
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            sum=A[i]+A[l]+A[r];
            diff=abs(B-sum);
            if(diff<clo)
            {
                clo=diff;
                ret=sum;
            }
            if(B<sum)
            {
                r--;
            }
            else if(B>sum)
            {
                l++;
            }
            else
            {
                return B;
            }

        }
    }
    //cout<<ret<<" "<<sum<<endl;
    return ret;
}
