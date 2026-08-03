class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>mp;
        for(auto it : nums){
            mp[it]++;
        }
        int ans = 0;
        for(auto x : mp){
            if(x.second == 2){
                ans = x.first ^ ans;
            }
        }
        return ans;
    }
};