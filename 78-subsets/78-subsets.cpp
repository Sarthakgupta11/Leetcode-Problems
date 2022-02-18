class Solution {
public:
    vector<vector<int>>ans;
    
    void solve(int i, vector<int>&nums,vector<int>&x,int n)
    {
        if(i==n)
        {
            ans.push_back(x);
            return;
        }
        
        x.push_back(nums[i]);
        solve(i+1,nums,x,n);
        x.pop_back();
        solve(i+1,nums,x,n);
        
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>x;
        solve(0,nums,x,n);
        return ans;   
    }
};