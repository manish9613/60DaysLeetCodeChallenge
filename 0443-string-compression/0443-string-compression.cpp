class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        vector<char> ans;
        int count = 1;
        char val = chars[0];
        for (int i = 1; i < n; i++) {
            if (chars[i] == val) {
                count++;
            } else {
                ans.push_back(val);
                if (count > 1) {
                    string s = to_string(count);
                    for (char c : s) {
                        ans.push_back(c);
                    }
                }
                count = 1;
                val = chars[i];
            }
        }
        ans.push_back(val);
        if (count > 1) {
            string s = to_string(count);
            for (char c : s) {
                ans.push_back(c);
            }
        }
        for (int i = 0; i < ans.size(); i++) {
            chars[i] = ans[i];
        }
        return ans.size();
    }
};
