class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int i=0;        
        for(int reach=0;i<nums.size() && i<=reach;i++)
        {
            reach=max(reach,i+nums[i]);
            
        }
        
        if(i==nums.size())
            return true;
        
        return false;
    }
};