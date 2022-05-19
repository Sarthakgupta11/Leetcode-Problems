class Solution {
public:
    vector<string>ans;
    int n;
    void solve(string s,int o,int c)
    {
        if(o>n)
            return ;
        if(c>n)
            return ;
        if(o<c)
        {
            return;
        }
        if(o==n && c==n)
        {
            ans.push_back(s);            
        }
    
            s.push_back('(');
        solve(s,o+1,c);
        s.pop_back();
        s.push_back(')');
        solve(s,o,c+1);
        return;
    }
    vector<string> generateParenthesis(int N) 
    {
        n=N;
        ans.clear();
        string s="";
        solve(s,0,0);       
    
                
        return ans;
    }
};