class Solution {
public:
    void f(int ind,vector<int>&dp,vector<int>&nums,vector<vector<int>>&arr,int n){
        if(ind>=n){
            arr.push_back(dp);
            return;
        }
        dp.push_back(nums[ind]);
        f(ind+1,dp,nums,arr,n);
        dp.pop_back();
        f(ind+1,dp,nums,arr,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>arr;
        vector<int>dp;
        int n=nums.size();
        f(0,dp,nums,arr,n);
        return arr;
    }
};
