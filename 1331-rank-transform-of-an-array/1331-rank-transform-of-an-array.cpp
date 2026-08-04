class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        map<int,int> mp;

        for(int x : arr)
            mp[x]; // If duplicate found no increment in value ,

        int rank = 1;
        for(auto &it : mp)
            it.second = rank++;

        for(int &x : arr)
            x = mp[x];

        return arr;
    }
};