class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int st = 0;
        int e= 0;
        int ans = 0;
        int si= 0;
        unordered_set<char> c;
        while(e<s.size()){
            if(c.count(s[e]) != 0){
                ans= max(ans,si);
                while(c.count(s[e])!=0){
                    c.erase(s[st]);
                    st++;
                    si--;
                }
            }
            else{
                si++;
                c.insert(s[e]);
                e++;
            }
        }
        ans = max(si, ans);
        return ans;
    }
};
