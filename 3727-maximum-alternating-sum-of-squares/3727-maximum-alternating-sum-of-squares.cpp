class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        long long pSum = 0;
        long long nSum = 0;
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) > abs(b); 
                }
            );
        int m = n % 2;
        int fH = 0;
        if (m == 1) {
            fH = n / 2 + 1;
        } else {
            fH = n / 2;
        }
        for (int i = 0; i < fH; i++) {
            pSum = pSum + 1ll * nums[i] * nums[i];
        }
        for (int j = fH; j < n; j++) {
            nSum = nSum + 1ll * nums[j] * nums[j];
        }
        long long ans = pSum - nSum;
        return ans;
    }
};