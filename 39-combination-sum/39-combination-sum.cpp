class Solution {
public:
            vector<vector<int>>ans;
    void solve(int i,vector<int>&a,int k,vector<int>ds)
    {   
        if(i==a.size())
        {
        if(k==0)
        {
            ans.push_back(ds);
        }
            return;
        }
        
        if(a[i]<=k)
        {
            ds.push_back(a[i]);
        solve(i,a,k-a[i],ds);
            ds.pop_back();
        } 
        
       solve(i+1,a,k,ds); 
    }
    
    vector<vector<int>> combinationSum(vector<int>& a, int target) 
    {
        vector<int>ds;
        solve(0,a,target,ds);  
        return ans;
    }
};