class Solution {
public:
    bool isValid(string s) {
        // int small = 0;
        // int med = 0;
        // int large = 0;
        // for (int i = 0; i < s.size(); i++) {
        //     if (s[i] == '(') {
        //         small++;
        //     } else if (s[i] == ')') {
        //         small--;
        //     } else if (s[i] == '{') {
        //         med++;
        //     } else if (s[i] == '}') {
        //         med--;
        //     } else if (s[i] == '[') {
        //         large++;
        //     } else {
        //         large--;
        //     }
        // }
        // if (small == 0 && med == 0 && large == 0) {
        //     return true;
        // } else {
        //     return false;
        // }

        stack<char> st;
        st.push(s[0]);
        for (int i = 1; i < s.size(); i++) {
            if (!st.empty() && ((st.top() == '(' && s[i] == ')') ||
                                (st.top() == '{' && s[i] == '}') ||
                                (st.top() == '[' && s[i] == ']'))) {
                st.pop();

            } else {
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};