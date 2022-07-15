class Solution {
public:
    
    int maxProduct(vector<int>& a) 
    {
        int n=a.size();
        if(n==0)
            return 0;
        
        int mx=a[0];
        int mn=a[0];
        int ans=a[0];
        
        for(int i=1;i<n;i++)
        {
            if(a[i]<0)
            swap(mn,mx);
            
            mx=max(a[i],mx*a[i]);
            mn=min(a[i],mn*a[i]);
            
            ans=max(ans,mx);
        }
        return ans;
    }
};