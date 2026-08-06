class Solution {
public:
    int smallestNumber(int n, int t) {
        int unit = n % 10;
        int tenth = 1;
        if (n / 10 != 0) {
            tenth = (n / 10) % 10;
        }
        int hundre = 1;

        int mul = unit * tenth * hundre;
        while (mul % t != 0) {
            n++;
            unit = n % 10;
            if (n / 10 != 0) {
                tenth = (n / 10) % 10;
            }

            hundre = 1;
            mul = unit * tenth * hundre;
        }
        return n;
    }
};