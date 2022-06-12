class Solution {
public:
    int dp[31];
    
    int rec(int n)
    {
        if(n==0 || n==1)
            return n;
        
        return dp[n]=rec(n-1)+rec(n-2);
    }
    
    int fib(int n)
    {
        memset(dp,-1,sizeof(dp));
        return rec(n);   
    }
};