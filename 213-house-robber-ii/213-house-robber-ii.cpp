class Solution {
public:
    int rob(vector<int>& a) 
    {
        int n=a.size();
        
        if(n==1)
            return a[0];
        
        if(n==2)
            return max(a[1],a[0]);
        
        vector<int>b=a;
        
        for(int i=2;i<n-1;i++)
        {
            if(i==2)
            a[i]=a[i]+a[i-2];
            else
            a[i]=a[i]+ max(a[i-2],a[i-3]);    
        }
        
        for(int i=3;i<n;i++)
        {
            if(i==3)
                b[i]=b[i]+b[i-2];
            else
                b[i]=b[i]+max(b[i-2],b[i-3]);
        }
        
        return max(max(a[n-2],a[n-3]),max(b[n-1],b[n-2]));
    }
};