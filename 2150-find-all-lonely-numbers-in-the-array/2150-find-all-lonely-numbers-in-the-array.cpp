class Solution {
public:
    vector<int>findLonely(vector<int>& a) 
    {
        
        sort(a.begin(),a.end());
        
        vector<int>ans;
        
        if(a.size()>1)
        {
            if(a[1]!=a[0]+1 && a[0]!=a[1])
            ans.push_back(a[0]);
        }
        else
            ans.push_back(a[0]);

        for(int i=1;i<a.size();i++)
        {
             if(i==a.size()-1)
             {if(a[i-1]!=a[i]-1 && a[i]!=a[i-1])
                ans.push_back(a[i]);
             }
            else if(a[i-1]!=a[i]-1 && a[i+1]!=a[i]+1 && a[i]!=a[i-1] && a[i]!=a[i+1])
            {
                ans.push_back(a[i]);                
            }
        }
        
        
        return ans;        
    }
};