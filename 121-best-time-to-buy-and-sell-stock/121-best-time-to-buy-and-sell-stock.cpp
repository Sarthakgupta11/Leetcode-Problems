class Solution {
public:
    int maxProfit(vector<int>& a) {
        int ans=0,mn=INT_MAX;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<mn)
            mn=a[i];
            
            ans=max(ans,a[i]-mn);
        }
        
        return ans;
    }
};