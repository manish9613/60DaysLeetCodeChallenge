class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int minOdd = INT_MAX;

        // Find the smallest odd number
        for (int x : nums) {
            if (x % 2 == 1) {
                minOdd = min(minOdd, x);
            }
        }

        // No odd numbers => all are even
        if (minOdd == INT_MAX) {
            return true;
        }

        // If an even number is smaller than the smallest odd,
        // we cannot make it odd.
        for (int x : nums) {
            if (x % 2 == 0 && x < minOdd) {
                return false;
            }
        }

        return true;
    }
};