class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";
        for(auto x: s){
            if((x<='z' && x>='a') || (x<='Z' && x >= 'A') || (x<='9' && x>='0')){
                s2 += tolower(x);
            }
        }
        int i = 0;
        int j = s2.size()-1;
        while(i<=j){
            if(s2[i] != s2[j]){
                return 0;
            }
            i++;
            j--;
        }
        return 1;
    }
};
