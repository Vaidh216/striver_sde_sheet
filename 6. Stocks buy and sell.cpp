#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n=prices.size();
        int arr[n];
        memset(arr,0,sizeof(arr));
        for(int i=n-1;i>=0;i--){
            if(i == n-1){
                arr[i] = prices[i];
            }else{
                arr[i]=max(arr[i+1],prices[i]);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans = max(ans,arr[i]-prices[i]);
        }
        return ans;
}