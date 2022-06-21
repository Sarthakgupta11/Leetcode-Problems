class Solution {
public:
    int dp[101];
    
    int solve(int i,vector<int>&a,int size)
    {
        if(i>=size)
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        return dp[i]=max(solve(i+1,a,size),a[i]+solve(i+2,a,size));
    }    
    
    int rob(vector<int>& a) 
    {
        int n=a.size();
        
        if(n==1)
            return a[0];
        
        if(n==2)
            return max(a[1],a[0]);
                
        memset(dp,-1,sizeof(dp));
        int x=solve(0,a,n-1);
        memset(dp,-1,sizeof(dp));
        int y=solve(1,a,n);
        
    return max(x,y);
    }
};