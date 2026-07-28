class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        string half = s.substr(0, n / 2);
        sort(half.begin(), half.end());
        string m = half;
        reverse(half.begin(), half.end());
        if (n % 2 == 0) {
            return m + half;
        }
        string mid(1, s[n / 2]);
        return m + mid + half;
    }
};