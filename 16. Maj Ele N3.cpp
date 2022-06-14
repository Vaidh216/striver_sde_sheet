#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    int freq=0,cur,n=arr.size();
    set<int> se;
    for(int i=0;i<n;i++){
        if(i==0){
            freq = 1;
            cur = arr[i];
            if(freq > n/3){
                    se.insert(cur);
                }
        }else{
            if(cur == arr[i]){
                freq++;
                if(freq > n/3){
                    se.insert(cur);
                }
            }else{
                freq = 1;
                cur = arr[i];
                if(freq > n/3){
                    se.insert(cur);
                }
            }
        }
    }
    vector<int> ans;
    for(auto &x:se){
        ans.push_back(x);
    }
    return ans;
}