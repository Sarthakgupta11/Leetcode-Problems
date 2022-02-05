class Solution {
public:
    int minCostSetTime(int start, int move, int push, int target) 
    {
        int ans=INT_MAX;
        for(int i=0;i<100;i++)
        {
            for(int j=0;j<100;j++)
            {
                if(i*60+j!=target)
                    continue;
                
                int flag=0;
                int a[4];
                a[0]=i/10;
                a[1]=i%10;
                a[2]=j/10;
                a[3]=j%10;
                int curr=start;
                int tans=0;
                
                for(int x=0;x<4;x++)
                {
                    if(a[x]!=0)
                    flag=1;
                    
                    if(flag)
                    {
                        if(a[x]!=curr)
                        {
                            curr=a[x];
                            tans+=move;
                        }
                        tans+=push;                       
                    }
                }
              ans=min(ans,tans);
            }
        }
        
        return ans;
        
        
    }
};