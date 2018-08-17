#include <bits/stdc++.h>

using namespace std;

double findMedianSortedArrays(vector<int> A, vector<int> B);

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> A;
    vector<int> B;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        A.push_back(temp);
    }
    for(int i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        B.push_back(temp);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    double ans = findMedianSortedArrays(A,B);
    cout<<endl<<"ans ="<<ans;
    return 0;
}

double findMedianSortedArrays(vector<int> A, vector<int> B)
{
    int n=A.size();
    int m=B.size();
    if(n==0){
        if(m%2 == 1)
            return (double)B[m/2];
        return (double)(B[m/2-1]+B[m/2])/2;
   }
   if(m==0){
       if(n%2 == 1)
            return (double)A[n/2];
        return (double)(A[n/2-1]+A[n/2])/2;
   }
    double ans=0;
    float l=m+n;

    int element_num=ceil(l/2);
    vector<int> merged;
    float countt=0;
  //  cout<<n<<" "<<m<<endl;
    //cout<<element_num<<endl;
    if((n+m)%2 ==0)
    {
    //    cout<<"qwew"<<endl;
        int i=0,j=0;
        while(i<n || j<m)
        {
            if(A[i]<B[j])
            {
                merged.push_back(A[i]);
      //          cout<<A[i]<<" ";
                countt++;
                i++;
                if(countt==(element_num+1))
                {
                    float t=(merged[element_num]+merged[element_num-1]);
                    t=t/2;
                    //cout<<merged[element_num]<<" "<<merged[element_num-1];
                    return t;
                }
            }
            else if(A[i]>B[j])
            {
                merged.push_back(B[j]);
        //        cout<<B[j]<<" ";
                countt++;
                j++;
                if(countt==(element_num+1))
                {
                    float t=(merged[element_num]+merged[element_num-1]);
                    t=t/2;
                    return t;
                }
            }
            else
            {
                merged.push_back(B[j]);
                countt++;
                if(countt==(element_num+1))
                {
                    float t=(merged[element_num]+merged[element_num+1]);
                    t=t/2;
                    return t;
                }
                merged.push_back(B[j]);
                countt++;
                if(countt==(element_num+1))
                {
                    float t=(merged[element_num]+merged[element_num+1]);
                    t=t/2;
                    return t;
                }
                i++;
                j++;
            }
        }
    }
    else
    {
        int i=0,j=0;
      //  cout<<"wefd"<<endl;
        while(i<n || j<m)
        {
            if(A[i]<B[j])
            {
                //cout<<"above"<<endl;
                merged.push_back(A[i]);
          //      cout<<A[i]<<" ";
                countt++;
                if(countt==element_num)
                {
                    //cout<<"boom"<<endl;
                    return A[i];
                }
                i++;
            }
            else if(A[i]>B[j])
            {
              //  cout<<"below"<<endl;
                merged.push_back(B[j]);
            //    cout<<B[j]<<" ";
                countt++;

                if(countt==element_num)
                {
                    return B[j];
                }
                j++;
            }
            else
            {
                merged.push_back(B[j]);
                //cout<<B[j]<<" ";
                countt++;
                if(countt==element_num)
                {
                    return A[i];
                }
                merged.push_back(B[j]);
                countt++;
                if(countt==element_num)
                {
                    return A[i];
                }
                i++;
                j++;
            }
        }
    }
    return ans;
}
