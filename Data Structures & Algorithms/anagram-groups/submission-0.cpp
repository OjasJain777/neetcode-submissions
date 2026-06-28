class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> m;
        vector<vector<string>> ans;
        for(string x: strs){
            vector<int> h(26, 0);
            for(char y: x){
                h[y-'a']++;
            }
            m[h].push_back(x);
        }
        for(auto y: m){
            ans.push_back(y.second);
        }
        return ans;
    }
};
