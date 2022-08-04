class Solution {
public:
    
    vector<vector<int>>dp;
    
    int rec(string s1,int m,string s2,int n)
    {
        if(m==0)
            return n;
        if(n==0)
            return m;
        
        if(dp[m][n]!=-1)
            return dp[m][n];
        
        if(s1[m-1]==s2[n-1])
            return dp[m][n]=rec(s1,m-1,s2,n-1);
        
        
        int ins=rec(s1,m-1,s2,n);
        int del=rec(s1,m,s2,n-1);
        int rep=rec(s1,m-1,s2,n-1);
        
        return dp[m][n]=1+ min(ins,min(del,rep));
    }
    
    
    
    
    int minDistance(string s1, string s2) 
    {
        int m=s1.size(),n=s2.size();
        
        dp.resize(m+1,vector<int>(n+1,-1));
        
        return rec(s1,m,s2,n);
    }
};