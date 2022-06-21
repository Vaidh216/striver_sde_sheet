#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  int ans=0,n=arr.size();
        int cur=0;
        map<int,int> mp;
        mp[cur] = 0;
        for(int i=1;i<=n;i++){
            cur+= arr[i-1];
            if(mp.find(cur) == mp.end()){
                mp[cur] = i;
            }else{
                ans = max(i-mp[cur],ans);
            }
        }
        return ans;

}