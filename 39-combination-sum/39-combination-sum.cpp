class Solution {
public:
    void solve(int i,vector<int>&a,int k,vector<vector<int>>&ans,vector<int>ds)
    {   
        if(k==0)
        {
            ans.push_back(ds);
            return;
        }
        if(i==a.size())
        {
            return;
        }
        solve(i+1,a,k,ans,ds); 
        if(a[i]<=k)
        {
            ds.push_back(a[i]);
        solve(i,a,k-a[i],ans,ds);
        } 
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& a, int target) 
    {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,a,target,ans,ds);  
        return ans;
    }
};