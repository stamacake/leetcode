class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        
        for(int i = 1; i < nums.size(); ++i){
            int t =0;
            for (int j=0; j <i; ++j){
                if (nums[j]<nums[i]){
                    if(dp[j]+1>dp[i]){
                        dp[i] = dp[j]+1;
                    }
                }
            }
        }
        
        int ans = 0;
        for (auto x:dp){
            if(x>ans){
                ans=x;
            }
        }
        return ans;
        
    }
};
