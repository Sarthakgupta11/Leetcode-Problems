class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries)
    {
        int ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            ans+=nums[i];
        }
        vector<int>a;
        
        for(int i=0;i<queries.size();i++)
        {
            if(queries[i][0]%2==0)
            {
                if(nums[queries[i][1]]%2==0)
                    ans+=queries[i][0];
                else
                {
                }
                nums[queries[i][1]]=nums[queries[i][1]]+queries[i][0];
            }
            else
            {
                if(nums[queries[i][1]]%2==0)
                    ans-=nums[queries[i][1]];
                else
                {
                    ans+=nums[queries[i][1]]+queries[i][0];
                }
                nums[queries[i][1]]=nums[queries[i][1]]+queries[i][0];
            }
            a.push_back(ans);
        }
             
        return a;
        
    }
};