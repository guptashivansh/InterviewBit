#include <bits/stdc++.h>

using namespace std;


struct interval
{
    int start,endd;
};

bool compareInterval(interval i1,interval i2)
{
    return i1.start<i2.start;
}


vector<interval> merge_overlapping_intervals(vector<interval> intervals);

int main()
{
    int n;
    cin>>n;
    vector<interval> intervals(n);
    //intervals.push_back(5,6);
    for(int i=0;i<n;i++)
    {
        int s,e;
        cin>>s>>e;
        intervals[i].start=s;//.push_back(s);
        intervals[i].endd=e;//.push_back(s);
    }
/*
    for(int i=0;i<n;i++)
    {
        cout<<intervals[i].start<<" ";
        cout<<intervals[i].endd<<endl;

    }
    */

    vector<interval> ans = merge_overlapping_intervals(intervals);
    int p = ans.size();
    for(int i=0;i<p;i++){
        cout<<ans[i].start<<" ";
        cout<<ans[i].endd<<" ";


    }
    return 0;
}

vector<interval> merge_overlapping_intervals(vector<interval> A)
{
    sort(A.begin(),A.end(),compareInterval);
    int n = A.size();
    interval temp;
    vector<interval> ans;
    temp.start = A[0].start;
    temp.endd = A[0].endd;
    for(int i=1;i<n;i++)
    {
        if(temp.endd>=A[i].start)
        {
            temp.start=min(temp.start,A[i].start);
            temp.endd=max(temp.endd,A[i].endd);
        }
        else
        {
            ans.push_back(temp);
            temp.start=A[i].start;
            temp.endd =A[i].endd;
        }
    }
    ans.push_back(temp);
   /* for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i].start<<" ";
        cout<<ans[i].endd<<endl;

    }
    */
    return ans;
}
