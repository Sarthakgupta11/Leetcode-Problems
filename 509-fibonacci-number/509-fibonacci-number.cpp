class Solution {
public:
    
    int fib(int n)
    {
        if(n==0 || n==1)
            return n;
        
        int a=0;
        int b=1;
        int ans=0;
        
        for(int i=0;i<=n-2;i++)
        {
            ans=a+b;
            a=b;
            b=ans;
        }
        return ans;   
    }
};