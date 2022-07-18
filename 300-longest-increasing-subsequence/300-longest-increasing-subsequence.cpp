class Solution {
public:
    vector<vector<int>>dp;
    
    int rec(int i,vector<int>&nums,int n,int previ)
    {
        if(i==n)
        return 0;
        
        if(dp[i][previ+1]!=-1)
        return dp[i][previ+1];
        
        int notake=rec(i+1,nums,n,previ);
        
        int take=INT_MIN;
        
        if(previ==-1 || nums[i]>nums[previ])
            take=1+rec(i+1,nums,n,i);
        
        return dp[i][previ+1]=max(take,notake);
    }
    
    
    int lengthOfLIS(vector<int>& nums) 
    {
        
        dp.resize(nums.size(),vector<int>(1+nums.size(),-1));
        int n=nums.size();              
        
        return rec(0,nums,n,-1);
                
    }
};