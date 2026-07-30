class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int div = n/8;
        int rem = n%8;
        int sum = 0;
        for(int i = 1; i<=div; i++){
            sum = i*8+sum;
        }
        sum = sum + (rem * (div+1));
        return sum;
    }
};