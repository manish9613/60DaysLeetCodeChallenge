class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int var = 0;
        int maxx = 0;
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                var++;
                maxx++;
            }
            if(s[i] == ')'){
                var--;
                maxx--;
            }
            
            ans = max(maxx, ans);
            
        }
        return ans;

    }
};