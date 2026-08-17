class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int, int>mp;
        int n = nums2.size();
        for(int i = n-1; i>=0; i--){
            int ele = nums2[i];
            while(!st.empty() && st.top()<=ele){
                st.pop();
            }
            if(st.empty()){
                mp[ele] = -1;
            }else{
                mp[ele] = st.top();
            }
            st.push(ele);
        }
        vector<int>ans;
        for(int x : nums1){
            ans.push_back(mp[x]);
        }
        return ans;
    }
};