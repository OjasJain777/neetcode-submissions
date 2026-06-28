class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long a = 1;
        int c = 0;
        for(int x: nums){
            if(x==0){
                c++;
                continue;
            }
            a *= x;
        } 
        vector<int> ans(nums.size(),0);
        if(c>1){
            return ans;
        }
        if(c==1){
            for(int i = 0; i<nums.size();i++){
                if(nums[i]==0){
                    ans[i] = a;
                }
            }
        }
        else{
            for(int i = 0; i<nums.size();i++){
                ans[i] = a/nums[i];
            }
        }
        return ans;
    }
};
