class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans; // this is the catch, because when you are pushing back a list on a vector , vector should accept vector type na; GANDA CODER
        int n = nums.size();
        int subset = 1 << n;

        for (int i = 0; i < subset; i++) {
            vector<int> sub;

            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    sub.push_back(nums[j]);
                }
            }

            ans.push_back(sub);
        }

        return ans;
    }
};