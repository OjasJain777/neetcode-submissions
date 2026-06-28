class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> p(nums.size());
        p[0]=1;
        vector<int> f(nums.size());
        f.back() = 1;
        for(int i = 0; i<p.size()-1;i++){
            p[i+1] = p[i]*nums[i]; 
        }
        for(int j = nums.size()-1;j>0;j--){
            f[j-1] = f[j]*nums[j];
        }
        for(int i= 0;i<nums.size();i++){
            nums[i] = p[i]*f[i];
        }
        return nums;
    }
};
