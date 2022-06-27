class Solution {
public:
    int dp[10001];
    
    int solve(int i,int n,vector<int>&nums)
    {
        if(i>=n-1)
        return 0;
        
        int mn=1000001;
        
        for(int j=1;j<=nums[i];j++)
        {
            if(dp[i]==-1)
            mn=min(mn,1+solve(i+j,n,nums));
            else
                return dp[i];
        }
        
        return dp[i]=mn;
    }
    
    int jump(vector<int>& nums) 
    {
        int n=nums.size();    
        memset(dp,-1,sizeof(dp));
        return solve(0,n,nums);
    }
};