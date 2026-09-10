class Solution {
public:
    bool checkValidString(string s) {
        int minn = 0;
        int maxx = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                minn++;
                maxx++;
            } else if (s[i] == ')') {
                minn--;
                maxx--;
            } else {
                minn--;
                maxx++;
            }

            if (maxx < 0) {
                return false;
                break;
            }
            if (minn < 0) {
                minn = 0;
            }
            
        }
        if (minn == 0) {
            return true;
        }else{
            return false;
        }
    }
};