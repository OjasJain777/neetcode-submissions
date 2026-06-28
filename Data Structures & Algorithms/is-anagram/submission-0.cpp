class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        for(int x: s){
            m[x]++;
        }
        for(int x: t){
            if(m[x]==0){
                return 0;
            }
            if(m[x]==1){
                m.erase(x);
                continue;
            }
            m[x]--;
        }
        if(m.size()==0){
            return 1;
        }
        return 0;
    }
};
