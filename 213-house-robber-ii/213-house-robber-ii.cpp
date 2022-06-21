class Solution {
public:
    int dp[101];
    
    int solve(int i,vector<int>&a)
    {
        if(i<0)
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        return dp[i]=max(solve(i-1,a),a[i]+solve(i-2,a));
    }    
    
    int rob(vector<int>& a) 
    {
        int n=a.size();
        
        if(n==1)
            return a[0];
        
        if(n==2)
            return max(a[1],a[0]);
        
        vector<int>b;
        
        for(int i=1;i<n;i++)
        b.push_back(a[i]);
        
        memset(dp,-1,sizeof(dp));
        int x=solve(n-2,a);
        memset(dp,-1,sizeof(dp));
        int y=solve(n-2,b);
        
    return max(x,y);
    }
};