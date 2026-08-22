class Solution {
public:
    bool checkDivisibility(int n) {
        int m = n;
        int sum = 0;
        int prd = 1;

        while (n != 0) {
            int digit = n % 10;
            sum = sum + digit;
            prd = prd * digit;
            n = n / 10;
        }
        int add = sum + prd;
        if (m % add == 0) {
            return true;
        } else {
            return false;
        } 
    }
};