class Solution {
public:
    int dp[201][201];
    
    int rec(int r,int c,vector<vector<int>>&grid)
    {   
        if(r==0)
            return grid[r][c];
        
        if(dp[r][c]!=-1)
            return dp[r][c];
        
        int ans=INT_MAX;
        for(int i=0;i<grid[0].size();i++)
        {
            if(i!=c)
            {
            int curr=rec(r-1,i,grid)+grid[r][c];
            ans=min(ans,curr);
            }
        }
        
       return dp[r][c]=ans;         
    }
    
    int minFallingPathSum(vector<vector<int>>& grid) 
    {
        int row=grid.size();
        int col=grid[0].size();
        
        for(int i=0;i<201;i++)
            for(int j=0;j<201;j++)
                dp[i][j]=-1;
        
        
        
        int ans=INT_MAX;
        
        for(int i=0;i<col;i++)        
        ans= min(ans,rec(row-1,i,grid));
        
        
        return ans;
    }
};