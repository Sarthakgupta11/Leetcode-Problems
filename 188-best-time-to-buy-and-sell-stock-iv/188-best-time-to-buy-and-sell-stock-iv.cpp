class Solution {
public:
    
    int dp[1001][2][101];
    
    int rec(vector<int>&a,int i,int buy,int cap)
    {
        if(i>=a.size())
            return 0;
        
        if(cap==0)
            return 0;
        
        if(dp[i][buy][cap]!=-1)
            return dp[i][buy][cap];
        
        if(buy)
        {
            return dp[i][buy][cap]=max((-a[i]+rec(a,i+1,0,cap)),rec(a,i+1,1,cap));
        }
        else
        {
            return dp[i][buy][cap]=max((a[i]+rec(a,i+1,1,cap-1)),rec(a,i+1,0,cap));
        }
        
        return 0;        
    }    
        
    int maxProfit(int k, vector<int>& a) 
    {
        for(int i=0;i<1001;i++)
        {
            for(int j=0;j<2;j++)
            {
                for(int k=0;k<101;k++)
                    dp[i][j][k]=-1;
            }
        }
             
        return rec(a,0,1,k);        
    }
};