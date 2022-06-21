#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    map<int,int> mp;
    int ans=0,cur=0;
    for(int i=0;i<arr.size();i++){
        cur^=arr[i];
        if(cur == x){
            ans++;
        }
        ans += mp[cur^x];
        mp[cur]++;
        //cout<<cur<<" ";
    }
    //cout<<"\n";
//     for(auto &x:mp){
//         cout<<x.first<<" "<<x.second<<"\n";
//     }
    return ans;
}