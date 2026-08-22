class Solution {
public:
    bool checkDivisibility(int n) {
        int m = n;
        int sum = 0;
        int prd = 1;
        while (n != 0) {
            int digit = n % 10;
            sum += digit;
            prd *= digit;
            n = n / 10;
        }
        int div = m % (sum + prd);
        if (div == 0) {
            return true;
        } else {
            return false;
        }
    }
};