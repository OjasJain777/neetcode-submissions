class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> s;
        int ans = 0;
        for(int i =prices.size()-1;i>=0;i--){
            while(s.size()!=0 && s.back() < prices[i]){
                s.pop_back();
            }
            if(s.size()!=0){
                ans = max(ans, s[0] - prices[i]);
            }
            s.push_back(prices[i]);
        }
        return ans;
    }
};
