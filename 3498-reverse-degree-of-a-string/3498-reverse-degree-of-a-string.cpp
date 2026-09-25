class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        int maxx  = 26;
        for(int i  = 0; i<s.size(); i++){
            int a = maxx - (s[i] - 'a');
            sum+=a*(i+1);
        }

        return sum;
    }
};