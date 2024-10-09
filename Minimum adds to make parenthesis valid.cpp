// leetcode ----> https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/


class Solution {
public:
    int minAddToMakeValid(string s) {
        int c = 0;
        stack<int> st;
        for(char c : s){
            if(!st.empty()){
                if(c == ')' and st.top() == '('){
                    st.pop();
                }else{
                    st.push(c);
                }
            }else{
                st.push(c);
            }
        }

        return st.size();
    }
};
