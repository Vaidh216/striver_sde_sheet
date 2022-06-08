class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0],cur=0;
        for(int i=0;i<nums.size();i++){
            cur+= nums[i];
            ans=max(cur,ans);
            if(cur < 0){
                cur=0;
            }
        }
        return ans;
    }
};