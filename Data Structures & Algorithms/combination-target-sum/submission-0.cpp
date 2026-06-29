void t(int s, int target,int i, vector<vector<int>> &ans, vector<int> &a, vector<int> &nums){
    if(s==target){
        ans.push_back(a);
    }
    else if(s>target){
        return;
    }
    for(int j = i;j<nums.size();j++){
        a.push_back(nums[j]);
        t(s+nums[j], target, j, ans, a, nums);
        a.pop_back();
    }
}
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> a;
        t(0, target,0, ans, a, nums);
        return ans;
    }
};
