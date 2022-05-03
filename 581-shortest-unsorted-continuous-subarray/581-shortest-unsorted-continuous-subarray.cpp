class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        vector<int>a=nums;
        sort(a.begin(),a.end());
        
        int i=0;
        
        while(i<nums.size() && a[i]==nums[i])
            i++;
        
        
        if(i==nums.size())
            return 0;
        
        int j=nums.size()-1;
        
        while(j>=0 && a[j]==nums[j])
            j--;
        
        if(a[j]!=nums[j])
            j++;
        
        
        return j-i;
        
    }
};