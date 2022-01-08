class Solution {
public:
    int numberOfBeams(vector<string>& bank) 
    {
        int ans=0;
        int m=bank.size();
        int n=bank[0].length();
        for(int i=0;i<m-1;i++)
        {
            int x=0;
            for(int j=0;j<n;j++)
            {
                if(bank[i][j]=='1')
                    x++;
            }
            int y=0;
            while(y==0 && i<m-1)
            {
                i++;
            for(int j=0;j<n;j++)
            {
                if(bank[i][j]=='1')
                    y++;
            }
            }
i--;
            ans=ans+ x*y;       
            if(i==m-2)
                break;           
           
            
        }
            return ans;       
        
    }
};