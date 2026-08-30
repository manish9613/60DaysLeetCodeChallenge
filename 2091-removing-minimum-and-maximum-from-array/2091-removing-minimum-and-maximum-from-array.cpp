class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int miIdx = 0;
        int maIdx = 0;

        int minn = INT_MAX;
        int maxx = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (minn > nums[i]) {
                miIdx = i;
                minn = nums[i];
            }
            if (maxx < nums[i]) {
                maIdx = i;
                maxx = nums[i];
            }
        }

        int a = n - max(miIdx, maIdx) +  min(miIdx, maIdx) + 1;
        int b = max(miIdx, maIdx) + 1;
        int c = n -  min(miIdx, maIdx);

        return min({a, b, c});


    }
};