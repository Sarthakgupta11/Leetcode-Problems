class Solution {
public:
    int maxSubArray(vector<int>& a) 
    {
        int n=a.size();
        if(n==0)
            return 0;
        
        int ans=a[0];
        int cur=a[0];
        
        for(int i=1;i<n;i++)
        {
            cur=max(a[i],cur+a[i]);
            ans=max(ans,cur);
        }
     return ans;   
    }
};