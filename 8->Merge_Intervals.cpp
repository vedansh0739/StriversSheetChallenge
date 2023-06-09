
#include<algorithm>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/



bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[0] < v2[0];
}

bool isOverlap(int minS,int maxE, vector<int>interval) {
    if(maxE<interval[0])return 0;
    return 1;
}

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    int n=intervals.size();
    sort(intervals.begin(),intervals.end());
    int prevmin=intervals[0][0];int prevmax=intervals[0][1];
    vector<vector<int>>res;
    for(int i=1;i<n;i++){
             if(isOverlap(prevmin,prevmax,intervals[i])){
                
                prevmin=min(prevmin,intervals[i][0]);
                prevmax=max(prevmax,intervals[i][1]);

             } else {
               res.push_back({prevmin, prevmax});
               prevmax=intervals[i][1];
               prevmin=intervals[i][0];
             }
    }
    res.push_back({prevmin,prevmax});
    sort(res.begin(),res.end());

    return res;


}
