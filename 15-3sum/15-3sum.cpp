class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) 
    {
        vector<vector<int>>ans;
        
        sort(a.begin(),a.end());
        
        if(a.size()<3)
          return ans;
        
        for(int x=0;x<a.size()-2;x++)
        {
            while(x<a.size() && x>0 && a[x]==a[x-1])
            {
                x++; 
                continue;
            }
            
          int i=x+1;
          int j=a.size()-1;
            while(i<j)
            {
                
                if(a[i]+a[j]+a[x]==0 && i<j)
                {
                    vector<int>z{a[x],a[i],a[j]};
                    ans.push_back(z);
                     //cout<<1<<" ";
                    while(j>i && a[j]==a[j-1])
                        j--;
                    i++;
                    j--;
                }
                else if(a[i]+a[j]+a[x]>0 && i<j)
                    j--;
                else if(i<j)
                    i++;
            }
        }    
        
        
        return ans;      
    }
};