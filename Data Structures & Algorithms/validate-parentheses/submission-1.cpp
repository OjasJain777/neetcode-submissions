class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char x : s){
            if(x == '(' || x == '[' || x == '{'){
                st.push(x);
            }
            else if(st.size()==0){
                return 0;
            }
            else{
                if(x==')' && st.top()=='('){
                    st.pop();
                }
                else if(x=='}' && st.top() == '{'){
                    st.pop();
                }
                else if(x==']' && st.top() == '['){
                    st.pop();
                }
                else{
                    return 0;
                }
            }
        }
        if(st.size()!=0){
            return 0;
        }
        return 1;
    }
};
