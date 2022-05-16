class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        vector<int> dp2(nums.size(),1);
        
        for(int i = 1; i < nums.size(); ++i){
            for (int j=0; j <i; ++j){
                if (nums[j]<nums[i]){
                    
                                   
                    if(dp[j]+1>dp[i]){
                        dp[i] = dp[j]+1;
                        dp2[i]=dp2[j];
                    }
                    else {
                        if (dp[j]+1==dp[i]){
                            dp2[i]+=dp2[j];
                        }
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
        
        int ans2 = 0;
        for(int i =0; i<nums.size();++i){
            if(dp[i]==ans){
                ans2+=dp2[i];
            }
        }
        return ans2;
    }
};
