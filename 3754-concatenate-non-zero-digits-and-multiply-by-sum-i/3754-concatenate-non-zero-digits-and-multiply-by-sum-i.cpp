class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n == 0) return 0;
        string s = "";
        int sum = 0;
        while(n!=0){
            int digit = n%10;

            if(digit != 0){
                sum = digit + sum;
                string ch = to_string(digit);
                s = s+ch;
            }
            n = n/10;
        }
        reverse(s.begin(), s.end());
        int ans = stoi(s);
        return 1ll*ans*sum;

    }
};