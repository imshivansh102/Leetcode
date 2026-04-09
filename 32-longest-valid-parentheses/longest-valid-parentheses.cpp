class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1); // for finding length.
        int maxLength = 0;

        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if(ch == '(') {
                st.push(i);
            }
            else { // ch is ) .
                st.pop();
                if(st.empty()) {
                    st.push(i);
                }
                else { // find length.
                    int len = i - st.top();
                    maxLength = max(len, maxLength);

                }

            }
        }

        return maxLength;
        
    }
};