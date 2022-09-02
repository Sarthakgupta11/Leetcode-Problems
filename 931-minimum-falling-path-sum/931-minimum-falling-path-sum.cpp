class Solution {
public:
    int dp[101][101];
    
    int rec(int r,int c,vector<vector<int>>&matrix)
    {
        if(c<0 || c>=matrix[0].size())
            return INT_MAX;
        
        if(dp[r][c]!=-1)
            return dp[r][c];
        
        if(r==0)
            return matrix[r][c];
        
              
        return dp[r][c]=matrix[r][c]+ min({rec(r-1,c-1,matrix),rec(r-1,c,matrix),rec(r-1,c+1,matrix)});
    }
    
    
    
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        int row=matrix.size();
        int col=matrix[0].size();
        
        for(int i=0;i<101;i++)
            for(int j=0;j<101;j++)
                dp[i][j]=-1;
        
        
        int ans=INT_MAX;
        
        for(int i=0;i<col;i++)
        {
            ans=min(ans,rec(row-1,i,matrix));
        }       
                
        return ans;
    }
};