class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        int ans = 0;
        for(auto x : mp){
            if(x.second == 1){
                ans =  x.first;
            }
        }
        return ans;
    }
};