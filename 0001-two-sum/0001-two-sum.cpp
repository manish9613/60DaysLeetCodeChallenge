

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int size = nums.size();

        // for(int i = 0; i<size; i++){
        //     int ele = nums[i];

        //     for(int j = i+1; j<size; j++){
        //         int sum = nums[j] + ele;
        //         if(target == sum){
        //             return{i,j};
        //         }
        //     }
        // }return{};

        // Better solution

        map<int, int> mpp;
        int n = nums.size();
        for(int i = 0; i<n ; i++){
            int num = nums[i];
            int moreNeeded = target - num;
            if(mpp.find(moreNeeded) != mpp.end()){
                return {mpp[moreNeeded] , i};

            }
            mpp[num] = i;
        }
        return {-1, -1};
    }
};