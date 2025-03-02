class Solution {
public:
    bool isValid(string s) {
     stack<char> st;
        for (int i = 0; i < s.size(); ++i) {
            st.push(s[i]);
            if (s[i] == 'c') {
                if (!st.empty() && st.top() == 'c') {
                    st.pop();
                    if (!st.empty() && st.top() == 'b') {
                        st.pop();
                        if (!st.empty() && st.top() == 'a') {
                            st.pop();
                        }
                         else {
                            return false;
                        }
                    }
                     else {
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
};