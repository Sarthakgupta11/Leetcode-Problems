class Solution {
public:
    int trap(vector<int>& a) 
    {
        int l=0;
        int r=a.size()-1;
        int ml=0,mr=0;
        int ans=0;
        
        while(l<r)
        {
            if(a[l]<a[r])
            {
                if(ml<a[l])
                    ml=a[l];
                ans+=ml-a[l];
                l++;
            }
            else
            {
                if(mr<a[r])
                    mr=a[r];
                ans+=mr-a[r];
                r--;
            }   
        }
        
        return ans;
        
    }
};