class Solution {
public:
void allsubsets(vector<int>&nums,vector<int> &ans,int i,vector<vector<int>> &powset)
    {
        if (i==nums.size()) 
        {powset.push_back({ans}); 
        return;} 
        ans.push_back(nums[i]);
        allsubsets(nums,ans,i+1,powset);
        ans.pop_back();
        allsubsets(nums,ans,i+1,powset);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powset;
        vector<int> ans;
        allsubsets(nums,ans,0,powset);
        return powset;
        
    }
};