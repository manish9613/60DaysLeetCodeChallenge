class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.rbegin(), nums.rend());

        vector<int> ans;
        unordered_set<int> st;

        for (int x : nums) {
            if (st.find(x) == st.end()) {
                ans.push_back(x);
                st.insert(x);

                if (ans.size() == k)
                    break;
            }
        }

        return ans;
    }
};