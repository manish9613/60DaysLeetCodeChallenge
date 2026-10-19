class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        int eq = 0;
        int low = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]== target){
                eq ++;
            }
            if(nums[i] < target){
                low++;
            }
        }
        for(int i = 0; i < eq ; i++){
            ans.push_back(low + i);
        }
        return ans;
    }
};