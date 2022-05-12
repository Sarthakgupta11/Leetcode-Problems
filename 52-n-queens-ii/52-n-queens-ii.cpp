class Solution {
public:
    int ans=0;
    void solve(int col,int n,vector<int>left,vector<int>uppdiag,vector<int>lowdiag)
    {
        if(col==n)
        {
            ans++;
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(left[row]+uppdiag[n-1+row-col]+lowdiag[row+col]==0)
            {
                left[row]=1;
                lowdiag[row+col]=1;
                uppdiag[n-1+row-col]=1;
                solve(col+1,n,left,uppdiag,lowdiag);
                left[row]=0;
                lowdiag[row+col]=0;
                uppdiag[n-1+row-col]=0;
            }
        }
    }

    int totalNQueens(int n) {
        vector<int>left(n,0);
        vector<int>uppdiag(2*n-1,0);
        vector<int>lowdiag(2*n-1,0);
        
        solve(0,n,left,uppdiag,lowdiag);
        return ans;
        
    }
};