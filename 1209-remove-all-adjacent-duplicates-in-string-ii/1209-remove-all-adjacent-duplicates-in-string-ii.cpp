class Solution {
public:
    string removeDuplicates(string a, int k) 
    {
        stack<pair<char,int>>s;
        for(int i=0;i<a.length();i++)
        {   
            if(s.empty())
            {
                s.push({a[i],1});                
            }
            else if(s.top().first==a[i])
            {
                s.push({a[i],s.top().second+1});
            }
            else
            {
                s.push({a[i],1});
            }
             if(k==s.top().second)
            {
                int cnt=k;
                while(cnt--)
                {
                    s.pop();
                }
            }
            
        }
        string ans;
        
        while(!s.empty())
        {
            ans.push_back(s.top().first);
            s.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;        
    }
};