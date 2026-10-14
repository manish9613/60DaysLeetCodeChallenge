class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        long long val = 0;
        string ans = "";
        if(sum > 9*num){
            return ans;
        }
        for(int i = 0; i<num; i++){
            if(sum>=9){
                sum = sum - 9;
                val = val + 9*9;
                ans.push_back('9');

            }else{
                val = val + sum*sum;
                char ch = sum + '0';
                ans.push_back(ch);
                sum = 0;

            }
            
        }
        return ans;
        
    }
};