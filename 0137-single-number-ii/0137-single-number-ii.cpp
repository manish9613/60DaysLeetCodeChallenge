class Solution {
public:
    // int singleNumber(vector<int>& nums) {

    // Brute force
    // int n = nums.size();
    // unordered_map<int, int>mp;
    // for(auto it:nums){
    //     mp[it]++;
    // }
    // int ans = 0;
    // for(auto x : mp){
    //     if(x.second == 1){
    //         ans =  x.first;
    //     }
    // }
    // return ans;
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < 32; i++) {

            int cnt = 0;

            for (int x : nums) {

                if ((x >> i) & 1)
                    cnt++;
            }

            if (cnt % 3)
                ans |= (1 << i);
        }

        return ans;
    }
};