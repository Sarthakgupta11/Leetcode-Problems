class Solution {
public:
    int firstMissingPositive(vector<int>& nums)
    {
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0 && nums[i]<=n)
            {
            int pos=nums[i]-1;
            while(nums[i]>0 && nums[i]<=n && pos>=0 && nums[i]!=nums[pos])
            {
                swap(nums[i],nums[pos]);
                pos=nums[i]-1;
            }   
        }
        }
        
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1)
                return i+1;
        }
        
        return n+1;
    }
};