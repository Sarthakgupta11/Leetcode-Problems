class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>ans;
        
        if(nums.size()==0)
            return {-1,-1};
        
        int i=0,j=nums.size()-1;
        
        while(i<j)
        {
            int mid=(i+j)/2;
            
            if(nums[mid]<target)
                i=mid+1;
            else
                j=mid;
        }
        
        if(nums[i]==target)
            ans.push_back(i);
        
        j=nums.size()-1;
        
        while(i<j)
        {
            int mid =(i+j)/2+1;
            
            if(nums[mid]>target)
                j=mid-1;
            else
                i=mid;
        }
        
        if(nums[j]==target)
            ans.push_back(j);     
        
        
        if(ans.empty())
        {
            return {-1,-1};
        }       
        
     return ans;   
    }
};