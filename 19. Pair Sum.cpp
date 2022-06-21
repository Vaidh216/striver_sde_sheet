#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        mp[s-arr[i]]++;
    }
    for(int i=0;i<arr.size();i++){
        if(mp[arr[i]] > 0){
            if(arr[i] < s-arr[i]){
                for(int j=0;j<mp[arr[i]];j++){
                    ans.push_back({arr[i],s-arr[i]});
                }
            }
        }
    }
    if(s%2 == 0 && mp[s/2] > 2){
        int n = ((mp[s/2])*(mp[s/2]-1))/2;
        for(int i=0;i<n;i++){
            ans.push_back({s/2,s/2});
        }
    }
    return ans;
}