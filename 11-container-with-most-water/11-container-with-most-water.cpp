class Solution {
public:
    int maxArea(vector<int>& a) 
    {
        int i=0;
        int j=a.size()-1;
        
        int ans=INT_MIN;
        
        
        while(i<j)
        {
            int x=min(a[i],a[j]);
            ans=max(ans,x*(j-i));
            
            if(a[i]<a[j])
                i++;
            else
                j--;
            
        }
        return ans;        
    }
};