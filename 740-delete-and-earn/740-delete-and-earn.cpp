class Solution {
public:
    int dp[20001];
    
    int solve(int i,vector<int>&a,int size)
    {
        if(i>=size)
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        return dp[i]=max(solve(i+1,a,size),a[i]+solve(i+2,a,size));
    }
    
    
    int deleteAndEarn(vector<int>& nums) 
    {
        vector<int>a(20001,0);
        if(nums.size()==0)
            return 0;
        
        for(int i=0;i<nums.size();i++)
            a[nums[i]]+=nums[i];
        
        memset(dp,-1,sizeof(dp));        
        return solve(0,a,a.size());
    }
};