class Solution {
public:
    int missingNumber(vector<int>& a) 
    {
        int sum=0;
        
        for(int i=0;i<a.size();i++)
        {
                sum=sum+a[i];
        }
        
        
        return a.size()*(a.size()+1)/2 - sum;
    }
};