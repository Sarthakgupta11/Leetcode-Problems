class Solution {
public:
    int ans=INT_MIN;
    
    void rec(int ind,vector<vector<int>>&mat,int n,int m,vector<int>&vis,int col)
    {
        if(col==0 || ind==m)
        {
            int cnt=0;
            
            for(int i=0;i<n;i++)
            {
                int flag=1;
                for(int j=0;j<m;j++)
                {
                    if(mat[i][j]==1 && vis[j]==0)
                        flag=0;
                }
                if(flag)
                cnt++;
            }            
            
            ans=max(cnt,ans);
            return;
        }
        
        vis[ind]=1;
        rec(ind+1,mat,n,m,vis,col-1);
        vis[ind]=0;
        
        rec(ind+1,mat,n,m,vis,col);        
        return;
    }

    
    int maximumRows(vector<vector<int>>& mat, int cols) 
    {   
        int n = mat.size();
        int m = mat[0].size();
        
        vector<int>vis(m,0);
        
        rec(0,mat,n,m,vis,cols);
        
        return ans;
        
    }
};