class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>ans(2);
        int flag=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target && flag==0)
            {
                ans[0]=i;
                ans[1]=i;                
                flag=1;
            }
            else if(nums[i]==target && flag)
            {
                ans[1]=i;
            }                     
        }
        if(flag==0)
        {
            ans[0]=-1;
            ans[1]=-1;
        }
     return ans;   
    }
};