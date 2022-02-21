class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) 
    {
        vector<vector<int>>ans;
        int n=a.size();
        sort(a.begin(),a.end());
        
        for(int i=0;i<n;i++)
        {
            vector<int>x;
            x.push_back(a[i][0]);
            int r=a[i][1];
            while(i<n-1 && r>=a[i+1][0])
            {
                r=max(r,a[i+1][1]);
                i++;
            }
            x.push_back(r);
            ans.push_back(x);
        }
        
        return ans;
    }
};