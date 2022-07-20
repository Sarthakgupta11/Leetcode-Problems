class Solution {
public:
    int maxProfit(vector<int>& a) 
    {
        int n=a.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int mn=a[i];
            while(i+1<n && a[i+1]>a[i])
            {
                i++;
            }
            int mx=a[i];
                       
            ans+=mx-mn;
        }
        
        return ans;
    }
};