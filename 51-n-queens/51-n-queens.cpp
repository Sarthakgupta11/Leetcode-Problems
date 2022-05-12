class Solution {
public:
    
    void solve(int col,vector<vector<string>>&ans,vector<string>board,int n,vector<int>left,vector<int>uppdiag,vector<int>lowdiag)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(left[row]+uppdiag[n-1+row-col]+lowdiag[row+col]==0)
            {
                left[row]=1;
                lowdiag[row+col]=1;
                uppdiag[n-1+row-col]=1;
                board[row][col]='Q';
                solve(col+1,ans,board,n,left,uppdiag,lowdiag);
                board[row][col]='.';
                left[row]=0;
                lowdiag[row+col]=0;
                uppdiag[n-1+row-col]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) 
    {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++)
        board[i]=s;
        
        vector<int>left(n,0);vector<int>uppdiag(2*n-1,0);vector<int>lowdiag(2*n-1,0);
                
        solve(0,ans,board,n,left,uppdiag,lowdiag);
        
        return ans;     
    }
};