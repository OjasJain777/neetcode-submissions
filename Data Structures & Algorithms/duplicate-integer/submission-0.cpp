class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for(int x: nums){
            if(s.count(x)!=0){
                return 1;
            }
            s.insert(x);
        }
        return 0;
    }
};