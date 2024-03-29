class Solution {
public:
    int dp[101];
    
    int solve(int i,vector<int>&nums)
    {
        if(i==0)
        return nums[0];
        if(i<0)
        return 0;
        
        if(dp[i]!=-1)
            return dp[i];
                                
        return dp[i]= max(nums[i]+solve(i-2,nums),solve(i-1,nums));
    }
    
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(n-1,nums);
    }
};