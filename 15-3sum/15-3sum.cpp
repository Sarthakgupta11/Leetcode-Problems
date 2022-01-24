class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) 
    {
        sort(a.begin(),a.end());
        int n=a.size();
        
        vector<vector<int>>ans;
        
        for(int i=0;i<n;i++)
        {
            int l=i+1;
            int r=n-1;
            
            if(i>0 && a[i]==a[i-1])
                continue;
            
            while(l<r)
            {
                vector<int>x;
                if(a[i]+a[l]+a[r]==0)
                {
                    x.push_back(a[i]);
                    x.push_back(a[l]);
                    x.push_back(a[r]);
                    ans.push_back(x);
                    
                    while(l<r-1 && a[l]==a[l+1])
                        l++;
                    while(l+1<r && a[r]==a[r-1])
                        r--;
                    l++;
                    r--;
                }
                else if(a[i]+a[l]+a[r]<0)
                l++;
                else
                r--;
            }
        }
        
        return ans;
    }
};