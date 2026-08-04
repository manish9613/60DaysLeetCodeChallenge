class Solution {
public:
    bool isDigitorialPermutation(int n) {
        int m = n;
        int sum = 0;
        long long mul = 1;
        while(n!=0){
            int digit = n%10;
            for(int i = 1; i<=digit; i++){
                mul = i*mul;
            }
            sum = sum+mul;
            n = n/10;
            mul = 1;
        }
        string s1 = to_string(m);
        string s2 = to_string(sum);
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if(s1 == s2){
            return true;
        }else{
            return false;
        }
    }
};