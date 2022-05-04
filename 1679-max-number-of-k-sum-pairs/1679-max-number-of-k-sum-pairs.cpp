class Solution {
public:
    int maxOperations(vector<int>& a, int k) 
    {
        int ans=0;
        sort(a.begin(),a.end());
        int i=0,j=a.size()-1;
        
        while(i<j)
        {
            if(a[i]+a[j]>k)
            {
                j--;                
            }
            else if(a[i]+a[j]==k)
            {
                ans+=1;
                i++;
                j--;
            }
            else
            {
                i++;
            }
        }
        
        return ans;
    }
};