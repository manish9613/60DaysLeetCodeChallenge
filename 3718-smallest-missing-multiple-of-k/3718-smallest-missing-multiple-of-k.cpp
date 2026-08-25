class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> s;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int div = nums[i] / k;
            int mod = nums[i] % k;
            if (mod == 0) {
                s.insert(div);
            }
        }
        int x = *s.begin();
        if (x != 1) {
            return k;
        } else {
            for (auto it = next(s.begin()); it != s.end(); it++) {
                if( *it - 1 != x){
                    break;
                }
                x = *it;
            }
            return (x+1)*k; 
        }
    }
};