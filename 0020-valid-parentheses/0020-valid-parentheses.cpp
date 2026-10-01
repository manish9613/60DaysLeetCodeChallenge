class Solution {
public:
    bool isValid(string s) {
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

        // for (int i = 0; i < s.size(); i++) {
        //     if (s[i] == '(' || s[i] == ')') {
        //         s[i] = '1';
        //     } else if (s[i] == '{' || s[i] == '}') {
        //         s[i] = '2';
        //     } else {
        //         s[i] = '3';
        //     }
        // }
        // int num = stoi(s);

        // if (num % 11 == 0) {
        //     return true;
        // } else {
        //     return false;
        // }
    }
};