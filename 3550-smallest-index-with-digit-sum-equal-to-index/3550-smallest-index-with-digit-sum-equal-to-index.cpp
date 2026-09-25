class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            int k = nums[i];

            int digit = k % 10;
            k = k / 10;
            int digit2 = k % 10;
            k = k / 10;

            int digit3 = k % 10;
            k = k/10;

            int digit4 = k%10;
            sum = digit + digit2 + digit3 + digit4;

            if (i == sum) {
                ans = i;
                break;
            }
        }

        return ans;
    }
};