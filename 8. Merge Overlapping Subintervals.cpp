#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{    
    int n=intervals.size(),last=-1,cur=-1;
    for(int i=0;i<n;i++){
        if(intervals[i][1] < intervals[i][0]){
            swap(intervals[i][1],intervals[i][0]);
        }
    }
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> ans;
    
//     cout<<"here\n";
//     for(int i=0;i<n;i++){
//         cout<<intervals[i][0]<<" "<<intervals[i][1]<<"\n";
//     }
//     cout<<"here end\n";
    
    for(int i=0;i<n;i++){
        if(i == 0){
            last = intervals[0][0];
            cur = intervals[0][1];
        }else{
            if(intervals[i][0] > cur){
                ans.push_back({last,cur});
                last = intervals[i][0];
                cur = intervals[i][1];
            }else{
                cur = max(cur,intervals[i][1]);
            }
        }
    }
    ans.push_back({last,cur});
    return ans;
}
