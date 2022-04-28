class Solution {
public:
    vector<vector<int>>ans;
    vector<int>ds;
    
    void solve(int ind,vector<int>&nums,vector<int>&vis)
    {
        
        if(ind==nums.size())
            ans.push_back(ds);
        
        for(int i=0;i<nums.size();i++)
        {
            if(vis[i]==0)
            {
                ds.push_back(nums[i]);
                vis[i]=1;
                solve(ind+1,nums,vis);
                ds.pop_back();
                vis[i]=0;
            }
        }       
        
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<int>vis(nums.size(),0);
        
        solve(0,nums,vis);
        
        return ans;        
    }
};