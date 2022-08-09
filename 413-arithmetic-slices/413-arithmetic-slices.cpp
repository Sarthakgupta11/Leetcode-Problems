class Solution {
public:
    int numberOfArithmeticSlices(vector<int>&a) 
    {
        int n=a.size();
        
        if(n<3)
        return 0;
        
        int d=a[1]-a[0];
        int x=0;
        int ans=0;
        
        for(int i=2;i<n;i++)
        {
            if(a[i]-a[i-1]==d)
                x++;
            else
            {
             d=a[i]-a[i-1];  
             x=0;
            }
            ans+=x;            
        }
        
        return ans;
    }
};