class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i<s.length(); i++) {
            char ch = s[i];

            // opening bracket.
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);

            }
            else {
                // closing brackets - ch.
                if(!st.empty()) {
                    char topch = st.top();
                    if(ch == ')' && topch == '(') {
                        // matching brackets.
                        st.pop();
                    }
                    else if(ch == '}' && topch == '{') {
                        // matching brackets.
                        st.pop();
                    }
                    else if(ch == ']' && topch == '[') {
                        // matching brackets.
                        st.pop();
                    }
                    else {
                        return false; // brackets not maching.
                    }
                }
                else {
                    return false;
                }
            }
        }
        
        if(st.empty()) {
            // valid.
            return true;

        }
        else {
            return false;
        }

    }
};