class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i =0;
        vector<vector<int>> ans;
        while(i<nums.size()-2){
            if(i>0 && nums[i] == nums[i-1]){
                i++;
                continue;
            }
            int s = i+1;
            int e = nums.size()-1;
            while(s<e){
                int sum = nums[s] + nums[e] + nums[i];
                if(sum == 0){
                    ans.push_back({nums[s],nums[e],nums[i]});
                    s++;
                    e--;
                    while(s<e && nums[s] == nums[s-1]){
                        s++;
                    }
                    while(s<e && nums[e] == nums[e+1]){
                        e--;
                    }
                }
                else if(sum < 0){
                    s++;
                }
                else{
                    e--;
                }
            }
            i++;
        }
        return ans;
    }
};
